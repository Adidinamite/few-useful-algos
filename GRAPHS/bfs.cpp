#include <fstream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
ifstream cin("BFS.in");
ofstream cout("BFS.out");
int n, m, x, p, q;
vector <int >v[100002];
int vizitat[100002];
void ascending(int max_nod)
{
    for(unsigned int k = 1; k<= max_nod;k++)
    {
        sort(v[k].begin(), v[k].end());
    }
}
void bfs(int nod)
{
    queue <int> q;
    q.push(nod);
    vizitat[nod] = 1;
    cout<< nod<<' ';
    while(!q.empty()) {
        for (unsigned int i = 0; i < v[nod].size(); i++) {
            if (vizitat[v[nod][i]] == 0) {
                cout << v[nod][i] << ' ';
                q.push(v[nod][i]);
                vizitat[v[nod][i]] = 1;
            }
        }
        q.pop();
        nod = q.front();
    }
}
int main()
{
    cin >> n >> m >> x;
    while(m--)
    {
        cin >> p >> q;
        v[p].push_back(q);
        v[q].push_back(p);
    }
    ascending(n);
    bfs(x);
}

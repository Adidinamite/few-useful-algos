#include <fstream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
ifstream cin("dfs.in");
ofstream cout("dfs.out");
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
void dfs(int nod) {
    cout << nod << ' ';
    vizitat[nod] = 1;

    for(unsigned int i = 0; i< v[nod].size(); i++) {
        if(vizitat[v[nod][i]] == 0)
            dfs(v[nod][i]);
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
    //ascending(n);
    dfs(x);
}

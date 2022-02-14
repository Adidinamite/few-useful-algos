//#include    <iostream>
#include    <fstream>
#include <vector>
#include <queue>
#include <bitset>
using namespace std;
ifstream cin("dijkstra.in");
ofstream cout("dijkstra.out");
const int dim = 10000;
const int inf= (1<<31)-1;
int noduri, start;
vector <pair<int, int>> G[dim];
int d[dim];
bitset<dim>visited;
void init()
{
    for(int i = 1; i <= noduri ; i++)
    {
        d[i] = inf;
    }
}
void dijkstra(int nod)
{
    init();
    d[nod] = 0;

    priority_queue<pair<int, int> , vector<pair<int,int>>, greater<pair<int, int>>>q;
    visited[nod] = 1;
    q.push(make_pair(d[nod], nod));
    while(!q.empty())
    {
        int distanta = q.top().first;
        int nod_curent = q.top().second;
        q.pop();
        if(distanta <= d[nod_curent])
        {
            for(auto k : G[nod_curent])
            {
                int nodNou = k.first;
                int costNou = k.second;
                if(d[nodNou] > d[nod_curent] + costNou)
                {
                    d[nodNou] = d[nod_curent] + costNou;
                    q.push(make_pair(d[nodNou], nodNou));
                }
            }
        }
    }
}
void read()
{
    cin >> noduri >> start;
    int x, y, z;
    while(cin >> x >> y >> z)
    {
        G[x].push_back(make_pair(y, z));
    }
}
int main()
{
    read();
    dijkstra(start);
    for(int i = 1; i <=noduri; i++)
    {
        if(d[i] == inf)
            cout << "-1 ";
        else cout << d[i] <<" ";
    }
    return 0;
}

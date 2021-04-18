#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
struct cuvinte{
        int dim;
        char cuv[50];
    }V[11];
bool compara(cuvinte x, cuvinte y)
{
    return (x.dim > y.dim);
}
void sortare(){
    sort(V, V+11, compara);
    }
int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) { 
        char x[50];
        cin >> x;
        strcpy(V[i].cuv,x);
        cin.ignore();
        V[i].dim = strlen(x);
    }
    sortare();
    for (int i = n-1; i >=0; i--)
    {
        cout<< V[i].cuv<<endl;
    }

}

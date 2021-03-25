#include <iostream>
#include <algorithm>
using namespace std;

    struct melodie
    {
        char titlu[50];
        char cantaret[50];
        int ascultari;
    }V[5];
    int n;

void read()
{
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> V[i].titlu >> V[i].cantaret >> V[i].ascultari;
    }
}
bool compara(melodie x, melodie y)
{
    return (x.ascultari > y.ascultari);
}
void sortare(){
    sort(V, V+n, compara);
    }
void out()
{
    for(int i = 0; i<n; i++)
    {
        cout<< V[i].titlu <<" "<< V[i].cantaret <<" "<< V[i].ascultari<<endl ;
    }
}
int main()
{
    read();
    sortare();
    out();
    return 0;
}
/*
INPUT

5
dance Obama 10
monkey Trump 32
Okay Beyonce 52
Partyboys Binladem 85
Boom Dababy 3
*/

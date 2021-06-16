#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap <int, string> lookup;
    ///FATA DE MAPS, IN MULTIMAPS POT SA AM MAI MULTE ELEMENTE CU ACEEASI CHEIE

    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(10, "Vikk"));
    lookup.insert(make_pair(30, "Ruj"));
    lookup.insert(make_pair(20, "Bob"));
    //parcurge toate elementele
    for( multimap <int, string>::iterator it = lookup.begin(); it!= lookup.end(); it++)
    {
        cout<< it->first << ": "<<it->second <<"\n";
    }
    cout<<"\n";
    //porneste parcurgerea odata ce a gasit primul element cu cheia respectiva, in acest caz 20
    for( multimap <int, string>::iterator it = lookup.find(20); it!= lookup.end(); it++)
    {
        cout<< it->first << ": "<<it->second <<"\n";
    }
    cout<<"\n";

    //DOAR CHEILE 30
    pair<multimap<int, string>::iterator, multimap <int, string>::iterator> its = lookup.equal_range(30);

    for( multimap <int, string>::iterator it = its.first; it!= its.second; it++)
    {
        cout<< it->first << ": "<<it->second <<"\n";
    }

    return 0;
}

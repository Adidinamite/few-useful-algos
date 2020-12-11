#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string, int> ages;
    ages["Mike"] = 40;// cheie 
    ages["Raj"] = 20;
    ages["Vicky"] = 20;

    ages["Mike"] = 70;// nu adauga un alt mike, ci il modifica pe mike
///STORING
    cout<< ages["Raj"] << endl;

    cout << ages["Sue"] << endl;// sue nu este declarata, asa ca mi se va adauga automat in map cu valoarea 0
    ///PENTRU A SCHIMBA ASTA :
    if(ages.find("Vicky") !=ages.end())
        cout<< "Found Vicky"<< endl;
    else
    {
        cout<<" key not found"<< endl;
    }
    ///

    /*pot adauga perechi in map*/
    pair<string, int> addToMap("Peter", 100);
    ages.insert(addToMap);
    //SAU
    ages.insert(pair<string, int>("Peter",100));
    //SAU
    ages.insert(make_pair("Peter", 100));
////////////////////////////////////////////////////////////////
    for(map<string,int>::iterator it = ages.begin(); it!= ages.end(); ++it)
    {
        cout<< it->first << " : " << it->second << endl;
    }
    //SAU
    for(map<string, int> ::iterator it = ages.begin(); it!=ages.end(); ++it)
    {
        pair<string, int> age = *it;
        cout << age.first<<" : "<< age.second<< endl;
    }

return 0;
}

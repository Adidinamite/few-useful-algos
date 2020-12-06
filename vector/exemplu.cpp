#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> strings; // vector/ variabila / nume variabila/ array size
    //ii dau valoare de 5 elemente vectorului
    strings.push_back("one");// dar pot sa mai adaug elemente
    strings.push_back("two");
    strings.push_back("three");
    ///////////////////////////////////////
    /*for(int i =0; i<strings.size(); ++i)
    //{
     //   cout << strings[i] << " " ;
    }*/
    //SAU
    /*vector<string>::iterator it = strings.begin();
    it++; two
    cout << *it<<endl;*/

    for(vector<string>::iterator it = strings.begin(); it!=strings.end(); ++it)
        cout << *it<< endl;
    vector<string>::iterator it=strings.begin();
    it+=2;
    cout << *it<<endl;

//////////////////////////////////////////////// 
    /*strings[3] = "dog";
    cout << strings[3] << endl;
    cout << strings.size()<< endl;*/
///////////////////////////////////////////////////////////////////////
    /*string cuvant = "anaee";
    strings.push_back(cuvant);
    cout << strings[8] << endl;*/
return 0;
}

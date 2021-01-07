#include <iostream>
#include <set>
using namespace std;

int main(){
    set <int> numbers;//UNIQUE OBJECTS
     numbers.insert(23);
     numbers.insert(13);
     numbers.insert(13);
     numbers.insert(43);
     for(set<int>::iterator it = numbers.begin(); it!= numbers.end(); it++)
     {
         cout<< *it<<" ";
     }

     //if(numbers.find(23) != numbers.end())
     set<int>::iterator itFind = numbers.find(23);
     {
         cout<<"Found: "<<*itFind << endl;
     }
     ///SAU
     if(numbers.count(43)) // RETURNEAZA DOAR 0 SAU 1
        cout<< "Number found" << endl;



}


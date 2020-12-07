#include <list>
#include <iostream>
using namespace std;
int main(){
    list <int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    //cout 1 2 3
    ///////////////////////
    //DIFERENTA DINTRE O LISTA SI UN VECTOR ESTE CA IN VECTOR POT ADAUGA ELEMENTE DOAR IN COADA
    //LA LISTE POT ADAUGA SI IN FATA
    numbers.push_front(0);
    //cout 0 1 2 3
    

    list<int>::iterator it = numbers.begin();
    cout <<"Element: "<< *it <<endl; //afisez primul element
    it++;
    cout<<"Urmatorul: "<<*it << endl; // afisez urmatorul
    numbers.insert(it,100);// pot sa il bag intre 2 vecini din vector, dupa pozitia lui it
    //numbers.erase(iterator) pentru a sterge
    for(list<int>::iterator it = numbers.begin(); it!=numbers.end(); ++it)
        {
            if(*it == 2)
            {
                numbers.insert(it, 1234);
            }
            if(*it == 1)
            {
                it = numbers.erase(it);
            }
        }
    for(list<int>::iterator it = numbers.begin(); it!=numbers.end(); ++it)
        cout << *it << endl;
}

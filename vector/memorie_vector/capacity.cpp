#include <iostream>
#include <vector>
using namespace std;
int main(){
vector <double> numbers(0);
// vector <tipulVariabilei> variabila (capacitate)
///pot sa atribui fiecarui element o valoare,exemplu 1
//vector <double> numbers(20,1); toate cele 20 elem au valoarea 1
cout << "Size: "<<numbers.size() << endl;//20
int capacity = numbers.capacity();
cout <<"Capacity: "<<capacity<< endl;//20
for(int i = 0;i < 10000; ++i)
{
    if(numbers.capacity()!=capacity)
    {
        capacity = numbers.capacity();
        cout<< "Capacity: "<< capacity << endl;
    }
    numbers.push_back(i);
}
//capacitatea se dubleaza intruna
///numbers.clear();//size e 0 ca am resetat vectorul
//numbers.resize(100);//size devine 100
numbers.reserve(100000); // schimba si capacitatea si size
cout << numbers[2] << endl;
cout<< "Size: "<<numbers.size() <<endl;
cout<< "Capacity: "<<numbers.capacity() << endl;//capacitatea ramane aceeasi

return 0; 
}

#include <iostream>
#include <list>
using namespace std;
string first, second;
void read()
{
    cin >> first >> second;
}
void afiseaza_lista(list <int> lista)
{
    for(list<int>::iterator i = lista.begin(); i != lista.end(); ++i)
        cout << *i;
    cout<< "\n";
}
void creare_lista(list <int> &lista, string number)
{
    for(int i = 0 ; i<= number.size()-1; ++i)
    {
        lista.push_back((int)(number[i] - '0'));
    }
}
int main()
{
    read();
    list<int> num1, num2;
    creare_lista(num1, first);
    creare_lista(num2, second);
    cout<<"Primul numar citit este: ";afiseaza_lista(num1);
    cout<<"Al doilea numar citit este: ";afiseaza_lista(num2);
    int size_num1 = first.size(), size_num2 = second.size();
    int size_max = size_num1 + size_num2;
    list<int> result(size_max, 0);
    //afiseaza_lista(result);
    //result.push_back(6);
    //*cifra = 9999;
    //cout << *cifra;
    int cap = 0, carry = 0;
    for(list<int>::reverse_iterator i = num1.rbegin(); i != num1.rend(); ++i)
        {
        //list<int>::reverse_iterator i = num1.rbegin();
        list<int>::reverse_iterator cifra = result.rbegin();
        carry = 0; // rest reset
        for(int j = 0; j <cap ;j++)
            cifra++;
        for(list<int>::reverse_iterator j = num2.rbegin(); j != num2.rend(); ++j)
            {
                carry = *j * *i + carry + *cifra;
                *cifra = carry % 10;
                carry/=10;
                cifra++;

            }
        cap++;
            *cifra = carry;
            //cout<<endl;
        }
    afiseaza_lista(result);

    return 0;
}

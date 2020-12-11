#include <iostream>
#include <map>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
map<string, long long> Agenda;
void afisez_contactele(){
    for(map<string, long long> :: iterator it = Agenda.begin(); it!=Agenda.end(); ++it)
        fout << it->first <<" : "<< it->second << endl;
}
int main(){
    /*EXERCITIU, se citesc din fisier contacte cu numere de telefon
    se citesc de la tastatura nume cu numere de telefon, daca exista
    mesajul afisat e citit, in caz contrar, se adauga in agenda*/
    
    string nume;
    long long numar;
    while(fin >> nume)
    {
        fin >> numar;
        Agenda.insert(make_pair(nume,numar));
    }
    while(1)
    {
        cin >> nume;
        cin >> numar;
        if(nume=="STOP")
            break;
        if(Agenda.find(nume) != Agenda.end())
            cout <<  "ALREADY A CONTACT"<< endl;
        else
        {
            Agenda.insert(make_pair(nume, numar));
            cout << "Contactul a fost adaugat cu succes!"<< endl;
        }
        afisez_contactele();
        //Observ ca numele sunt adaugate in functie de ordinea alfabetica
    }
return 0;
}
/*FIN <<
Marcel 4074838
Ion 349593
Marius 3453455
Sonia 53534523
Catalin 43634532
Ionutt 43253256
Dima 3463463
Dragos 6345663
Bobonete 34563456
Micutzu 6543633
*/

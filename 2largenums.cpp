#include <iostream>
using namespace std;

struct nod {
	int info;
	nod* urm = NULL;
	nod* ante = NULL;
};
string num1, num2;
int size_num1, size_num2;
int cifreMaxim=0;
void read()
{
    cout<< "Se citeste primul numar: ";
    cin >> num1;
    cout<<"\nSe citeste al doilea numar: ";
    cin >> num2;
    cout<<"\n";
    size_num1 = num1.size();
    size_num2 = num2.size();
    cifreMaxim = size_num1 + size_num2;
}
nod * lista1 = new nod;
nod * lista2 = new nod;
nod * prod = new nod;
void add(nod*& cap, int valoare)
{
	nod* nou = new nod;
	nou->info = valoare;
	nou->urm = cap;
	cap->ante = nou ;
	cap = nou;
}
void out_list(nod* cap)
{
    if(cap->info==0)
        cap=cap->urm;
	while (cap->urm != NULL)
	{
		cout << cap->info;
		cap = cap->urm;
	}
}
void skip(nod * & prod)
{
     for(int i = 1 ; i<=cifreMaxim ; ++i) {
       prod=prod->ante;
    }
}
void modif(nod * &prod)
{
    for(int i = 1 ; i<=cifreMaxim ; ++i) {
        nod *NOD = new nod ;
        prod->info=0;
        prod->urm = NOD ;
        NOD->ante = prod ;
        prod=NOD;
    }
}
int head(int nrcif, nod * Nod)
{
    for(int i = 0; i<=nrcif; ++i)
    {
        Nod = Nod->urm;
    }
    return Nod -> info;
}
void replace_value(int nrcif , nod*Nod, int val) {
    for(int i = 0; i<=nrcif; ++i)
    {
        Nod = Nod->urm;
    }
    Nod -> info = val;
}
int sum(int a, int b)
{
    return (a + b);
}
void produs(nod* num1, nod* num2, nod*& prod) {
        int cif_urm=0, rest =0;
        while (num1->urm->urm != NULL )
				num1 = num1->urm;
        while (num2->urm->urm != NULL )
				num2 = num2->urm;
        nod* save=num2;
		while (num1) {
			int minn = 2;
			num2=save;
            while(num2) {
                int produs = sum(sum(head(cifreMaxim-minn-cif_urm , prod),(num1->info*num2->info)),rest);
                rest = produs/10;produs%=10 ;
                replace_value(cifreMaxim-minn-cif_urm,prod,produs);
                num2 = num2->ante;
                minn++;
            }
            replace_value(cifreMaxim-minn-cif_urm,prod,rest);
            rest=0;
            cif_urm++;
			num1 = num1->ante;
		}
	}
	void fill_lista(nod* &cap, string num)
	{
	    for(int i = num.size()-1; i>=0; i--)
            add(cap, (int)(num[i] - '0'));
	}
int main()
{
	read();
	fill_lista(lista1, num1);
	fill_lista(lista2, num2);
    modif(prod);
    skip(prod);
	produs(lista1,lista2,prod);
	cout<<"Rezultatul inmultirii celor doua numere este: ";
        out_list(prod) ;
}

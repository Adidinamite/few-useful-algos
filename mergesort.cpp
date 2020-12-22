#include <iostream>

using namespace std;
int v[100001], aux, c[100001];
void mergesort(int st, int dr)
{
    if(dr-st<=1)
    {
        if(v[st]>v[dr])
        {
            aux=v[st];
            v[st] = v[dr];
            v[dr] = aux;
        }
    }
    else {int mij = (st+dr)/2;
    mergesort(st, mij);
    mergesort(mij+1, dr);
    int i = st,j=mij+1;,k=st;
    while(i<=mij && j<=dr)
        if(v[i] < v[j])
    {
        c[k] = v[i];
        i++;
        k++;
    }
    else
    {
        c[k] = v[j]; 
        j++;
        k++;
    }
    while(i<=mij)
    {
        c[k] = v[i];
        i++;
        k++;
    }
    while(j<=dr)
    {
        c[k] = v[j];
        k++;
        j++;
    }
    for(i=st; i<=dr; ++i)
        c[]
    }
}
int main()
{
    
    return 0;
}

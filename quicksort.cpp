#include <iostream>

using namespace std;
int pivot(int st, int dr)
{
    int i = st, j =dr, directia = 1, aux;
    while(i<j)
    {
        if(v[i]>v[j])
        {
            aux=v[i];
            v[i] = v[j];
            v[j] = aux;
                directia=-directia;
        }
        if(directia == 1) i++;
            else j--;
    }
    return i;
}
void quicksort(int st, int dr)
{
    if(st < dr)
    {
        int k =pivot(st, dr);
        quicksort(st, k-1);
        quicksort(k+1, dr);
    }
}
int main()
{
    int n, i;
    cin >> n;
    int v[100001];
    for(i=1; i<=n; ++i)
        cin >> v[i];
    quicksort(1, n);
    for(i = 1; i<=n; ++i)
        cout<< v[i] << " ";
    return 0;
}

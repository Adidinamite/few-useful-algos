#include    <iostream>

using namespace std;
int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    else
        return cmmdc(b,a%b);
}
int main()
{
    int n, m;
    cin >> n >> m;
    int cate_patrate = 0;
    int lungime = 0;
    lungime = cmmdc(n, m);
    cate_patrate = (n * m) / (lungime * lungime);
    cout<< cate_patrate <<  " " << lungime;
    return 0;
}

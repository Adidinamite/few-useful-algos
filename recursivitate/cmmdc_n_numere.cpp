#include    <iostream>

using namespace std;

int n,x,y;

int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    else
        return cmmdc(b,a%b);
}

int main()
{
    int n;
    cin >> n;
    int op ;
    cin >> op;
    while(n)
    {
        op = cmmdc(op, n);
        cin >> n;
    }
    cout << op;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, x;
    cin >> N;
    while(N--)
    {
        cin >> x;
        cout<<(-1)* (x-1) << " "<< x << "\n";
    }
    return 0;
}
//explication :  -(n-1) - (n-2) ...-2 -1 + 0 + 1 +2 + .... + (n-2) + (n-1) + n = n 

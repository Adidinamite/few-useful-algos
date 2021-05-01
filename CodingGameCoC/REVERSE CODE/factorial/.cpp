#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    else  {
        return n * fact(n-1);
    }
}
int main()
{
    int N;
    cin >> N; cin.ignore();
    cout<< fact(N);
}

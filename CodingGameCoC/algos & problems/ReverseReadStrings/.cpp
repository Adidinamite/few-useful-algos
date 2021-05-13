#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void printt(int n, string x)
{
    if(n == 0)
        return ;
    else{
        cin >> x;
    printt(n-1, x);
    for(int i = x.size()-1; i >=0;i--)
        cout<<(int)x[i];
    cout<< endl;}
    
}
int main()
{
    int N;
    cin >> N; cin.ignore();
    string M;
    printt(N, M);
    
}

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100001;
const int LOG = 17;
int a[MAX_N], m[MAX_N][LOG];
int logarithm[MAX_N];

int query(int left,  int right)
{
    int length = right - left + 1;
    int k = logarithm[length];
    return min(m[left][k], m[right - (1<< k) + 1][k]);
}

int main()
{
    int n; cin >> n;
    logarithm[1] = 0;
    for(int i = 2; i<=n ;i++)
        logarithm[i] = logarithm[i/2] + 1;
    for(int i = 0; i< n; i++)
        {
            cin >> a[i];
            m[i][0] = a[i];
        }
    //preporcessing
    for(int k = 1; k < LOG; k++)
    {
        for(int i = 0; i+(1<<k)-1< n; i++)
        {
            m[i][k] = min(m[i][k-1], m[i+(1<<(k-1))][k-1]);// 1<<(k-1) is 2 ^ (k-1)
        }
    }
    int q;
     cin >> q;
     for(int i = 0; i<q; i++)
     {int left, right;
         cin >> left >> right;
         cout<< query(left, right);
     }
}

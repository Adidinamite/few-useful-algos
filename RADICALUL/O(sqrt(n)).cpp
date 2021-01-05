#include    <iostream>

using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for(i = 1; i * i <=n; ++i);
    
    i--;
    cout<< i;//(partea intreaga de radical);
    return 0;
}

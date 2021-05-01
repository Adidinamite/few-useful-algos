#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N; cin.ignore();
    int jumps = 0;
    N--;
    jumps+=N/4;
    N = N%4;
    if(N==2)
    N--;
    cout<< jumps+N;
}

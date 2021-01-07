#include <iostream>
#include <bitset>
using namespace std;

int main(){
    /// a way to do it would be the one where a boolean of 10 ^ 9 numbers has  to tell us if the numbers was visited, if not, visited[number] = 1 s.a.m.d.
    ///in the worst case it can take around 1gb, which is bad for the memory --- 10 ^ 9 bits
    /// a bit means 8 bytes, using a bitset it will use 10 ^ 9 / 8 bytes memory

    bitset <1000000001> visited;
    int n, x; cin >> n;
    for(int i = 0; i<n; ++i)
    {
        cin >> x;
        visited[x] = true;
    }
    cout << visited.count();
    return 0;

}
/*
BITII LUCREAZA FOARTE RAPID
functia count(); lucreaza mult mai rapid decat daca as fi luat un contor si pentru fiecare if nepopulat as incrementa contorul respectiv

*/

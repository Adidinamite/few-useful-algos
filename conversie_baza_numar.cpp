#include    <iostream>
using namespace std;
int main()
{
    int nr, rezultat = 0, putere = 1;
    cin >> nr;
    while(nr != 0)
    {
        int rest = nr % 2; // 2 este baza in care vrem sa convertim
        rezultat = rezultat + rest * putere;
        putere = putere * 10;
        nr = nr / 2;
    }
    cout << rezultat;
    return 0;
}

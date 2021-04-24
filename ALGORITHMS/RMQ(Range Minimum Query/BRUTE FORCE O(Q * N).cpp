///NOT THE RECOMMENDED ONE, N * Q complexiy

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N, Q;
    cin >> N;
    int arr[N];
    for(int i = 0; i< N ; i++)
        cin >> arr[i];
    cin >> Q;
    int indi, indj;
    for(int i = 0; i < Q; i++)
        {
            cin >> indi >> indj;
            int minimum = 9999999;
            for(int i = indi; i <= indj; ++i)
                {
                    minimum = min(minimum, arr[i]);
                }
            cout << minimum << " ";
        }
    return 0;
}

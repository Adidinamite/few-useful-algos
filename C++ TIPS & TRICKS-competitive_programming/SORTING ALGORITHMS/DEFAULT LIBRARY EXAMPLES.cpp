#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s = "nsanDCmdasmfiew";
    sort(s.begin(), s.end());
    cout<< s<<"\n";

    vector < int > v = {5, 6, 3, 5, 6, 2, 5, 7, 3};
    sort(v.begin(), v.end());
    for( vector<int>::iterator it = v.begin(); it!=v.end(); it++)
        cout<< *it<<" ";
    cout<<"\n";

    int arr[] = {2,3,4,12,3,12,3,123,12,41,7};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+arrSize);
    for(int i = 0; i<arrSize; ++i)
        cout<< arr[i]<<" ";
    cout<<"\n";

}



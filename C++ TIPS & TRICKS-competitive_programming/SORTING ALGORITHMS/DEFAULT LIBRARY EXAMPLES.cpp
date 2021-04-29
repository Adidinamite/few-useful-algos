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
    int VecSize = v.size();
    for(int i = 0; i<VecSize; i++)
        cout << v[i] << " " ;
    cout<<"\n";

    int arr[] = {2,3,4,12,3,12,3,123,12,41,7};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+arrSize);
    for(int i = 0; i<arrSize; ++i)
        cout<< arr[i]<<" ";
    cout<<"\n";

    vector<pair<int, int>> perechi;
    perechi.push_back({1, 5});
    perechi.push_back({3, 1});
    perechi.push_back({1, 3});
    sort(perechi.begin(), perechi.end());
    int sizeOfPairs = perechi.size();
    for(int i = 0; i<sizeOfPairs; i++)
        cout<< perechi[i].first <<" si "<< perechi[i].second<<" , ";
    cout<<"\n";

     
    /*vector<tuple<int, int, int>> tuples;
    tuples.push_back({2,1,4});
    tuples.push_back({1,5,3});
    tuples.push_back({2,1,3});
    sort(tuples.begin(), tuples.end());
    int sizeOfTuples = tuples.size();
    for(int i = 0; i< sizeOfTuples; i++)
    {
        cout<< tuples[i].first<< " si "<< tuples[i].second << " si "<< tuples[i].third<< " , ";
    }
    cout<<"\n";*/

}



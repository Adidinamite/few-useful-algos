#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;

    pair<vector<int>, int> gasesteMinSiMax(int v[], int dim)
    {
        int minim = v[0];
        int maxim = v[0];
        for(int i = 1; i<= dim; ++i)
        {
            if(minim< v[i])
                minim=v[i];
            if(maxim > v[i])
                maxim = v[i];
        }
        return make_pair(minim, maxim);
    }
int main()
{
    int v[] = {2, 4 , 6, 8, 9, 435, 67 ,43};
    pair <int, int> minMax = gasesteMinSiMax(v, 7);
    cout<< minMax.first <<  " " << minMax.second;
}

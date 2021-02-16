#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("alinieri.in");
ofstream fout("alinieri.out");
int speed[1001],freq[1001];
int main()
{
    int n,p,z,sol=0,i,x,j;
    fin>>n>>p>>z;
    for (i=1;i<=n;i++)
    {
        int num;
        fin >> num;
        speed[num%180]++;
    }
    for (i=0;i<180;i++)
    {
        for (j=0;j<180;j++)
            freq[(j*i)%180]+=speed[j];
        for (j=0;j<=180;j++)
        {
            if (freq[j]>=p)
            {
                sol=sol+(z/180);
                if (i<=z%180)
                    sol++;
            }
            fv[j]=0;
        }
    }
    sol--;
    fout<<sol;
    return 0;
}

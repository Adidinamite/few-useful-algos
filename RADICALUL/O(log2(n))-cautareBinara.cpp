#include    <iostream>

using namespace std;
int cautare_binara(int st, int dr, int x)
{
  int mij = (st+dr)/2;
  if(mij * mij  == x)
    return mij;
   else
   {
    if(mij * mij < x)
      {
        return cautare_binara(mij+1, dr, x);
      }
     else if(mij * mij > x)
        {
         return cautare_binara(st, mij-1, x);
        }
   }
}

int main()
{
  int i, n;
  cin >> n;
  cout << cautare_binara(0,n,n);
    return 0;
}

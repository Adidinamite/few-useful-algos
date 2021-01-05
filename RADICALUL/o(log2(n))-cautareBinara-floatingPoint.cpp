#include    <iostream>

using namespace std;
double e =0.000001;
double cautare_binara(double st, double dr, double x)
{
  double mij = (st+dr)/2;
  if(mij * mij  == x || st > dr)
    return mij;
   else
   {
    if(mij * mij < x)
      {
        return cautare_binara(mij+e, dr, x);
      }
     else if(mij * mij > x)
        {
         return cautare_binara(st, mij-e, x);
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

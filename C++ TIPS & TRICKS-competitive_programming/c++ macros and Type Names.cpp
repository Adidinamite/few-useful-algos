#include <iostream>

using namespace std;

int main()
{
   ///Shortening code
   /*Short code is ideal in competitive programming,
   because programs should bewritten as fast as possible.
   Because of this, competitive programmers often defineshorter
   names for datatypes and other parts of code.*/

   ///EXAMPLE for TYPE NAMES : typedeff data_variable short_name

   /*instead of {
   long long a = 123456789;
   long long b = 987654321;
   cout << a*b << "\n";
   }*/

   typedef long long ll;
   ll a=12838213, b=382478109;
   cout << a << " " << b;
    return 0;

    /*
    typedef vector<int> vi;
    typedef pair<int,int> pi;
    */
    
    ///MACROS
    
    #define F first
    #define S second
    #define PB push_back
    #define MP make_pair
    
    
    v.push_back(make_pair(y1,x1));
    v.push_back(make_pair(y2,x2));
    int d = v[i].first+v[i].second;
    ///WILL  BE:
    v.PB(MP(y1,x1));
    v.PB(MP(y2,x2));
    int d = v[i].F+v[i].S;
    
    #define REP(i,a,b) for (int i = a; i <= b; i++)
    for (int i = 1; i <= n; i++) {search(i);}
    Will be equal to
    REP(i,1,n) {search(i);}
    
    #define SQ(a) (a)*(a)
    cout << (3+3)*(3+3);
    Will be equal to
    cout<< SQ(3+3);
    
}

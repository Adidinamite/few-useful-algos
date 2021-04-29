#include <iostream>

using namespace std;

int main()
{
    float x = 1939.2316;
    printf("%.2f", x);
    // print a float num with 2 decimals( %.2f)
    
  /*A difficulty when using floating point numbers is that
    some numbers cannotbe represented accurately as floating
    point numbers, and there will be roundingerrors.
    For example, the result of the following code is surprising:*/
        double y = 0.3*3+0.1;
        printf("%.20f\n", y); // 0.99999999999999988898
        
    /*Due to a rounding error, the value ofxis a bit smaller than 1,
     while the correctvalue would be 1.It is risky to compare 
    floating point numbers with the==operator, because it is possible 
    that the values should be equal but they are not because of precisionerrors.  
    A better way to compare floating point numbers is to assume that 
    twonumbers are equal if the difference between them is less thanε, 
    where ε is asmall number.In practice, the numbers can be compared as follows 
    (ε=10^−9):*/
        if (abs(a-b) < 1e-9) {// a and b are equal}

  
    return 0;
}

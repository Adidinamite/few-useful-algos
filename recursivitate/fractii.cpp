 #include    <iostream>

using namespace std;
int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    else
        return cmmdc(b,a%b);
}
int main()
{
    int x, y, z, w;
    cin >> x >> y >> z >> w;
    int a, b, c, d;
    int red;
    red = cmmdc(x, y);
    x= x /red;
    y = y/red;
   // cout << x << " "<<y<<endl;
    red = cmmdc(z, w);
    z = z/red;
    w = w/red;
    //cout << z <<  " " << w;
    int cmmc = cmmdc(y, w);
   
    cmmc = y*w/cmmc;// cout<<y<< " "<<w<< " "<< cmmc;
    b = cmmc;
    int amplificare;
    amplificare = cmmc/y;
    a = x*amplificare;
    amplificare = cmmc/w;
    a = a + z*amplificare;
    red = cmmdc(a, b);
    a/=red;
    b/=red;
    cout << a <<" "<< b<<" ";
    red = cmmdc(x, w);
    x/=red;
    w/=red;
    red = cmmdc(y,z);
    y/=red;
    z/=red;
    cout<< x*z << " "<<y*w;
    return 0;
}

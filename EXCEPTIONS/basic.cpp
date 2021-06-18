#include <iostream>
#include <set>
using namespace std;

    void mightGoWrong(){
        bool error1 = false;
        bool error2 = true;

        if(error1)
        {
            throw "Something went wrong";
        }
        if(error2)
        {
            throw string("Something else went wrong");
        }
        }
    void useMightGoWrong()
    {
        mightGoWrong();
    }


int main()
{
    try{
        useMightGoWrong();
    }
    catch(int e){
        cout << "Error code: "<< e << "\n";
    }
    catch(char const *e)
    {
        cout << "Error message: "<< e << "\n";
    }
    catch(string &e)
    {
        cout<<"string error message: "<< e << "\n";
    }
    cout << "Still running"<< "\n";
    return 0;
}

#include <iostream>
#include <map>
using namespace std;
class Student{
    public:
    int rollNumber;
    int age;
};
int main()
{
    ///creating object statically
    Student s1,s2,s3,s4,s5;
    ///create object dynamically
    Student *s6 = new Student;

    s1.age = 24;
    s1.rollNumber = 100;

    //cout<<"First Student's age is"<< s1.age << " ,number: "<< s1.rollNumber<<endl;
    cout<< s1.age<<endl;

    (*s6).age = 60;
    (*s6).rollNumber = 233;
    cout<< s6->age;
    return 0;
}

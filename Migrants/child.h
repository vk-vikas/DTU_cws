#ifndef CHILD_H
#define CHILD_H
#include<string>
using namespace std;

class Child
{
public:
    Child();

    string name;
    int age;
    string gender;
    string adhaarNumber;
    int standard;

    void setstandard()
    {
        switch (age) {
        case 5: standard =1;
            break;
        case 6: standard =2;
            break;
        case 7: standard =3;
            break;
        case 8: standard =4;
            break;
        case 9: standard =5;
            break;
        case 10: standard =6;
            break;
        case 11: standard =7;
            break;
        case 12: standard =8;
            break;
        case 13: standard =9;
            break;
        case 14: standard =10;
            break;
        case 15: standard =11;
            break;
        case 16: standard =12;
            break;

        }
    }
};
extern Child c1;
extern Child c2;
extern Child c3;
extern Child c4;

#endif // CHILD_H

#ifndef ADULT_H
#define ADULT_H
#include<string>
using namespace std;
class Adult
{
private:
    int loanbracket;
    bool loan;
public:
    Adult();

    string name;
    string adharnumber;
    int age;
    string homestate;
    string hometown;
    string job;
    int salary;


    void setsalary()
    {
        if(job=="cook")
        {
            salary = 12000;
        }
        else if(job=="Driver")
        {
            salary = 15000;
        }
        else if(job=="Carpenter")
        {
            salary = 25000;
        }
        else if(job=="Painter")
        {
            salary = 12000;
        }
        else if(job=="Electrician")
        {
            salary = 15000;
        }
        else if(job=="Registered Nurse")
        {
            salary = 25000;
        }
        else if(job=="Janitor")
        {
            salary = 8000;
        }
        else if(job=="Vegetable Vender")
        {
            salary = 12000;
        }
        else if(job=="Crop Field Worker")
        {
            salary = 6000;
        }
        else if(job=="Newspaper Vender")
        {
            salary = 10000;
        }
        else if(job=="Construction Labour")
        {
            salary = 8000;
        }
    }


//    void setloanbracket()
//    {
//        if(salary<=12000 && salary>0)
//        {
//            loanbracket=1;
//        }
//        else if(salary<=20000 && salary>12000)
//        {
//            loanbracket=2;
//        }
//        else if(salary>20000)
//        {
//            loanbracket=3;
//        }
//    }

    void setloanbracket(int val)
    {
        loanbracket=val;
    }

    void setloan(bool val)
    {
        loan = val;
    }
};

extern Adult a1;
extern Adult a2;

#endif // ADULT_H

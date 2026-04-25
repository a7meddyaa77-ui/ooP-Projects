#ifndef STAFF_H
#define STAFF_H
#include"person.h"
#include <iostream>

using namespace std;

class Staff:public person
{
private:
    string role;
    float salary;
public:
      Staff()
        {

        }
        Staff(string name,int age,string gender,string address,string phone,
               string email,int id,string role,float salary)
        {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phone=phone;
        this->email=email;
        this->id=id;
        this->role=role;
        this->salary=salary;
        }
     void setRole(string role)
        {
            this->role=role;
        }
        void setSalary(float salary)
        {
            this->salary=salary;
        }
        string getRloe(string role)
        {
            return role;
        }
            float getSalary(float salary)
        {
            return salary;
        }
         void print()
        {
            person::print();
            cout<<"Pleas enter your salary"<<salary<<endl;
            cout<<"Pleas enter your role"<<role<<endl;
        }
        void information()
        {
            person::information();
            cout<<"the salary is"<<salary<<endl;
            cin>>salary;
            cout<<"the Role id "<<role<<endl;
            cin>>role;
        }
};

#endif // STAFF_H

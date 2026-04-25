#ifndef TEACER_H
#define TEACER_H
#include"person.h"
#include <iostream>

using namespace std;
class Teacher:public person
{
    private:
    string subject;
    float salary;
    public:
        Teacher()
        {

        }
        Teacher(string name,int age,string gender,string address,string phone,
               string email,int id,string subject,float salary)
        {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phone=phone;
        this->email=email;
        this->id=id;
        this->subject=subject;
        this->salary=salary;
        }
        void setSubject(string subject)
        {
            this->subject=subject;
        }
        void setSalary(float salary)
        {
            this->salary=salary;
        }
        string getSubject(string subject)
        {
            return subject;
        }
            float getSalary(float salary)
        {
            return salary;
        }
        void print()
        {
            person::print();
            cout<<"Pleas enter your salary"<<salary<<endl;
            cout<<"Pleas enter your subject"<<subject<<endl;
        }
        void information()
        {
            person::information();
            cout<<"the salary is"<<salary<<endl;
            cin>>salary;
            cout<<"the subject id "<<subject<<endl;
            cin>>subject;
        }
};

#endif // TEACER_H

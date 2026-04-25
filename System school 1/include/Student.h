#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include <iostream>

using namespace std;
class Student:public person
{
private:
    string gradeLevel;
    float gpa;
public:
    Student()
    {

    }
    Student(string name,int age,string gender,string address,string phone,string email,int id,
            string gradeLevel,float gpa)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phone=phone;
        this->email=email;
        this->id=id;
        this-> gradeLevel=gradeLevel;
      }
  void setGradeLevel (string gradeLevel)
  {
      this->gradeLevel=gradeLevel;
  }
  string getGradeLevel(string gradeLevel)
  {
      return gradeLevel;
  }
  void setGPA(float gpa)
  {
      this-> gpa=gpa;

  }
  float getGpA(float gpa)
  {
      return gpa ;
  }
  void print()
  {
      person::print();
      cout<<"Pleas enter your gradeLevel"<<gradeLevel<<endl;
      cout<<"pleas enter your Gpa"<<gpa<<endl;
  }
  void information()
  {
       person::information();
       cout<<"Pleas enter your gradeLevel"<<endl;
       cin>>gradeLevel;
       cout<<"pleas enter your Gpa"<<endl;
       cin>>gpa;
  }


};

#endif // STUDENT_H

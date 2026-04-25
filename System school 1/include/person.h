#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;
class person
{
  protected:
      string name ;
      int age;
      string gender;
      string address;
      string phone;
      string email;
      int id;
  public:
      person()
      {

      }
      person(string name,int age,string gender,string address,string phone,string email,int id)
      {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phone=phone;
        this->email=email;
        this->id=id;
      }
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return name;
    }
       void setAge(int age)
    {
        this->age=age;
    }
    int getAge()
    {
        return age;
    }
      void setGender(string gender)
    {
        this->gender=gender;
    }
    string getGender()
    {
        return gender;
    }
      void setAddress(string address)
    {
        this->address=address;
    }
    string getAddress()
    {
        return address;
    }
      void setPhone(string phone)
    {
        this->phone=phone;
    }
    string getPhone()
    {
        return phone;
    }
      void setEmail(string email)
    {
        this->email=email;
    }
    string getEmail()
    {
        return email;
    }
      void setID(int id)
    {
        this->id=id;
    }
    int  getID()
    {
        return id;
    }
    void print()
    {
     cout<<" pleas enter your name"<<name<<endl;
     cout<<" pleas enter your Age"<<age<<endl;
     cout<<" pleas enter your Gender"<<gender<<endl;
     cout<<" pleas enter your Address"<<address<<endl;
     cout<<" pleas enter your Phone"<<phone<<endl;
     cout<<" pleas enter your Email"<<email<<endl;
     cout<<" pleas enter your ID"<<id<<endl;

    }
    void information()
    {
      cout<<"pleas enter your name"<<endl;
      cin>>name;
     cout<<" pleas enter your Age"<<endl;
     cin>>age;
     cout<<" pleas enter your Gender"<<endl;
     cin>>gender;
     cout<<" pleas enter your Address"<<endl;
     cin>>address;
     cout<<" pleas enter your Phone"<<endl;
     cin>>phone;
     cout<<" pleas enter your Email"<<endl;
     cin>>email;
     cout<<" pleas enter your ID"<<endl;
     cin>>id;

    }
};

#endif // PERSON_H

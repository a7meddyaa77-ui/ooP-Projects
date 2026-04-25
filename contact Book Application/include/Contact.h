#ifndef CONTACT_H
#define CONTACT_H
#include"PhoneNumber.h"
#include<iostream>
using namespace std;
class Contact
{
private:
    int id;
    string name;
    string gender;
    string city;
    string note;
    PhoneNumber phones[4];
    int x;

public:
    Contact()
    {


    }
    Contact(int id, string name,string gender, string city,string note)
    {
         this->id=id;
        this->name=name;
        this->gender=gender;
        this->city=city;
    }
    void setId(int id)
    {
        this->id=id;
    }
    void setName(string name)
    {
        this->name=name;
    }
     void setGender(string gender)
    {
        this->gender=gender;
    }
     void setCity(string city)
    {
        this->city=city;
    }
      void setNote(string note)
    {
        this->note=note;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
     string getGender()
    {
        return gender;
    }
     string getCity()
    {
        return city;
    }
      string getNote()
    {
        return note;
    }
    void print()
    {
        cout<<"your Id :"<<id<<endl;
        cout <<"your name:"<<name <<endl;
        cout<<"your gender:"<<gender<<endl;
        cout<<"your city:"<<city<<endl;
        cout<<"your note :"<<note<<endl;
for(int i=0;i<x;i++)
{
    phones[i].print();
    cout<<endl;
}
    }
    void information()
    {
        cout<<"pleas enter your ID"<<endl;
        cin>>id;
        cout<<"pleas enter your name"<<endl;
        cin>>name;
        cout<<"pleas enter your Gender"<<endl;
        cin>>gender;
        cout<<"pleas enter your city"<<endl;
        cin>>city;
        cout<<"pleas enter your note"<<endl;
        cin>>note;
        cout<<"pleas enter number of phones (1-4)"<<endl;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            phones[i].information();
        }


   }
};

#endif // CONTACT_H

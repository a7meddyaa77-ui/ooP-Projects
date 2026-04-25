#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include<iostream>
#include"PhoneNumber.h"
#include"Contact.h"
using namespace std;

class ContactBook
{
private:
    int count=0;
    Contact contacts[5000];
public :
    void addContact()
    {
      Contact c;
      c.information()  ;
      contacts[count]=c;
      count++;

    }
void deleteContact()
{
    cout<<"pleas enter id to delete"<<endl;
    int x;
    cin>>x;
    int i;
    for( i=0;i<x;i++)
    {
        if(x==contacts[i].getId())
        {
          contacts[i]=contacts[count-1];
          count--;
          break;
        }
    }
    if(count==i)
    {
        cout<<"The contact not found"<<endl;
    }
}
void searchContact()
{
       cout<<"pleas enter id to delete"<<endl;
    int x;
    cin>>x;
    int i;
    for( i=0;i<x;i++)
    {
        if(x==contacts[i].getId())
        {
          contacts[i]=contacts[count-1];
          count--;
          break;
        }
    }
    if(count==i)
    {
        cout<<"The contact not found"<<endl;
    }
}

void EditContact()
{
       cout<<"pleas enter id to Eidt"<<endl;
    int x;
    cin>>x;
    int i;
    for( i=0;i<x;i++)
    {
        if(x==contacts[i].getId())
        {
            contacts[i].information();
          break;
        }
    }
    if(count==i)
    {
        cout<<"The contact not found"<<endl;
    }
}
void printAll()
{
        cout<<"pleas enter id to PrintAll"<<endl;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        contacts[i].print();
        cout<<endl;
    }
}

};

#endif // CONTACTBOOK_H

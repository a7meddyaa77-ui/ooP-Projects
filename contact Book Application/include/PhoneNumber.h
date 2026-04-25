#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>

using namespace std;

class PhoneNumber
{
  private:
      string phone;
      string type;
  public:
      PhoneNumber()
      {

      }
      PhoneNumber(string phone ,string type)
      {
       this->phone=phone;
       this->type=type;
      }
    void setPhone(string phone)
    {
        this->phone=phone;
    }
    void setType(string type)
    {
        this->type=type;
    }
    string getPhone()
    {
        return phone;
    }
    string getType()
    {
        return type;
    }
    void print()
    {
        cout<<" The Type is"<<type<<endl;
        cout<<"The Phone is"<<phone<<endl;
    }
    void information()
    {
       cout<<"pleas enter your Phone"<<endl;
       cin>>phone;
       cout<<"pleas enter your Type(Work,Home,Mobile)"<<endl;
       cin>>type;

    }
};

#endif // PHONENUMBER_H

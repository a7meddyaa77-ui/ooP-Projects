#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>

using namespace std;

class Classroom
{
private:
    int roomNumber;
    int capacity;
public:
    Classroom()
    {

    }
    Classroom(int roomNumber,int capacity)
    {
         this->roomNumber=roomNumber;
         this->capacity=capacity;


    }

    void setRoomNuber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }
       void setCapacity(int  capacity)
    {
        this->capacity=capacity;
    }

   int getRoomNumber(int roomNumber)
   {
       return roomNumber;
   }
      int Capacity(int capacity)
   {
       return capacity;
   }

   void print()
   {
     cout<<"pleas enter your Roomnumber"<<roomNumber<<endl;
      cout<<"pleas enter your capacity"<<capacity<<endl;

   }
   void information()
   {
       cout<<"Roomnumber:"<<roomNumber<<endl;
       cin>>roomNumber;
       cout<<"capacity:"<<capacity<<endl;
       cin>>capacity;

   }

};

#endif // CLASSROOM_H

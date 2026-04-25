#include <iostream>
#include "include/Contact.h"
#include"include/ContactBook.h"
using namespace std;

int main()

{

    int n=-1;
    ContactBook c;


   do
   {

       cout<<"press 0 To Exit"<<endl;
       cout<<"press 1 To Add contact"<<endl;
       cout<<"press 2 To delete contact"<<endl;
       cout<<"press 3 To Search contact"<<endl;
       cout<<"press 4 To edit contact"<<endl;
       cout<<"press 5 To print all contact"<<endl;
       cin>>n;
system("cls");
       switch(n)
       {
       case 0:
        break;
       case 1:
           c.addContact();
           break;
       case 2:
        c.deleteContact();
           break;
       case 3:
        c.searchContact();
           break;
       case 4:
        c.EditContact();
           break;
       case 5:
        c.printAll();
           break;
       }
   }
   while(n!=0);
   system("pause");
}

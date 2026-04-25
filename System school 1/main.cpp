#include <iostream>
#include "include/Student.h"
#include "include/School.h"
#include "include/Staff.h"
#include"include/Classroom.h"
#include"include/person.h"
#include"include/Course.h"
#include"include/Exam.h"

using namespace std;

int main()

{
    int n;
    School sh;
    do
    {
      cout<<"Press 0 to EXIT :"<<endl;
      cout<<"Press 1 to add (student) :"<<endl;
      cout<<"Press 2 to add (teacher) :"<<endl;
      cout<<"Press 3 to add (staff) :"<<endl;
      cout<<"Press 4 to add (course) :"<<endl;
      cout<<"Press 5 to add (classroom) :"<<endl;
      cout<<"Press 6 to add (ALL student) :"<<endl;
      cout<<"Press 7 to add (ALL teacher) :"<<endl;
      cout<<"Press 8 to add (ALL staff) :"<<endl;
      cout<<"Press 9 to add (ALL courses) :"<<endl;
      cout<<"Press 10 to add (ALL classroom) :"<<endl;
       cin>>n;
       system("cls");
       switch(n)
       {
       case 0:
        return 0;
       case 1:
           {
        Student s;
        s.information();
        sh.addstudent(s);
        break;
           }
             case 2:
           {
        Teacher t;
        t.information();
        sh.addteacher(t);
        break;
           }
             case 3:
           {
        Staff st;
        st.information();
        sh.addstaff(st);
        break;
           }
             case 4:
           {
        Course c;
        c.information();
        sh.addcourse(c);
        break;
           }
             case 5:
           {
        Classroom l;
        l.information();
        sh.addclassroom(l);
        break;
           }
            case 6:

                sh.printStudents();
                break;
            case 7:

                sh.printTeachers();
                break;
            case 8:

                sh.printStaffs();
                break;
            case 9:

                sh.printCourses();
                break;
            case 10:

                sh.printClassrooms();
                break;


       }
    }
     while (n!=0);




}

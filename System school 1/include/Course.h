#ifndef COURSE_H
#define COURSE_H

#include <iostream>

using namespace std;
class Course
{
private:
string courseCode;
string courseName;
string teacherName;
public:
    Course()
    {

    }
    Course(string courseCode,string courseName,string teacherName)
    {
         this->courseCode=courseCode;
         this->courseName=courseName;
         this->teacherName=teacherName;

    }

    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
       void setCourseName(string courseName)
    {
        this->courseName=courseName;
    }
       void setTeacherName(string teacherName)
    {
        this->teacherName=teacherName;
    }
   string getCourseCode(string courseCode)
   {
       return courseCode;
   }
      string getCourseName(string courseName)
   {
       return courseName;
   }
      string getTeacherName(string teacherName)
   {
       return teacherName;
   }
   void print()
   {
     cout<<"pleas enter your Coursecode"<<courseCode<<endl;
      cout<<"pleas enter your CourseName"<<courseName<<endl;
      cout<<"pleas enter your TeacherName"<<teacherName<<endl;
   }
   void information()
   {
       cout<<"coursecode:"<<courseCode<<endl;
       cin>>courseCode;
       cout<<"courseame:"<<courseName<<endl;
       cin>>courseCode;
       cout<<"Teachername:"<<teacherName<<endl;
       cin>>teacherName;
   }


};

#endif // COURSE_H

#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;

class Exam
{
private:
string courseCode;
string examName;
string examDate;
public:
    Exam()
    {

    }
    Exam(string courseCode,string examName,string examDate)
    {
         this->courseCode=courseCode;
         this->examName=examName;
         this->examDate=examDate;

    }

    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
       void setExamName(string examName)
    {
        this->examName=examName;
    }
       void setExamDate(string examDate)
    {
        this->examDate=examDate;
    }
   string getCourseCode(string courseCode)
   {
       return courseCode;
   }
      string getExamName(string examName)
   {
       return examName;
   }
      string getExamDate(string examDate)
   {
       return examDate;
   }
   void print()
   {
     cout<<"pleas enter your Coursecode"<<courseCode<<endl;
      cout<<"pleas enter your ExamName"<<examName<<endl;
      cout<<"pleas enter your TeacherName"<<examDate<<endl;
   }
   void information()
   {
       cout<<"coursecode:"<<courseCode<<endl;
       cin>>courseCode;
       cout<<"Examedate:"<<examDate<<endl;
       cin>>courseCode;
       cout<<"Examname:"<<examName<<endl;
       cin>>examName;
   }
};


#endif // EXAM_H

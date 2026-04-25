#ifndef SCHOOL_H
#define SCHOOL_H
#include<iostream>
#include"Student.h"
#include"person.h"
#include"Teacer.h"
#include"Classroom.h"
#include"Course.h"
#include"staff.h"
using namespace std;

class School
{
private:
    string schoolName;
    string address;
    string principalName;
    int studentCounter=0;
    Student students[3000];
    int teacherCounter=0;
    Teacher teachers[40];
    int staffCounter=0;
    Staff   staffs[20];
    int courseCounter=0;
    Course courses[8];
    int   classroomCounter=0;
    Classroom classrooms[77];
public:
    School()
    {

    }

    void addstudent(Student stud)
  {
      students[studentCounter]=stud;
      studentCounter++;
  }
    void addteacher(Teacher tech)
  {
      teachers[teacherCounter]=tech;
      teacherCounter++;
  }
    void addstaff(Staff staf)
  {
      staffs[staffCounter]=staf;
      staffCounter++;
  }
    void addcourse(Course cor)
  {
      courses[courseCounter]=cor;
      courseCounter++;
  }
    void addclassroom(Classroom cls)
  {
      classrooms[classroomCounter]=cls;
      classroomCounter++;
  }
  void printStudents()
  {
      for(int i=0;i< studentCounter;i++)
      {
          students[i].print();
          cout<<endl;
      }
  }
    void printTeachers()
  {
      for(int i=0;i< teacherCounter;i++)
      {
          teachers[i].print();
          cout<<endl;
      }
  }
    void printStaffs()
  {
      for(int i=0;i< staffCounter;i++)
      {
          staffs[i].print();
          cout<<endl;
      }
  }
    void printCourses()
  {
      for(int i=0;i< courseCounter;i++)
      {
          courses[i].print();
          cout<<endl;
      }
  }
    void printClassrooms()
  {
      for(int i=0;i< classroomCounter;i++)
      {
          classrooms[i].print();
          cout<<endl;
      }
  }

};

#endif // SCHOOL_H

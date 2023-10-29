#include <iostream>
#include "student.hpp"
#include "student_printer.hpp"

int main()
{
    Student student1;
    Student student2(22, (char*)"Denis Bosika");
    Student student3 = student2;

    student3.setName((char*)"Alex Popescu");

    StudentPrinter printer1(student1);
    StudentPrinter printer2(student2);
    StudentPrinter printer3(student3);
    StudentPrinter printer4(Student(30, (char*)"Ion Ionescu"));

    printer1.printStudentInfo();
    printer2.printStudentInfo();
    printer3.printStudentInfo();
    printer4.printStudentInfo();
}
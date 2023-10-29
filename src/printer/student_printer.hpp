#pragma once
#include "../student/student.hpp"
#include <iostream>

class StudentPrinter
{
    private:
        Student priv_student;

    public:
        StudentPrinter(const Student& Student);
        StudentPrinter(Student&& Student);
        void printStudentInfo();
};
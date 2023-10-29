#pragma once

#include <string.h>
#include <iostream>

class Student
{
    private:
        int age;
        char* name;
    
    public:
        Student();
        Student(int age, char* name);
        ~Student();
        Student(const Student& deCopiat);
        Student(Student&& deMutare);
        int getAge();
        void setAge(int age);
        char* getName();
        void setName(char* name);
};
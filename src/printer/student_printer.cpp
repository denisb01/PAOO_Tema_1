#include "student_printer.hpp"

StudentPrinter::StudentPrinter(const Student& student) : priv_student(student)
{

}

StudentPrinter::StudentPrinter(Student&& student) : priv_student((Student&&)student)
{

}

void StudentPrinter::printStudentInfo()
{
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Student name: " << priv_student.getName() << std::endl;
    std::cout << "Student age: " << priv_student.getAge() << std::endl;
    std::cout << "---------------------------------------" << std::endl;
}
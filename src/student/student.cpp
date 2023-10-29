#include "student.hpp"

Student::Student()
{
    this->age = 0;
    this->name = new char[9];
    strcpy(this->name, "John Doe");

    std::cout << "Student " << this->name << " created!" << std::endl;
}

Student::Student(int age, char* name)
{
    this->age = age;
    this->name = new char[strlen(name)+1];
    strcpy(this->name, name);

    std::cout << "Student " << this->name << " created!" << std::endl;
}

int Student::getAge()
{
    return this->age;
}

void Student::setAge(int age)
{
    this->age = age;
}

char* Student::getName()
{
    return this->name;
}

void Student::setName(char* name)
{
    size_t size = strlen(name);
    delete this->name;
    this->name = new char[size+1];
    memcpy(this->name, name, size);
    this->name[size] = '\0';
}

Student::Student(const Student& deCopiat)
{
    this->age = deCopiat.age;
    this->name = new char[strlen(deCopiat.name)+1];
    strcpy(this->name, deCopiat.name);

    std::cout << "Student " << deCopiat.name << " copied!" << std::endl;
}

Student::Student(Student&& deMutare)
{
    std::cout << "Student " << deMutare.name << " moved!" << std::endl;

    this->age = deMutare.age;
    this->name = deMutare.name;

    deMutare.age = 0;
    deMutare.name = nullptr;
}

Student::~Student()
{
    if(this->name == nullptr){
        std::cout << "Moved student destroyed!" << std::endl;
    }   
    else{
        std::cout << "Student " << this->name << " destroyed!" << std::endl;
    }

    delete this->name;
}
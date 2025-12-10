#include <iostream>
#include <ctime>
#include <string>

struct student
{
    std::string name;
    double gpa = 0;
    bool enrolled;
};

template<typename T>
void Log(T value)
{
    std::cout << value << std::endl;
}

int main()
{	    
    student student1;
    student1.name = "Dominik";
    student1.gpa = 3;
    student1.enrolled = true;

    student student2;
    student2.name = "Theo";
    student2.gpa = 500000;
    student2.enrolled = false;

    Log(student1.name);
    Log(student1.gpa);
    Log(student1.enrolled);

    Log(student2.name);
    Log(student2.gpa);
    Log(student2.enrolled);



    std::cin.get();
}




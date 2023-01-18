#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    int id;
    string name;

public:
    void setId(int Id)
    {
        id = Id;
    }

    int getId()
    {
        return id;
    }

    void setName(string Name)
    {
        name = Name;
    }

    string getName()
    {
        return name;
    }
};

class Student : public Person
{
private:
    string program;

public:
    void setProgram(string Program)
    {
        program = Program;
    }

    string getProgram()
    {
        return program;
    }
};

class Teacher : public Person
{
private:
    string qualification;

public:
    void setQualification(string Qualificationn)
    {
        qualification = Qualificationn;
    }

    string getQualification()
    {
        return qualification;
    }
};

int main()
{
    Student students[5];
    Teacher teachers[5];
    int id;
    string name;
    string program;
    string qualification;

// Set Students
    cout << "Enter Student Id: ";
    cin >> id;
    students[0].setId(id);

    cout << "Enter Student Name: ";
    cin >> name;
    students[0].setName(name);

    cout << "Enter Student Program: ";
    cin >> program;
    students[0].setProgram(program);

// Get Students
    cout << "Student Id = " << students[0].getId() << endl;
    cout << "Student Name = " << students[0].getName() << endl;
    cout << "Student Program = " << students[0].getProgram() << endl;

// Set Teachers
    cout << "Enter Teacher Id: ";
    cin >> id;
    teachers[0].setId(id);

    cout << "Enter Teacher Name: ";
    cin >> name;
    teachers[0].setName(name);

    cout << "Enter Teacher Qualification: ";
    cin >> program;
    teachers[0].setQualification(qualification);


// Get Teachers
    cout << "Teacher Id = " << teachers[0].getId() << endl;
    cout << "Teacher Name = " << teachers[0].getName() << endl;
    cout << "Teacher Qualification = " << teachers[0].getQualification() << endl;

    return 0;
}
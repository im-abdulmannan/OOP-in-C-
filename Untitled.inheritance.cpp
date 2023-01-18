#include <iostream>
#include <string>
using namespace std;

class person
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
}; // end of person class

class teacher : public person
{
private:
    string qualification;

public:
    void setQualification(string qualif)
    {
        qualification = qualif;
    }
    string getQualification()
    {
        return qualification;
    }
}; // end of teacher class

class pTeacher : public teacher
{
private:
    int salary;

public:
    void setSalary(int Salary)
    {
        salary = Salary;
    }
    int getSalary()
    {
        return salary;
    }
}; // end of pTeacher class

class visitTeacher : public teacher
{
private:
    int honorarium;

public:
    void setHonorarium(int Honorarium)
    {
        honorarium = Honorarium;
    }
    int getHonorarium()
    {
        return honorarium;
    }
}; // end of visitingTeacher class

int main()
{
    int id, num;
    string nm;
    teacher Teacher;
    pTeacher Hannan;
    visitTeacher Farrukh;
    cout << "Enter Id: ";
    cin >> id;
    Teacher.setId(id);

    cout << "Enter Name: ";
    cin >> nm;
    Teacher.setName(nm);

    cout << "Enter Qualification: ";
    cin >> nm;
    Teacher.setQualification(nm);

    cout << "Enter Salary: ";
    cin >> num;
    Hannan.setSalary(num);

    cout << "Enter Honorarium: ";
    cin >> num;
    Farrukh.setHonorarium(num);

    cout << "\n**********Below is Output**********\n";

    cout << "Id: ";
    cout << Teacher.getId() << endl;

    cout << "Name: ";
    cout << Teacher.getName() << endl;

    cout << "Qualification: ";
    cout << Teacher.getQualification() << endl;

    cout << "Salary: ";
    cout << Hannan.getSalary() << endl;

    cout << "Honorarium: ";
    cout << Farrukh.getHonorarium() << endl;

    cin >> id;
    return id;
} // end of main
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
}; // end of Person class

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

    int payment(int v)
    {
        return v;
    }
}; // end of Teacher class

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

    int payment(int days)
    {
        int tax;
        int pay = days * 8000;
        if (pay < 100000)
        {
            tax = pay * 5 / 100;
        }
        if (pay > 100000 && pay < 150000)
        {
            tax = pay * 10 / 100;
        }
        if (pay > 150000 && pay < 200000)
        {
            tax = pay * 15 / 100;
        }
        if (pay > 200000)
        {
            tax = pay * 25 / 100;
        }
        pay = pay - tax;
        pay = pay + (pay * 5 / 100) + (pay * 15 / 100);

        return pay;
    }
}; // end pTeacher Class

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

    int payment(int hrs)
    {
        int pay = hrs * 1500;
        pay = pay - (pay * 15 / 100);
        return pay;
    }
};

int main()
{
    int days, hrs;
    pTeacher Hannan;
    visitTeacher Farrukh;

    // pTeacher

    cout << "Enter Days: ";
    cin >> days;
    if (!(days > 31))
    {
        cout << "Salary is: " << Hannan.payment(days) << endl
             << endl;
    }
    else
    {
        cout << "Days cannot be exceed from 31 days.\n";
    }
    // visitTeacher

    cout << "Enter Working Hours: ";
    cin >> hrs;
    cout << "Honorarium is: " << Farrukh.payment(hrs);

    return 0;
} // end of main
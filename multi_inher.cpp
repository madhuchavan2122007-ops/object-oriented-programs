#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class StudentExam : public Student
{
protected:
    float marks[6];

public:
    void getMarks()
    {
        cout << "Enter marks for 6 subjects:" << endl;

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks()
    {
        cout << "Marks:" << endl;

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

class StudentResult : public StudentExam
{
private:
    float total;
    float percentage;

public:
    void calculate()
    {
        total = 0;

        for (int i = 0; i < 6; i++)
        {
            total += marks[i];
        }

        percentage = total / 6;
    }

    void displayResult()
    {
        displayStudent();
        displayMarks();

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    StudentResult s;

    s.getStudent();
    s.getMarks();
    s.calculate();

    cout << "\n----- Student Result -----" << endl;
    s.displayResult();

    return 0;
}

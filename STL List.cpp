
#include <iostream>
#include <list>
using namespace std;

class Attendance
{
    list<int> students;

public:
    void addStudent(int roll)
    {
        students.push_back(roll);
        cout << "Student added successfully!" << endl;
    }

    void removeStudent(int roll)
    {
        students.remove(roll);
        cout << "Student removed if present." << endl;
    }

    void display()
    {
        cout << "Student Roll Numbers: ";
        for (int roll : students)
        {
            cout << roll << " ";
        }
        cout << endl;
    }
};

int main()
{
    Attendance a;
    int choice, roll;

    do
    {
        cout << "\n1. Add Student";
        cout << "\n2. Remove Student";
        cout << "\n3. Display Students";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter roll number: ";
                cin >> roll;
                a.addStudent(roll);
                break;

            case 2:
                cout << "Enter roll number to remove: ";
                cin >> roll;
                a.removeStudent(roll);
                break;

            case 3:
                a.display();
                break;

            case 4:
                cout << "Exiting program.";
                break;

            default:
                cout << "Invalid choice!";
        }
    } while (choice != 4);

    return 0;
}

#include <iostream>
#include <list>
using namespace std;

class Attendance
{
    list<int> rollNo;

public:
    void addStudent(int r)
    {
        rollNo.push_back(r);
        cout << "Student added successfully." << endl;
    }

    void removeStudent(int r)
    {
        rollNo.remove(r);
        cout << "Student removed if present." << endl;
    }

    void display()
    {
        cout << "Student Roll Numbers: ";

        for (int r : rollNo)
        {
            cout << r << " ";
        }

        cout << endl;
    }
};

int main()
{
    Attendance a;
    int choice, r;

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
                cin >> r;
                a.addStudent(r);
                break;

            case 2:
                cout << "Enter roll number to remove: ";
                cin >> r;
                a.removeStudent(r);
                break;

            case 3:
                a.display();
                break;

            case 4:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}

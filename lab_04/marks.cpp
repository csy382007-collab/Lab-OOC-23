
#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
private:
    string name;
    string seatNo;
    string programme;

    string subject[5];
    int maxMarks[5];
    int obtainedMarks[5];

    int totalObtained;
    int totalMax;

public:

    // Function to take student details
    void inputDetails()
    {
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Exam Seat No: ";
        cin >> seatNo;

        cin.ignore();

        cout << "Enter Programme: ";
        getline(cin, programme);

        totalObtained = 0;
        totalMax = 0;

        for(int i = 0; i < 5; i++)
        {
            cout << "\nEnter Subject " << i + 1 << " Name: ";
            getline(cin, subject[i]);

            cout << "Enter Maximum Marks: ";
            cin >> maxMarks[i];

            cout << "Enter Obtained Marks: ";
            cin >> obtainedMarks[i];

            cin.ignore();

            totalObtained += obtainedMarks[i];
            totalMax += maxMarks[i];
        }
    }

    // Function to display marksheet
    void displayMarksheet()
    {
        cout << "\n\n";
        cout << "==============================================\n";
        cout << "          ONLINE STATEMENT OF MARKS\n";
        cout << "==============================================\n";

        cout << "Name       : " << name << endl;
        cout << "Seat No    : " << seatNo << endl;
        cout << "Programme  : " << programme << endl;

        cout << "\n----------------------------------------------\n";
        cout << left << setw(25) << "Subject"
             << setw(12) << "Max Marks"
             << setw(15) << "Obt. Marks" << endl;
        cout << "----------------------------------------------\n";

        for(int i = 0; i < 5; i++)
        {
            cout << left << setw(25) << subject[i]
                 << setw(12) << maxMarks[i]
                 << setw(15) << obtainedMarks[i]
                 << endl;
        }

        cout << "----------------------------------------------\n";

        cout << "Total : "
             << totalObtained << "/" << totalMax << endl;

        float percentage =
            (float)totalObtained / totalMax * 100;

        cout << fixed << setprecision(2);
        cout << "Percentage : " << percentage << "%" << endl;

        if(percentage >= 40)
            cout << "Result : PASS" << endl;
        else
            cout << "Result : FAIL" << endl;

        cout << "==============================================\n";
    }
};

int main()
{
    Student s;

    s.inputDetails();
    s.displayMarksheet();

    return 0;
}
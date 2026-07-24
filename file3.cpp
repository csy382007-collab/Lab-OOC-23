
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    int choice;
    char again;

    do {
        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "\nChoose an operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Result = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Result = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Result = " << num1 * num2 << endl;
                break;

            case 4:
                if (num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero is not allowed." << endl;
                break;

            case 5:
                cout << "Thank you for using the calculator!" << endl;
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "\nDo you want to perform another calculation? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\nThank you for using the calculator!" << endl;

    return 0;
}
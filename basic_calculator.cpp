#include <iostream>

using namespace std;

int main() {
    char choice;

    do {
        int a, b;
        cout << "Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter two numbers to add: ";
                cin >> a >> b;
                cout << "The result of addition: " << a + b << endl;
                break;
            case '2':
                cout << "Enter two numbers to subtract (a - b): ";
                cin >> a >> b;
                cout << "The result of subtraction: " << a - b << endl;
                break;
            case '3':
                cout << "Enter two numbers to multiply: ";
                cin >> a >> b;
                cout << "The result of multiplication: " << a * b << endl;
                break;
            case '4':
                cout << "Enter two numbers to divide (a / b): ";
                cin >> a >> b;
                if (b != 0)
                    cout << "The result of division: " << (float)a / b << endl;
                else
                    cout << "Error: Division by zero!\n";
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4.\n";
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

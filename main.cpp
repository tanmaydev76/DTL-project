#include <iostream>
#include "operations.h"
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n--- Calculator Menu ---\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch(choice) {
            case 1:
                cout << "Result = " << add(a, b);
                break;
            case 2:
                cout << "Result = " << sub(a, b);
                break;
            case 3:
                cout << "Result = " << mul(a, b);
                break;
            case 4:
                cout << "Result = " << divide(a, b);
                break;
            case 5:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice!";
        }

    } while(choice != 5);

    return 0;
}
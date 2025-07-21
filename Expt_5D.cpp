#include <iostream>

using namespace std;

int main()
{
    int choice;
    int num_1, num_2, sum, sub, mul;
    float div;

    cout << "(1) Addition" << endl
         << "(2) Subtraction" << endl
         << "(3) Multiplication" << endl
         << "(4) Division" << endl;
    cout << "Enter a choice: ";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
        cout << "Enter the first number: ";
        cin >> num_1;
        cout << "Enter the second number: ";
        cin >> num_2;

        sum = num_1 + num_2;
        cout << "The addition of " << num_1 << " and " << num_2 << " is " << sum << endl;
        break;
    case 2:
        cout << "Enter the first number: ";
        cin >> num_1;
        cout << "Enter the second number: ";
        cin >> num_2;

        sub = num_1 - num_2;
        cout << "The subtraction of " << num_1 << " from " << num_2 << " is " << sub << endl;
        break;
    case 3:
        cout << "Enter the first number: ";
        cin >> num_1;
        cout << "Enter the second number: ";
        cin >> num_2;

        mul = num_1 * num_2;
        cout << "The multiplication of " << num_1 << " and " << num_2 << " is " << mul << endl;
        break;
    case 4:
        cout << "Enter the first number: ";
        cin >> num_1;
        cout << "Enter the second number: ";
        cin >> num_2;

        div = (float) num_1 / (float) num_2;
        cout << "The multiplication of " << num_1 << " and " << num_2 << " is " << div << endl;
        break;
    default:
        break;
    }

    return 0;
}

/* Output

(1) Addition
(2) Subtraction
(3) Multiplication
(4) Division
Enter a choice: 1

Enter the first number: 5
Enter the second number: -3
The addition of 5 and -3 is 2

*/

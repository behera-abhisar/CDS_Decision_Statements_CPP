#include <iostream>

using namespace std;

int main() {
    int num_1, num_2, num_3;

    cout << "Enter first number: ";
    cin >> num_1;
    cout << "Enter second number: ";
    cin >> num_2;
    cout << "Enter third number: ";
    cin >> num_3;

    if(num_1 > num_2) {
        if(num_1 > num_3) {
            cout << num_1 << " is the largest number" << endl;
        } else {
            cout << num_3 << " is the largest number" << endl;
        }
    } else if (num_2 > num_3)
    {
        cout << num_2 << " is the largest number" << endl;
    } else {
        cout << num_3 << " is the largest number" << endl;
    }

    return 0;
}

/* Output

Enter first number: 2
Enter second number: 5
Enter third number: 4
5 is the largest number

Enter first number: 6
Enter second number: 3
Enter third number: 1
6 is the largest number

*/

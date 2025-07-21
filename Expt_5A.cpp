#include <iostream>

using namespace std;

int main() {
    int num_input;

    cout << "Enter a number: ";
    cin >> num_input;

    if (num_input % 2 == 0) {
        cout << "The given number " << num_input << " is EVEN" << endl;
    } else {
        cout << "The given number " << num_input << " is ODD" << endl;
    }

    return 0;
}

/* Output

Enter a number: 5
The given number 5 is ODD

Enter a number: 6
The given number 6 is EVEN

*/

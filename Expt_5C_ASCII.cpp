#include <iostream>

using namespace std;

int main() {
    char character;
    bool isVowel;

    cout << "Enter a character: ";
    cin >> character;

    int ascii_array[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};

    for(int i = 0; i < sizeof(ascii_array)/sizeof(int); i++) {
        if(ascii_array[i] == (int)character) {
            isVowel = true;
            break;
        }
    }

    if(isVowel == true) {
        cout << character << " is a vowel" << endl;
    } else if (((int)character >= 65 && (int)character <= 90) || ((int)character >= 97 && (int)character <= 122)) {
        cout << character << " is a consonant" << endl;
    } else {
        cout << character << " is not an alphabetic character" << endl;
    }

    return 0;
}

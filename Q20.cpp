#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0, digit;
    cout << "Enter a number: ";
    cin >> num;
    original = num;  
    while (num > 0) {
        digit = num % 10;           // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        num = num / 10;             // remove last digit
    }
    if (original == reversed) {
        cout << original << " is a Palindrome number." << endl;
    } else {
        cout << original << " is NOT a Palindrome number." << endl;
    }
    return 0;
}

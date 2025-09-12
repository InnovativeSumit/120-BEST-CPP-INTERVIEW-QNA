//REVERSE OF A NUMBER
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;          // Get last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed number
        num = num / 10;                // Remove last digit
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}

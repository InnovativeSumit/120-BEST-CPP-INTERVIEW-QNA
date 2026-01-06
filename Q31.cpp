#include <bits/stdc++.h>
using namespace std;

int main() {
    int start, end, num, temp, digit, sum, digits;

    cout<<"Enter the starting number: "<<endl;
    cin>>start;

    cout<<"Enter the ending number: "<<endl;
    cin>>end;
    cout<<"Armstrong numbers between "<<start<<" and "<<end<<" are:\n";

    for (num = start; num <= end; num++) {
        temp = num;
        sum = 0;
        digits = 0;
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
            cout<<num<<" ";
    }

    return 0;
}

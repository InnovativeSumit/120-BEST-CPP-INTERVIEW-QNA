// Calculate the gratest no between two numbers
#include <bits/stdc++.h>
using namespace std;

// void GreaterTwo(int a, int b, int c)
// {
//     if (a > b && a > c)
//     {
//         cout << a << " is teh lasgest no" << endl;
//     }
//     else if (b > a && b > c)
//     {
//         cout << b << " is teh lasgest no" << endl;
//     }
//     else
//     {

//         cout << c << " is teh lasgest no" << endl;
//     }
// }

// using ternary operators
void GreaterTwo(int a, int b, int c)
{
int result;
   result = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
   cout << result << " is the largest number" << endl;
}

int main()
{
    int num1, num2, num3;
    cout << "Enter the 1st number : ";
    cin >> num1;
    cout << "Enter the 2nd number : ";
    cin >> num2;
    cout << "Enter the 3rd number : ";
    cin >> num3;
    // cout<<GreaterTwo(num1,num2)<<endl;
    GreaterTwo(num1, num2, num3);
    return 0;
}
// Calculate the gratest no between two numbers
#include <bits/stdc++.h>
using namespace std;

// string GreaterTwo( int a , int b){
// return (a>b) ?"The 1st no is greater": "the 2nd no is greater";
// }
void GreaterTwo(int a, int b)
{
    if (a > b)
    {
        cout << a << " is teh lasgest no" << endl;
    }
    else
    {
        cout << b << " is teh lasgest no" << endl;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter the 1st number : ";
    cin >> num1;
    cout << "Enter the 2nd number : ";
    cin >> num2;
    // cout<<GreaterTwo(num1,num2)<<endl;
    GreaterTwo(num1, num2);
    return 0;
}
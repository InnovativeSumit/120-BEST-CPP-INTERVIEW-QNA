// // swap the two no using a third variables
// #include <iostream>
// using namespace std;

// int SwapUsingThirdVariable(int a, int b)
// {
//     int c;
//     c = a;
//     a = b;
//     b = c;
//     cout << "after swaping the 1st  no :  " << a << endl;
//     cout << "after swaping the 1st  no :  " << b << endl;
// }
// int main()
// {
//     int a, b;
//     cout << " Enter the 1st  no : ";
//     cin >> a;
//     cout << " Enter the 1st  no : ";
//     cin >> b;

//     SwapUsingThirdVariable(a, b);
//     return 0;
// }

// swap the two no without  using a third variables
#include <iostream>
using namespace std;

int SwapUsingThirdVariable(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "after swaping the 1st  no :  " << a << endl;
    cout << "after swaping the 1st  no :  " << b << endl;
}
int main()
{
    int a, b;
    cout << " Enter the 1st  no : ";
    cin >> a;
    cout << " Enter the 1st  no : ";
    cin >> b;

    SwapUsingThirdVariable(a, b);
    return 0;
}
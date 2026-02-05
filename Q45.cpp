// 1:-> Simple Number Pyramid
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
// 1
// 1 2
// 1 2 3
// 1 2 3 4

// 2:-> Same Number Pyramid
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
// 1
// 2 2
// 3 3 3
// 4 4 4 4

// 3:-> Floyd’s Triangle
#include <iostream>
using namespace std;
int main() {
    int n, num = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// 4:-> Centered Number Pyramid
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int s = 1; s <= n - i; s++)
            cout << " ";

        // increasing numbers
        for (int j = 1; j <= i; j++)
            cout << j;

        // decreasing numbers
        for (int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }
    return 0;
}

//    1
//   121
//  12321
// 1234321







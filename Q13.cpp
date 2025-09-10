// calculate the sumo of n natural numbers 
#include <iostream>
using namespace std;

void sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
}

int recursion(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + recursion(n-1);
    }
}

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;
    sum(n);
    cout << "The sum of first " << n << " natural numbers using recursion is: " << recursion(n) << endl;
    return 0;
}
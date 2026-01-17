//permutations in which n people can occupy r seats in a theatre
#include <iostream>
using namespace std;
long long permutations(int n)
{
    if(n == 0 || n == 1)        // Base case
        return 1;
    else
        return n * permutations(n - 1);   // Recursive call
}

int main(){
    int n;
    cout << "Enter number of people: ";
    cin >> n;
    cout << "Number of permutations = " << permutations(n);
    return 0;
}

    


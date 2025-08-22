#include<bits/stdc++.h>
using namespace std;

int OddEven(int n){
    if(n & 1 == 1){
        cout<<n<<" is a Odd no ";
    }
    else{
        cout<<n<<" is a Even no ";

    }
}


//when we use void 

// void OddEven(int n){
//     if(n & 1 == 1){
//         cout << "This no is a Odd no ";
//     }
//     else{
//         cout << "This no is a even no ";
//     }
// }
// int main(){
//     cout<<"Enter a number : ";
//     int n;
//     cin>>n;
//     OddEven(n);
//     // res= oddeven(n);
//     return 0;

// }



// int oddeven(int n){
//     if(n%2==0){
//         cout<<n<<" is a Odd no ";
//     }
//     else{
//         cout<<n<<" is a Even no ";

//     }
// }


int main(){
    cout<<"Enter a number : ";
    int n,res;
    cin>>n;
    res=OddEven(n);
    // res= oddeven(n);
    return 0;

}
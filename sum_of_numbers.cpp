// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int sum=0;

//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//         sum+=i;

//     } 
//     cout<<"\nSum is: "<<sum;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum=0;
    for(int i=0; i<=n; i++){
        cout<<"The sum of "<<i<<" - ";
        sum+=i;
        cout<<sum<<endl;
    }
    return 0;
}


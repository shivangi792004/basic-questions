//method-1 : without taking any variable

// #include <iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int b=2;
//     swap(a,b);
//     cout<<"After swapping a: "<<a<<endl;
//     cout<<"After swapping b: "<<b;
//     return 0;
// }

//method-2 : with taking third variable
#include <iostream>
using namespace std;
int main(){
    int a=4;
    int b=2;
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout<<"After swapping a: "<<a<<endl;
    cout<<"After swapping b: "<<b;
    return 0;
}
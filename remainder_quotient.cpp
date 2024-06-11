#include <iostream>
using namespace std;
int main(){
    int num1=45;
    int num2=8;
    int remainder = num1%num2; //modulus gives remainder
    int quotient = num1/num2;
    cout<<"Remainder of "<<num1<<" and "<<num2<<" is: "<<remainder<<endl;
    cout<<"Quotient of "<<num1<<" and "<<num2<<" is: "<<quotient;

    return 0;
}
#include <iostream>
#include<iomanip>
using namespace std;
int main(){
        float fareinheit;
        cout<<"Enter fareinheit: ";
        cin>>fareinheit;

        float celsius = (fareinheit-32)*5/9;
        cout<<fixed<<setprecision(2);
        cout<<celsius;
    return 0;
}
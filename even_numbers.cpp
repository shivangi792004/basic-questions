//method 1: without if condition
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=2;i<=10;i=i+2){
//         cout<<" "<<i;
//     }
//     return 0;
// }

// method 2: with if condition
#include <iostream>
using namespace std;
int main(){
    for(int i=2; i<=10; i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
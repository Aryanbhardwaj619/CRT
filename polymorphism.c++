#include <iostream>
#include <cstdlib>
#define sys system("cls");
using namespace std;
//default argument function
int sum(int a, int b , int c=0, int d=0){
    return a+b+c+d;
}
int main() {
   sys
    cout<<sum(5,8)<<endl;
    cout<<sum(5,8,10)<<endl;
    cout<<sum(5,8,10,13)<<endl;
    return 0;
}
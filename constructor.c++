#include <iostream>
#include <cstdlib> 
#define sys system("cls");
using namespace std;
class simple{
    private:
    int a;
    int b;
    int sum;
    public:
    simple(int a,int b){
        sum=a+b;
        cout<<sum;
    }
};
int main() {
    sys
    simple s1(10,5);
    return 0;
}
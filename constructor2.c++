#include <iostream>
#include <cstdlib> 
#define sys system("cls");
using namespace std;
class myclass{
    private:
    int a;
    int b;
    int sum;
    public:
    myclass(int a,int b=0.00f){
        sum=a+b;
        cout<<sum;
    }
};
int main() {
    sys
    myclass s1(10,5.00f);
    cout<<endl;
    myclass s2(10);
    return 0;
}
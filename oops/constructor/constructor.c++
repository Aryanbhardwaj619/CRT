#include <iostream>
#include <stdlib.h>

using namespace std;

class bank{
    private:
    string branchname;
    int bank_number;
    public:
    bank(){
        branchname="sanganeer";
        bank_number=159753;
    }
    void display(){
        cout<<branchname<<endl;
        cout<<bank_number<<endl;
    }
};

int main() {
    system("cls");
   bank hdfc;
   hdfc.display();
    return 0;
}

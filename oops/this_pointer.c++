#include <iostream>
#include <stdlib.h>

using namespace std;
class car{
    private:
    string name;
    string numberplate;
    int totalseats;
    public:
    car(string name ,string numberplate , int totalseats){
      this->name=name;                              //[ this->name ] can also be written as [ (*this).name ]
      this->numberplate=numberplate;
      this->totalseats=totalseats;

     
    }
    void output(){
        cout<<name<<endl;
        cout<<numberplate<<endl;
        cout<<totalseats<<endl;
    }
};

int main() {
    system("cls");
   car tata("nanno","RJ458TR15",6);
   tata.output();
    return 0;
}

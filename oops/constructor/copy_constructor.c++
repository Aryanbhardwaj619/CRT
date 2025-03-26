#include <iostream>
#include <stdlib.h>

using namespace std;
class car{
    private:
    string name;
    string numberplate;
    int totalseats;
    public:
    car(string n ,string np , int t){
      name=n;
      numberplate=np;
      totalseats=t;
    }
    car(string n,string np){
        name=n;
      numberplate=np;
    }
        //copy constructor
    car(car &t){
        name=t.name;
        numberplate = t.numberplate;
        totalseats = t.totalseats;
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
   car mahindra("xuv","MP456852TY");
   tata.output();
   mahindra.output();
   car bmw(tata);
   bmw.output();
   //another way
//    car honda;
//    honda = tata;
//    honda.output();
    return 0;
}

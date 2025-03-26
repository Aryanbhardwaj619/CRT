#include <iostream>
#include <stdlib.h>

using namespace std;
class car{
    private:
    string name;
    string numberplate;
    int totalseats;
    public:
    inline car(string n , string np , int ts):name(n),numberplate(np),totalseats(ts){}
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

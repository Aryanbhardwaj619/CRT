#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class student{
    private:
    string name;
    int age;
    int roll;
    char grade;
    public:
    void setname(string n){
        name=n;
    }
    void setage(int a){
        age=a;
    }
    void setroll(int r){
        roll=r;
    }
    void setgrade(char g){
        grade=g;
    }
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    //if we use int 
    int getroll(){
        return roll;
    }
    void getgrade(){
        cout<<grade<<endl;
    }
};

int main() {
    system("cls");
    student s1;
    s1.setname("aryan");
    s1.setage(21);
    s1.setroll(54);
    s1.setgrade('A');
    s1.getname();
    s1.getage();
        //for int
    cout<<s1.getroll()<<endl;
    s1.getgrade();
 
   

    return 0;
}

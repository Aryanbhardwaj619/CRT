#include <iostream>
#include <stdlib.h>

using namespace std;

class student{
    public:
    string name;
    int age;
    int roll;
    char grade;
 
    void getname(){
        cout<<name<<endl;
    }
   
};
int main() {
    system("cls");
   student *s1=new student; 
   s1->name="rohit";//or can be written as (*s1).name="rohit";
   s1->getname();  // or can be written as cout<<s1->name<<endl;
       return 0;
}

#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *o){
    int temp;
    temp=*p;
    *p = *o;
    *o = temp;
  
}
int main() {
    system("cls");
    int a , b;
    printf("enter the two numner = ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;

}

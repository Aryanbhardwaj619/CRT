#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    system("cls");
    char str[]={"abcd158309rp362503p2975"};
    int arr[10]={0};
    for(int i=0;i<sizeof(str) / sizeof(str[0]);i++){
        if(str[i]>='0' && str[i]<='9'){
            int index = str[i] - '0';
            arr[index]++;
        }
    }
   for(int i=0;i<10;i++){
    printf("Frequency of %d = %d\n", i, arr[i]);
   }
    return 0;

}

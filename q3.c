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
    int arr[]={5,2,4,3,1};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
        swap(&arr[i],&arr[j]);
    }
    }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}

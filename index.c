#include <stdio.h>

int main() {

    int u;

    printf("Enter total unit: ");
    scanf("%d", &u);
    switch (u){
        case 1 ... 100 :
        printf("%f",u*0.80);
        break;
        case 101 ... 300 :
        printf("%f",u*1.50);
        break;
        case 301 ... 500 :
        printf("%f",u*2.00);
        break;
        case 501 ... 700 :
        printf("%f",u*3.00);
        break;

    }

    return 0;

}

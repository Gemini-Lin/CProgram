
#include<stdio.h>

int main() {
    int a;
    printf("Enter a wind speed: ");
    scanf("%d", &a);
    if (a < 1)
        printf("Calm\n");
    else if (1 <= a && a <= 3)
        printf("Light air\n");
    else if (4 <= a && a <= 27)
        printf("Breeze\n");
    else if (28 <= a && a <= 47)
        printf("Gale\n");
    else if (48 <= a && a <= 63)
        printf("Storm\n");
    else if (63 < a)
        printf("Hurricane\n");
   

    return 0;

}

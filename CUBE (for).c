#include <stdio.h>

int main() {
    int a, b;


    printf("Input number of terms: ");
    scanf("%d", &a);


    for(b = 1; b <= a; b++) {
        printf("Number is: %d and cube of the %d is: %d\n", b, b, b*b*b);
    }

    return 0;
}

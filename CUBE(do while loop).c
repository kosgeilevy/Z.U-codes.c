
#include <stdio.h>

int main() {
    int a, b = 1;

    printf("Input number of terms: ");
    scanf("%d", &a);

    do {
        printf("Number is: %d and cube of the %d is: %d\n", b, b, b*b*b);
        b++;
    }while(b <= a);

    return 0;
}

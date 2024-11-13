
#include <stdio.h>

int odd_even(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    if (number % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    
    
};

int main(){
     odd_even();
return 0;
}

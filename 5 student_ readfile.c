
// Online C compiler to run C program online
#include <stdio.h>//scanf(),printf(),fprintf(),fclose()

int main() {
    int marks1;
    char name1[50];
    int marks2;
    char name2[50];
    int marks3;
    char name3[50];
    int marks4;
    char name4[50];
    int marks5;
    char name5[50];

    FILE *fptr;

    fptr=fopen("C:\\Users\\ADMIN\\Desktop\\LEVIE.txt","w");
    if (fptr==NULL){
        printf("Error opening the file");
        exit(1);
    }
    printf("Enter student1 marks and name:");
    scanf("%d %s",&marks1,&name1);

    printf("Enter student2 marks and name:");
    scanf("%d %s",&marks2,&name2);

    printf("Enter student3 marks and name:");
    scanf("%d %s",&marks3,&name3);

    printf("Enter student4 marks and name:");
    scanf("%d %s",&marks4,&name4);

    printf("Enter student5 marks and name:");
    scanf("%d %s",&marks5,&name5);


    fprintf(fptr, "The marks entered is %d and the name is %s",marks1,name1);
    fprintf(fptr, "The marks entered is %d and the name is %s",marks2,name2);
    fprintf(fptr, "The marks entered is %d and the name is %s",marks3,name3);
    fprintf(fptr, "The marks entered is %d and the name is %s",marks4,name4);
    fprintf(fptr, "The marks entered is %d and the name is %s",marks5,name5);
    fclose(fptr);
    printf("marks and names written successfully");

    return 0;//execution successful
}

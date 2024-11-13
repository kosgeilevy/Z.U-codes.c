
#include <stdio.h>
#include <string.h>

struct employee{
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
} employee1;


int main(){
    strcpy(employee1.name,"Levy Kosgei");
    employee1.id=12345;
    strcpy(employee1.department,"Human Resource");
    employee1.salary=55000.50;
    strcpy(employee1.email,"levykosgei@gmail.com");

    printf("Employee name: %s\n",employee1.name);
    printf("Employee id: %d\n",employee1.id);
    printf("Employee department: %s\n",employee1.department);
    printf("Employee salary: %.2f\n",employee1.salary);
    printf("Employee email: %s\n",employee1.email);

    return 0;
}

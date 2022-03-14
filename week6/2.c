#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[30];
    int     empId;
    float   salary;
    int age;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details \n");
    printf("Name :");
	gets(emp.name);
    printf("ID :");
	scanf("%d",&emp.empId);
    printf("Salary :");
	scanf("%f",&emp.salary);
    printf("Age :");
	scanf("%d",&emp.age);
     
    /*print employee details*/
    printf("\nEntered details are\n:");
    printf("Name: %s \n"   ,emp.name);
    printf("Id: %d\n"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    printf("Age: %d"     ,emp.age);

    return 0;
}

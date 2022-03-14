#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[30];
    int     empId;
    float   salary;
    int age;
	struct dateofbirth{
	int date;
	int month;
	int year;
	}DOB;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("ID ?:");            scanf("%d",&emp.empId);
    printf("Salary ?:");        scanf("%f",&emp.salary);
     printf("Age ?:");            scanf("%d",&emp.age);
     
    /*print employee details*/
    printf("\nEntered details are:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
     printf("Age: %d"     ,emp.age);
printf("Enter Date of Birth [DD MM YY] format: ");
scanf("%d",&emp.DOB.date);
scanf("%d",&emp.DOB.month);
scanf("%d",&emp.DOB.year);
printf(" \nDate of birth : %d/%d/%d\n",emp.DOB.date,emp.DOB.month,emp.DOB.year);
return 0;
}


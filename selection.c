# selection.c
#include <stdio.h>
int main()
{
	float salary;
	float newsalary;
	int years;
	char status;

	printf("Enter your employee status(F/P): ");
	scanf("%c",&status);
	printf("Enter your years of service: ");
	scanf("%d",&years);
	printf("Enter your current salary: ");
	scanf("%f",&salary);

	if (status== 'F'){
		printf("You entered Full-time\n");
		if (years<5)
			newsalary=((salary*104.0)/100);
			printf("Your new salary is:%.2f\n ",newsalary);
		if (years>=5)
			newsalary=((salary*105.0)/100);
			printf("Your new salary is:%.2f\n ",newsalary);
	}

	if (status== 'P'){
		printf("You entered Part-time\n");
		if (years<5)
			newsalary=((salary*102.5)/100);
			printf("Your new salary is:%.2f\n ",newsalary);
		if (years>=5)
			newsalary=((salary*103.0)/100);
			printf("Your new salary is:%.2f\n ",newsalary);
	}

	system("pause");
	return 0;
}

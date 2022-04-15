/*23. Write a structure to store the names, salary and hours of work per day of 10 employees in a company. 
Write a program to increase the salary depending on the number of hours of work per day as follows and 
then print the name of all the employees along with their final salaries.
             Hours of work per day        8        10          >=12
             Increase in salary           $50      $100        $150 */
             
#include <stdio.h>

struct employee{
	char name[20];
	float salary;
	int hours;
}e[40];


int main(){
	int num,i;
	printf("Enter the number of employees:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		printf("Enter the employee name:\n");
		scanf("%s",e[i].name);
		printf("Enter working hours:\n");
		scanf("%d",&e[i].hours);
		printf("Enter salary:\n");
		scanf("%f",&e[i].salary);
	}
	
	for(i=0;i<num;i++){
		if(e[i].hours==8){
			e[i].salary=e[i].salary +50;
		}else if(e[i].hours==10){
			e[i].salary= e[i].salary+100;
		}else if(e[i].salary>=12){
			e[i].salary=e[i].salary +150;
		}else{
			e[i].salary = e[i].salary;
		}
	}
	
	for(i=0;i<num;i++){
		printf("Employee Name:%s\tEmployee Working hours:%d\tEmployee salary:%f\t\n",e[i].name,e[i].hours,e[i].salary);
	}
	
	return 0;
}















/*
Write a program for the salary slip generation. 
Accept the employee code, name, designation and basic salary from the user. 
The designations allowed are E0, E1, E2 and E3. Use enumeration for accepting designation. 

Calculate HRA, DA, PF based on the following rules
70% of basic for E3, 65% of basic for E2, 60% of basic for E1 and 55% of basic for E0
90% DA for E1 to E3 and for E0 no DA
PF is 5% of Basic
HRA and DA amount is added with basic to calculate Gross pay.

Tax per month is calculated after computing the tax for the whole year. 
Flat 25% is used for tax calculation. 
1,50,000 of the whole year’s gross pay is exempted from tax to identify the taxable income for a year. 
PF amount for the whole year has to be reduced from taxable income to find the final taxable income. 
Apply 25% tax on the final taxable income to calculate yearly payable tax amount. 
Convert it into monthly payable tax amount. 
Reduce monthly tax amount from the gross pay to calculate Net pay.
Design a neatly formatted salary slip.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

enum designation{
	E0,
	E1,
	E2,
	E3
};

struct employee{
	int code;
	char ename[40];
	int designation;
	float salary;
	float DA;
	float HRA;
	float PF;
	float nettax;
	float gross;
}e[10];

int empcount=3;


void calculate(){

	for(int i=0;i<=empcount;i++){

			if(e[i].designation==3){
				e[i].salary=0.70*e[i].salary;
			}else if(e[i].designation==2){
				e[i].salary=0.65*e[i].salary;
			}else if(e[i].designation==1){
				e[i].salary=0.60*e[i].salary;
			}else{
				e[i].salary=0.55*e[i].salary;
			}
            
			if(e[i].designation==3 || e[i].designation==2 || e[i].designation==1){
				e[i].DA = (0.90)*e[i].salary;
			}else{
				e[i].DA = e[i].DA;
			}

			e[i].PF=(0.05)*e[i].salary;
			e[i].HRA=(7.5/100)*e[i].salary;
			e[i].gross=e[i].salary+e[i].DA+e[i].HRA;
			e[i].nettax = e[i].gross-e[i].PF;
	
	}

}

void display(){
	for(int i=0;i<=empcount;i++){
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("Tax information:\n");
		printf("code:%d\nemployee name:%s\nDesignation:%d\nSalary:%f\nDA:%f\nHRA:%f\nPF:%f\nNettax:%f\nGross:%f\n\n",e[i].code,e[i].ename,e[i].designation,e[i].salary,e[i].DA,e[i].HRA,e[i].PF,e[i].nettax,e[i].gross);
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	}
}

int main(){
	//int empcount=3;
	printf("Employee designation are E0,E1,E2,E3\n");
	for(int i=0;i<=empcount;i++){
		printf("Enter the employee code:\n");
		scanf("%d",&e[i].code);
		printf("Enter the employee name:\n");
		scanf("%s",e[i].ename);
		printf("Enter the employee salary:\n");
		scanf("%f",&e[i].salary);			
	}
	e[0].designation=E0;
	e[1].designation=E1;
	e[2].designation=E2;
	e[3].designation=E3;

	int choice;
	while(1){
		printf("1.calculate salary\n2.display tax\n3.exit\n");
		printf("Enter the choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				calculate();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
			default:
				printf("Enter the valid choice\n");
			}
		}
	return 0;
}


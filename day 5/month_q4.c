//4. Write a program in C to read any Month number in integer and display Month name in. the word.(using switch case)

#include <stdio.h>

int main(){
	int month;
	printf("Enter the month number:\n");
	scanf("%d",&month);
	
	switch(month){
		case 1:
			printf("This month is January");
			break;
		case 2:
			printf("This month is Febraury");
			break;
		case 3:
			printf("This month is March");
			break;
		case 4:
			printf("This month is April");
			break;
		case 5:
			printf("This month is May");
			break;
		case 6:
			printf("This month is June");
			break;
		case 7:
			printf("This month is July");
			break;
		case 8:
			printf("This month is August");
			break;
		case 9:
			printf("This month is september");
			break;
		case 10:
			printf("This month is october");
			break;
		case 11:
			printf("This month is November");
			break;
		case 12:
			printf("This month is December");
			break;
		default:
			printf("There is not month");
			break;
	}
	return 0;
}

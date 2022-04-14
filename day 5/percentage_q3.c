/*3. Write a program to take input from 5 subjects . find total and calculate percent. On the basis of percent provide grade like  
		IF 	 Per > 80 “A+”
             Per >= 65 and per <=80 “A”
             Per > =50 and per <=65 “B”
             Per >= 42 and per <=50 “C”
             Per < 42 “Fail”
             
*/

#include <stdio.h>

int main(){
	float mark1,mark2,mark3,mark4,mark5,total;
	float percentage,average;
	
		printf("Enter the mark1:\n");
		scanf("%f",&mark1);
		printf("Enter the mark2:\n");
		scanf("%f",&mark2);
		printf("Enter the mark3:\n");
		scanf("%f",&mark3);
		printf("Enter the mark4:\n");
		scanf("%f",&mark4);
		printf("Enter the mark5:\n");
		scanf("%f",&mark5);
		
		total = mark1+mark2+mark3+mark4+mark5;
		percentage = (total / 500.0) * 100;
		average = total/5.0;
		printf("Total Marks secured out of 500: %f\n",total);
		printf("Your percentage is %f\n",percentage);
		printf("Your average is %f\n",average);
		
		if(percentage>80.0){
			printf("You have secured A+");
		}else if(percentage>= 65.0 && percentage<=80.0){
			printf("You have secured A");
		}else if(percentage >=50.0 && percentage <=65.0){
			printf("You have secured B");
		}else if(percentage >= 42.0 && percentage <=50.0){
			printf("You have secured C");
		}else{
			printf("You have failed");
		}
		
	return 0;
}

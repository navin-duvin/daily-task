#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char studentname[40];
    char dept[10];
    float sem1;
    float sem2;
    float sem3;
    float sem4;
    float sem5;
    float sem6;
    float sem7;

}s[1000];

int a=0,i=1000;
float total;
void addstudent()
 {
    printf("\n----------------------NEW STUDENT DETAILS---------------");
    printf("\nroll no : %d",i);
    s[a].rollno=i;
    printf("\nstudent name ");
    scanf("%s",s[a].studentname);
   printf("Departmet");
   scanf("%s",s[a].dept);
   printf("Enter your sem marks:");
   scanf("%f %f %f %f %f %f %f",&s[a].sem1,&s[a].sem2,&s[a].sem3,&s[a].sem4,&s[a].sem5,&s[a].sem6,&s[a].sem7);
     total = s[a].sem1+s[a].sem2+s[a].sem3+s[a].sem4+s[a].sem5+s[a].sem6s[a]+sem7;
    a++;
    i++;
    //printf("marks:%f\n",s[a].studentname,total);
 }
void coursemarks(){
	int rollno,b=0,m=0;
    printf("Enter the roll no for marks:");
    scanf("%d",&rollno);
    for(b=1;b<=a;b++)
     {  
         if(s[b].rollno==rollno)
     m=b;
     }
    if(s[m].rollno==rollno){
    	printf("%f %f %f %f %f %f %f\n",s[m].sem1,s[m].sem2,s[m].sem3,s[m].sem4,s[m].sem5,s[m].sem6,s[m].sem7);
    	//int total = s[a].sem1+s[a].sem2+s[a].sem3+s[a].sem4+s[a].sem5+s[a].sem6+s[a].sem7;
    	//printf("Total scored secured:%d", total);
    }
 
}
void result(){
    int rollno,b=0,m=0;
    printf("Enter the roll no for marks:");
    scanf("%d",&rollno);
    for(b=1;b<=a;b++)
     {  
         if(s[b].rollno==rollno)
     m=b;
     }
    if(s[m].rollno==rollno){
    	//printf("%f %f %f %f %f %f %f\n",s[m].sem1,s[m].sem2,s[m].sem3,s[m].sem4,s[m].sem5,s[m].sem6,s[m].sem7);
    	int total = s[m].sem1+s[m].sem2+s[m].sem3+s[m].sem4+s[m].sem5+s[m].sem6+s[m].sem7;
    	float cgpa = (total)/7.0;
    //	cgpa = 9.5 *cgpa;
    	printf("Total cgpa secured:%f\n", cgpa);
    }
}
void Exit(){
	exit(0);
}

int main(){
	char studentname[40];
	int choice;

	printf("=================Welcome to result management system=================\n");

	do{
	printf("select your option\n 1.add student\n 2.coursemarks\n 3.result\n 4.Exit\n");

	printf("Enter your choice:");
	scanf("%d",&choice);

	switch(choice){
		case 1:
			addstudent();
			break;
		case 2:
			coursemarks();
			break;
		case 3:
			result();
			break;
		case 4:
			Exit();
			break;
		default:
			printf("Enter the correct option");
	}

}while(choice !=0);

}
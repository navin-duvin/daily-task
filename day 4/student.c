//Program to read 10 student details from a file
//write them into another file for those who have total marks>400 or Average>80.
//Note: RNo, Name, Course, Mark-1,Mark-2,Mark-3,Mark-4,Mark-5,Total and Average as  
//fields of a Student structure.

#include <stdio.h>
struct student{
	int rollno;
	char name[30];
	char course[10];
	int mark1;
	int mark2;
	int mark3;
	int mark4;
	int mark5;
	int total;
	float Averaage;
}s[10];


int main(){
    
	FILE *fp,*cp;
	int i;
	fp=fopen("Student.txt","r");
	cp=fopen("studentupdate.txt","w");
	if(fp==NULL){
		printf("File not found");
	}
	/*printf("Enter the student details:\n");
	for(i=0;i<10;i++){
		printf("Enter the roll no:\n");
		scanf("%d",&s[i].rollno);
		printf("Enter the name:\n");
		scanf("%s",s[i].name);
		printf("Enter the course dept:\n");
		scanf("%s",s[i].course);
		printf("Enter the mark1:\n");
		scanf("%d",&s[i].mark1);
		printf("Enter the mark2:\n");
		scanf("%d",&s[i].mark2);
		printf("Enter the mark3:\n");
		scanf("%d",&s[i].mark3);
		printf("Enter the mark4:\n");
		scanf("%d",&s[i].mark4);
		printf("Enter the mark5:\n");
		scanf("%d",&s[i].mark5);
		
		s[i].total = s[i].mark1+s[i].mark2+s[i].mark3+s[i].mark4+s[i].mark5;
		s[i].Averaage = s[i].total / 5;
	}*/
	
	 //fwrite(s,sizeof(struct student),10,fp);
	 
	 fread(s,sizeof(struct student),10,fp);
	 for(int i=0;i<10;i++){
    	 if(s[i].total >=400 || s[i].Averaage >=80){
    	    fwrite(&s[i],sizeof(struct student),1,cp);
    	 }
	 }
	fclose(fp);
	fclose(cp);
	return 0;	
}


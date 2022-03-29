#include <stdio.h>
struct student{
        int rollno;
        char name[20];
        float percentage;
}s[10];

struct student  temp;

int main()
{
    int n;
    printf("Enter the number of student:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter name, roll and marks of student:\n");
  scanf("%s%d%f",s[i].name, &s[i].rollno, &s[i].percentage);
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[i].percentage <s[j].percentage){
                 temp =s[i];
                 s[i] =s[j];
                 s[j] = temp;
            }
        }
        
    }
    printf("Sorted based on percentage:\n");
    
    for(int i=0;i<n;i++){
        printf("Name:%s\nrollno:%d\nPercentage:%f\n",s[i].name,s[i].rollno,s[i].percentage);
    }
    

    return 0;
}

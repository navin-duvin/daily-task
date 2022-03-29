#include<stdio.h>  

struct address   
{  
    char place[20];  
    char phoneno[10];  
};  
struct employee  
{  
    char name[20];  
    struct address addressofemployee;  
};  
void main ()  
{  
    struct employee emp;  
    printf("Enter employee information:\n1.Name\n2.Place\n3.phoneno\n");  
    scanf("%s %s  %s",emp.name,emp.addressofemployee.place, emp.addressofemployee.phoneno);  
    printf("\nDetails of Employee:\n");  
    printf("name: %s\nplace:  %s\nPhone: %s",emp.name,emp.addressofemployee.place,emp.addressofemployee.phoneno);  
}

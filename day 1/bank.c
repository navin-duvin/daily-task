#include <stdio.h>
#include<conio.h>
#include<string.h>

void CreateAccount();
void Deposit();
void withdraw();
void Lowbal();
char Password();
void customerdetails();
int a=1,i=100001;

struct bank
{
    int customerid;
    int accountno;
    char cname[40];
    char password[10];
    float deposit;
}s[1000];

int main()
{
    int n;
    
    printf("\n-----------------------BANKING--------------------");
    
    do{
    printf("\n\n 1.CREATE NEW ACCOUNT");
    printf("\n 2.CASH DEPOSIT");
    printf("\n 3.CASH WITHDRAWAL");
    printf("\n 4.LOW BALANCE");
    printf("\n 5.CUSTOMER DETAILS");
    printf("\n 6.EXIT\n");
    printf("\n ENTER YOUR CHOICE:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:CreateAccount();
    break;
    case 2:Deposit();
    break;
    case 3:withdraw();
    break;
    case 4:Lowbal();
    break;
    case 5:customerdetails();
    break;
    case 6:
    break;
    default:printf("\nEnter a valid option!");
    break;
    }}while(n!=6);
    }
 void CreateAccount()
 {
    printf("\n----------------------NEW ACCOUNT CREATION---------------");
    printf("\ncustomerid : %d",a);
    s[a].customerid=a;
    printf("\nAccount number : %d",i);
    s[a].accountno=i;
    printf("\nCreate password : ");
    scanf("%s",s[a].password);
    if(Password(s[a].password))       //Password check and verification
    {
    printf("Your Name: ");
    scanf("%s",s[a].cname);
    printf("\nYour deposit Amount must be minimum Rs.10,000:");
   scanf("%f",&s[a].deposit);
    i++;
    a++;
 }
}
 void Deposit()
 {
     int accno,b=0,m=0;
     float dep;
     printf("\n---------------------------CASH DEPOSIT-----------------");
     printf("\nEnter your Account No. :");
     scanf("%d",&accno);
     for(b=1;b<=a;b++)
     {  
         if(s[b].accountno==accno)
     m=b;
     }
     if(s[m].accountno==accno)
     {
         printf("\nAccount No. : %d",s[m].accountno);
         printf("\n Name : %s",s[m].cname);
         printf("\n Amount : %.2f",s[m].deposit);
         printf("\n Amount Deposited :");
         scanf("%f",&dep);
         s[m].deposit+=dep;
         printf("\n The Balance in Your Account is : %f",s[m].deposit);
     }
     else{
     printf("\nPlease Enter a valid Account no. \n");
      getch();
     }
 }    
void withdraw()
{
    int accno,b=0,m=0;
    char pass[10];
   int amt;
    printf("\n-------------------------CASH WITHDRAW------------------");
    printf("\nEnter your account number : ");
    scanf("%d",&accno);
    for(b=1;b<=a;b++)
    {
        if(s[b].accountno==accno)
        m=b;
    }
    if(s[m].accountno==accno)
    {
        printf("\nAccount Number : %d",s[m].accountno);
        printf("\n Name : %s",s[m].cname);
        printf("\n Amount: %.2f",s[m].deposit);
        printf("\nEnter the withdraw Amount: ");
        scanf("%d",&amt);
        if(s[m].deposit<=amt)
        {
            printf("\n Cannot Withdraw your account has minimum balance");
        getch();
        }
       else if(amt%100!=0)
        {
            printf("\nplease enter the Amount in multiples of hundred");
            getch();
        }
        else 
        {
            s[m].deposit-=amt;
            printf("\nThe Balance Amount IN Your Account is %.2f ",s[m].deposit);
        getch();
        }
    }
    else
    {
        printf("\nEnter VAlid Account Number");
        getch();
    }

}
 void Lowbal()
 {
     int accno,b=0,m=0;
     int amt;
     char pass[10];
     
     printf("\n-------------------------------------BALANCE DETAI…
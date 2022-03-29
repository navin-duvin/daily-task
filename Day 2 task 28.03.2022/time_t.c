/*To create Library Book details using structure and use time_t for storing the issue date of a book and 
find out the fine amount if the book is not returned on the stipulated time. 
Calculate the days excluding the Saturday and Sunday.*/

#include <stdio.h>
#include <time.h>

struct Library{
    char bookname[20];
    int price;
    char author[];
}lib[10];
    

int main(){
    int num;
   time_t now = time(NULL); 
   char *currenttime_now = ctime(&now);
   
   printf("%s\n",currenttime_now);
   printf("Enter the number of book:");
   scanf("%d",&num);
     for(int i=0;i<num;i++){
        printf("Enter the details Bookname:Price:author:");
        scanf("%s %d %s",lib[i].bookname,&lib[i].price,lib[i].author);
   }
   printf("Availabale books:\n");
   
   for(int i=0;i<num;i++){
       printf("%s\n",lib[i].bookname);
   }
       
   }

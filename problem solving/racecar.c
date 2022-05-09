   E   
  C C  
 A   A 
R     R
 A   A 
  C C  
   E 



#include <stdio.h>
#include <string.h>

int main(){
    char str[]= "RACECAR";

    int len =strlen(str)/2;
    //printf("%d",len); 
    for(int i=0;str[i]!='\0';i++){
            if(i==len){
                printf("%c",str[i]);
            }else{
                printf(" ");
            }
    }
    printf("\n"); 
    for(int i=1;i<=len;i++){
        for(int j=0;str[j]!='\0';j++){
            if(j==len-i){
                printf("%c",str[j]);
            }else if(j==len+i){
                printf("%c",str[j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=len-1;i>=0;i--){
        for(int j=0;str[j]!='\0';j++){
            if(j==len-i){
                printf("%c",str[j]);
            }else if(j==len+i){
                printf("%c",str[j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
   
}
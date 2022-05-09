//sort string 

/*
input:edsab
output:abdes
*/

#include <stdio.h>

int main(){
    char str[]="edsaaaab";
    
    
    for(int i=0;str[i]!='\0';i++){
       for(int j=0;str[j]!='\0';j++){
           if(str[i]<str[j]){
               int temp;
               temp =str[i];
               str[i]=str[j];
               str[j]=temp;
           }
       }
    }
    printf("%s",str);
    return 0;
}
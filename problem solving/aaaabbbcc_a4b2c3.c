#include <stdio.h>
//input:    aaaabbcc
//output:   a4b2c2

int main(){
    char str[]="aaaabbcccccccccccccccccccccccccccccccccccccccccc";
    int count=1;
    int j,i;
    for(i=0;str[i]!='\0';i=count+i){
        count=1;
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }else{
                //printf("%c%d",str[i],count);
                break;
            }
        }
        printf("%c%d",str[i],count);
        //count=1;
    }
    return 0;
}
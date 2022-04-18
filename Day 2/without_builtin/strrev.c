#include <stdio.h>
void strrev(){
    char ch;
    scanf("%c",&ch);
    if(ch !='\n'){
        strrev();
        printf("%c",ch);
    }
}
int main(){
    printf("Enter the string:");
    void (*revpoint)() = strrev;
    revpoint();
    return 0;
}

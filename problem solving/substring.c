/*4. Find if a String2 is substring of String1. If it is, return the index of the first occurrence. else return -1. 
Eg 1:Input:        
String 1: test123string         
String 2: 123        
Output: 4 

Eg 2: Input:        
String 1: testing12        
String 2: 1234         
Output: -1
*/


#include <stdio.h>
#include <string.h>


int substring(char str[],char sub[]){
	int index=-1;
	int count=0;
	for(int i=0;str[i]!='\0';i++){
		int f = 1;
		for(int j=0;sub[j]!='\0';j++){
			if(str[i + j]!=sub[j]){
				f = 0;
				break;
			}
		}
		if(f){
			index = i;
			break;
		}
	
	}
	return index;
}

int main(){
	char str[]="test123string";
	char sub[]="t1233";
	int index =substring(str,sub);
	printf("\n%d",index);
	return 0;
}


/*/*4. Find if a String2 is substring of String1. If it is, return the index of the first occurrence. else return -1. 
Eg 1:Input:        
String 1: test123string         
String 2: 123        
Output: 4 

Eg 2: Input:        
String 1: testing12        
String 2: 1234         
Output: -1
*/
/*
#include <stdio.h>
#include <string.h>

int isSub(int i,char sub[],char str[]){
    int k = 0;
    for(int j = i;j < i + strlen(sub);j++){
        if(str[j]!=sub[k++]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[] = "testing12";
    char sub[] = "g12";
    int f = 1;
    for(int i = 0;i < strlen(str);i++){
        if(isSub(i,sub,str)){
            f = 0;
            printf("Found Index at %d",i);
            break;
        }
    }
    if(f) printf("-1");
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "test123String";
    char sub[] = "123";
    int count = strlen(sub);
    int index = 0;
    int f = 1;
    for(int i = 0; str[i]!='\0';i++){
       
        for(int j = 0; sub[j]!='\0';j++){
            if(str[i + j] == sub[j]){
                index = i;
                count--;
            }
            else{
                if(count == 0){
                    f = 0;
                    
                    printf("found at %d",index);
                    break;
                }
                else{
                    count = strlen(sub);
                }
            }
        }
        if(f == 0){
            break;
        }
    }
    if(f == 1){
        printf("-1 Substring not found");
    }
}
*/
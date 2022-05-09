/*4. Print the numbers which are mismatched from two array. 
Arr1 = {a b c d e f g h i} 
arr2 ={ a b d e e g g i i}, 

O/P- cd, de, fg, hi. */

#include <stdio.h>

struct alphabet{
    char first;
};

int main(){
    struct alphabet arr1[]={'a','b','c','d','e','f','g','h','i'};
    struct alphabet arr2[]={'a','b','d','e','e','g','g','i','i'};
    
    for(int i=0;i<sizeof(arr1);i++){
        if(arr1[i].first!=arr2[i].first){
            printf("%c%c ",arr1[i].first,arr2[i].first);
        }
    }
    return 0;
}
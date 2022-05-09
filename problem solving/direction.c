#include <stdio.h>

enum dir{
    L=0,
    R=1,
    U=2,
    B=3
};

int main(){
    int row=5,col=5,start,end;
    int arr[5][5]={1 ,2 ,3 ,4 ,5 ,
                   6 ,7 ,8 ,9 ,10,
                   11,12,13,14,15,
                   16,17,18,19,20,
                   21,22,23,24,25
        
    };
    
    printf("Enter the starting position index for 5x5 matrix:\n");
    scanf("%d %d",&start,&end);
    int dir;
    printf("<start:%d,End:%d>\n",start,end);
    while(1){
        printf("Enter the times of direction:\n0->Left\n1->right\n2->up\n3->down\n");
        scanf("%d",&dir);
            if(start<=0 || end<=0){
                printf("position not available\n");
                break;
            }
            if(dir==L){
                start=start;
                end=end-1;
                printf("<start:%d,End:%d>\n",start,end);
                printf("Value:%d\n",arr[start][end]);
            }else if(dir==R){
                start=start;
                end=end+1;
               printf("<start:%d,End:%d>\n",start,end);
                printf("%d\n",arr[start][end]);
            }else if(dir==U){
                start=start-1;
                end=end;
                printf("<start:%d,End:%d>\n",start,end);
                printf("%d\n",arr[start][end]);
            }else if(dir==B){
                start=start+1;
                end=end;
                printf("<start:%d,End:%d>\n",start,end);
                printf("%d\n",arr[start][end]);
            }
            else{   
                printf("direction not available\n");
                break;
            }
    }
    return 0;
}

#include <stdio.h>
void rightrotate(int arr[],int n,int rotate){}
void leftrotate(int arr[],int n,int rotate){
	 for(int i = 0; i < n; i++){
        int j, first;
        //Stores the first element of the array
        first = arr[0];
        for(j = 0; j < n-1; j++){
            //Shift element of array by one
            arr[j] = arr[j+1];
        }
        //First element of array will be added to the end
        arr[j] = first;
    }
    printf("\n");
	for(int i=0;i<n;i++){
	    printf("%d",arr[i]);
	}

}
void rotation(int arr[],int n,int rotate){
	int direction;
	printf("1.left rotate\n 2.right rotate\n");
	scanf("%d",&direction);
	switch(direction){
	    case 1:
		leftrotate(arr,n,rotate);
		break;
	    case 2:
		rightrotate(arr,n,rotate);
		break;
}
}
int main(){
    int n,rotate;
    printf("Enter the number:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of times to rotate");
    scanf("%d",&rotate);
    void (*rotatepoint)(int [],int ,int ) =rotation;
    rotatepoint(arr,n,rotate);
}

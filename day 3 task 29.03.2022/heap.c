#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
int temp = *ptr2;
*ptr2 = *ptr1;
*ptr1 = temp;
}
// To heapify a subtree with node i as root
// Size of heap is n
void maxheap(int arr[], int len, int i)
{
		int large = i; // Initialize large as root
		int leftChild = 2 * i + 1; // left child = 2*i + 1
		int rightChild = 2 * i + 2; // right child = 2*i + 2

		// If left child is greater than root
		if (leftChild < len && arr[leftChild] > arr[large])
		large = leftChild;

		// If right child is greater than new large
		if (rightChild < len && arr[rightChild] > arr[large])
		large = rightChild;

		// If large is not the root
		if (large != i)
		{
		// swap root with the new large
		swap(&arr[i], &arr[large]);
		// Recursively heapify the affected sub-tree i.e, subtree with root as large
		heapify(arr, len, large);
		}
}
void insert(int arr[], int len)
{
		// Index of last non-leaf node
		int lastnode = (len / 2) - 1;

		// Perform level order traversal in reverse from last non-leaf node to the root node and heapify each node
		for (int i = lastnode; i >= 0; i--)
		{
		maxheap(arr, len, i);
		}

}
void display(int arr[],int len){
	for(int i=0;i<len;i++){
		printf("%d",arr[i]);
	}
}
int main()
{		int len;
		printf("Enter the length of array:");
		scanf("%d",&len);
		int arr[len];
		for(int i=0;i<len;i++){
			scanf("%d",&arr[i]);
		}
		//int arr[] = {4, 18, 17, 10, 19, 20, 14, 8, 3, 12};
		//int len=sizeof(arr)/sizeof(arr[0]);
		display(arr, len);

		insert(arr, len);
		display(arr, len);
}

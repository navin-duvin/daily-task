#include <stdio.h>

int sum(int num) {
	if (num == 1)
		return num;
	return num + sum(num-1);
}

int main() {
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Sum of '%d' terms of natural number is %d", num, sum(num));
}

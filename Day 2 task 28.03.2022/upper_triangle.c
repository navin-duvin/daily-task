#include <stdio.h>

int triangular(int [][],int n){
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
			if (mat[i][j] != 0)
				return  0;
			else
				return 1;
}
int main()
{
	int n;
	printf("Enter the matrix size:");
	scanf("%d",&n);
	int flag = 0;
	int mat[n][n];
	int i, j;
	for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			scanf("%d",&mat[i][j]);
		}
	void (*trianglepoint)(int[][],int)=triangular;
	flag = triangular(mat,n);

	if (flag == 1)
		printf("Upper Triangular Matrix\n");
	else
		printf("Not an Upper Triangular Matrix\n");
return 0;
}


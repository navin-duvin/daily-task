#include <stdio.h>
int main() {
  int arr[10][10], transpose[10][10], row, column;
  printf("Enter rows and columns: ");
  scanf("%d %d", &row, &column);
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    printf("Enter element are%d%d: ", i + 1, j + 1);
    scanf("%d", &arr[i][j]);
  }
  printf("\nEntered matrix: \n");
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    printf("%d  ", arr[i][j]);
    if (j == column- 1)
    printf("\n");
  }
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    transpose[j][i] = arr[i][j];
  }
  
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < column; ++i)
  for (int j = 0; j < row; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == row - 1)
    printf("\n");
  }
  return 0;
}

#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;
    
   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
int i , j ;

    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

   
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    // Output the sum
    printf("The sum of the matrix elements is: %d\n", sum);

    return 0;
}


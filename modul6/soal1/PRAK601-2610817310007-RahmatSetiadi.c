#include <stdio.h>

int main(void)
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int num[rows * cols];
    for (int i = 0; i < rows * cols; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", num[i * cols + j]);
        }
        printf("\n");
    }
    return 0;
}

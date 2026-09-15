#include <stdio.h>
#include<conio.h>
int main()
{
    int i, j, k;
    int m1[10][10], m2[10][10], result[10][10];
    int r1, c1, r2, c2;

    printf("Enter the row of matrix 1\n");
    scanf("%d", &r1);

    printf("Enter the column of matrix 1\n");
    scanf("%d", &c1);

    printf("Enter the elements of matrix 1\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the row of matrix 2\n");
    scanf("%d", &r2);

    printf("Enter the column of matrix 2\n");
    scanf("%d", &c2);

   printf("Enter the elements of matrix 2\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible");
    }
    else
    {
        printf("Result of matrix multiplication\n");

        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                result[i][j] = 0;

                for(k = 0; k < c1; k++)
                {
                    result[i][j] = result[i][j] + m1[i][k] * m2[k][j];
                }

                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

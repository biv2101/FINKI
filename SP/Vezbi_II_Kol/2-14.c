//Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50).
//Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона ќе ги префрли под N-тата редица,
//односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.

#include <stdio.h>
#define MAX 50
int main()
{
    int n, end_mat[MAX*2][MAX], i, j;
    scanf("%d", &n);
    for (i = 0; i<n; i++)
    {
        for (j = 0; j<n*2;j++)
        {
            if(j<n)
                scanf("%d", &end_mat[i][j]);
            else
                scanf("%d", &end_mat[i+n][j-n]);

        }
    }
    for (i = 0; i<n*2; i++)
    {
        for (j = 0; j<n; j++)
        {
            printf("%d ", end_mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви), како и елементите на матрицата со димензии M x N (цели броеви).
//Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:
//
//Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
//Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
//Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
//Променетата матрица да се испечати на екран.

#include <stdio.h>
int main()
{
    int mat[100][100], x, m, n, i = 0, j = 0,alt = 0;
    scanf("%d%d%d", &x,&m,&n);
    for (i=0;i<m;i++)
    {
        int tempsum = 0;
        for (j=0;j<n; j++)
        {
            scanf("%d", &mat[i][j]);
            tempsum+=mat[i][j];
        }
        if (tempsum > x)
        {
            alt = 1;
        }
        else if (tempsum == x)
        {
            alt = 0;
        } else if (tempsum < x)
        {
            alt = -1;
        }
        for (j=0; j<n; j++)
        {
            mat[i][j] = alt;
        }

    }
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
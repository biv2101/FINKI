//Даден е правоаголник кој се наоѓа во првиот квадрант од координатниот систем и страните му се паралелни со оските.
//Правоаголникот се задава со координатите на долното лево и горното десно теме (темињата А и С) кои се цели броеви.
//Потоа, се внесуваат координатите на две точки.
//Вашата програма за секоја од двете точки на излез треба да отпечати DA, ако дадената точка лежи на страните на правоаголникот и NE ако е надвор од него или внатре во него.

#include <stdio.h>

int main()
{
    int x1,y1,x2,y2,x,y, i = 0;
    scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
    for (;i<2; i++)
    {
        scanf("%d%d", &x,&y);
        if ((x==x1 || x == x2)&&(y>=y1 && y<=y2))
        {
            printf("DA");
        }
        else if ((y==y1 || y == y2)&&(x>=x1 && x<=x2))
        {
            printf("DA");
        } else
        {
            printf("NE");
        }
        printf("\n");
    }
    return 0;
}
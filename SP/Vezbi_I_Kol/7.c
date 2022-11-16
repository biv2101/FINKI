/*
 * Со помош на знаците ‘@’,'%', и ‘.‘ се формира квадратна слика со „должина“ m (m>2)
 * која претставува квадрат од знаците '.', впишан во квадрат од знаците @ и %(види примери).
 * За внесено m да се испечати на екран соодветната слика. Внимавајте – не печатете нити еден дополнителен знак, како празно место,
 * непотребен знак за нов ред... Сликата завршува со знак за нов ред.
 * Забелешка: Бидејќи е дадено ограничување за m, во точно решение на задачата не треба да се користи низа/матрица.
 * */
#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    for (int i = 1; i<=m; i++)
    {
        printf("%%");
        for (int j = 2; j <= m-1; j++) {
            if (i == 1 || i == m)
                printf("@");
            else
                printf(".");
        }
        printf("%%\n");
    }
    return 0;
}

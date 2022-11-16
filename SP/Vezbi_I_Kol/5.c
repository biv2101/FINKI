/*
 * Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
 * Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“.
 * Ако не постои таков број, да се испечати NE.
*/
#include <stdio.h>

int main() {

    int n,m;
    scanf("%d%d", &m, &n);
    for (int i = m; i<=n; i++)
    {
        int iorg=i;
        while (iorg) {
            if (iorg % 10 % 2 != 0) {
                break;
            }
            iorg/=10;
        }
        if(iorg==0)
        {
            printf("%d", i);
            return  0;
        }

    }
    printf("NE");
    return 0;
}

/*
 * TEST SLUCAI (Input - Output)
 * 99 500 - 200
 * 10 19 - NE
 * 1230 25000 - 2000
 * 1 2 - 2
 * 1000 - 5000 - 2000
 * 99 199 - NE
 * */

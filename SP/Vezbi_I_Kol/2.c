/*
 * Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 * Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
 * Од тастатура се внесува природен број n ( n > 9).
 * Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
 * Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
 * */

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n>9) {
        n-=1;
        for (int i = n; i > 0; i--) {
            int icpy = i;
            int obr = 0, counter = 0;
            while (icpy) {
                obr += icpy % 10;
                icpy /= 10;
                if (icpy) obr*=10;
                counter++;
            }
            if (obr % counter == 0) {
                printf("%d", i);
                return 0;
            }
        }
    }
    printf("Brojot ne e validen");
    return 0;
}

/*
 * TEST SLUCAI (Input - Output)
 * 5 - Brojot ne e validen
 * 50 - 49
 * 100 - 89
 * 17 - 9
 * -5 - Brojot ne e validen
 * 990 - 987
 * 10 - 9
 * */

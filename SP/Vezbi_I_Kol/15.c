//Од тастатура се внесува колку студенти полагале колоквиум и потоа се внесуваат поените на сите кои полагале.
//Програмата треба да отпечати средна вредност на поените на сите студенти кои имале помалку од 50 поени, како и список на студентите со повеќе од 50 поени.
//Исто така програмата да отпечати средна вредност на поените на сите кои положиле со најмалку 50 поени
//и нивните освоени поени (редоследот на печатење во двата случаеви треба да биде ист како и редоследот на внесување).
//Максималниот број на студенти што може да се внесат е 1000.
//Влез:
//10 //Kolku studenti?
//20 10 50 60 70 90 40 20 70 90 //Poeni?
//Излез
//Sredna vrednost na padnati 22.50
//20 10 40 20
//Sredna vrednost na polozeni 71.67
//50 60 70 90 70 90

#define MAX 1000
#include <stdio.h>
int main()
{
    int poeni[MAX], n, avgpass = 0, avgfail = 0, i, passc = 0, failc = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &poeni[i]);
        if (poeni[i]<50)
        {
            failc++;
            avgfail+=poeni[i];
        } else
        {
            passc++;
            avgpass+=poeni[i];
        }
    }
    printf("Sredna vrednost na padnati %.2f\n", avgfail*1.0/failc);
    for (i=0; i<n; i++)
        if (poeni[i]<50)
            printf("%d ", poeni[i]);

    printf("\n");

    printf("Sredna vrednost na polozeni %.2f\n", avgpass*1.0/passc);
    for (i=0; i<n; i++)
        if (poeni[i]>=50)
            printf("%d ", poeni[i]);

    return 0;

}

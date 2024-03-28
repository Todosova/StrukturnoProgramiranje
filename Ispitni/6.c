/*Од стандарден влез се чита природен број N (N <= 100),
како и низа од позитивни цели броеви a[ ] со N елементи.
Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во
низата кој се појавува парен број пати во низата. Доколку нема таков елемент, функцијата враќа вредност 0.
Напишете програма што ќе ја повика функцијата par за внесената низа a[ ]
и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].*/

#include <stdio.h>
int par(int a[], int n)
{
    short posetenost[n], prv = 1;
    int min = 0, i, j;
    for(i = 0; i < n; i++)
        posetenost[i] = 0;

    for (i = 0; i < n; i++) {
        if (posetenost[i])
            continue;

        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                posetenost[j] = 1;
                count++;
            }
        }
        if(prv && count%2 == 0){
            min = a[i];
            prv = 0;
        }
        else if(count % 2 == 0 && a[i] < min)
            min = a[i];
    }
    return min;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int niza[n];
    for(i = 0; i < n; i++)
        scanf("%d", &niza[i]);
    if(!par(niza, n))
        printf("Nitu eden element ne se pojavuva paren broj pati!");
    else
        printf("Najmaliot element koj se pojavuva paren broj pati e %d", par(niza, n));
    return 0;
}

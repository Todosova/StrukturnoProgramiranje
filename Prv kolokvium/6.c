/*
Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z,
а потоа последователно се внесуваат парови цели броеви (a, b). Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0).
Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b, како и колкав процент од вкупниот број внесени парови (a, b)
даваат збир z (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).

Input
100
50 50
-50 -50
-99 199
32 98
0 0
Result
Vnesovte 2 parovi od broevi chij zbir e 100
Procentot na parovi so zbir 100 e 50.00%
*/

#include<stdio.h>
int main()
{
    int z,a,b,zbir=0,brojach,br;
    float procent;
    scanf("%d",&z);
    brojach=0;
    br=0;
    while(scanf("%d %d",&a,&b))
    {
        if(a==0 && b==0)
        {
            break;
        }
        if(a+b==z)
        {
            brojach++;
        }
        br++;
        procent=(float)brojach/br*100;
    }
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n",brojach,z);
    printf("Procentot na parovi so zbir %d e %.2f%%",z,procent);
}

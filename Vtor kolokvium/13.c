/*Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви), како и елементите на матрицата со димензии M x N (цели броеви).
Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:
Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
Променетата матрица да се испечати на екран.

*/
#include<stdio.h>
#define max 100
int main()
{
    int x,i,j,n,m,a[max][max],zbir=0,flag;
    scanf("%d",&x);
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        zbir=0;
        for(j=0;j<m;j++)
        {
            zbir+=a[i][j];
        }

            if(zbir>x)
            {
                flag=1;
            }
            else if(zbir<x)
            {
                flag=-1;
            }
            else
            {
                flag=0;
            }
            for(j=0;j<m;j++)
        {
            a[i][j]=flag;
        }


    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

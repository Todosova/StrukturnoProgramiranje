/*Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0.
Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.

*/
#include<stdio.h>
#define max 100
int main()
{
    int n,m,i,j,a[max][max],brojachredovi, brojachkoloni,brojachvkupno=0;
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
        brojachredovi=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                brojachredovi++;
                if(brojachredovi>2)
                {
                    brojachvkupno++;
                    break;
                }
            }
                else
                {
                    brojachredovi=0;
                }
        }
    }
    for(j=0;j<m;j++)
    {
        brojachkoloni=0;
        for(i=0;i<n;i++)
        {
            if(a[i][j]==1)
            {
                brojachkoloni++;
                if(brojachkoloni>2)
                {
                    brojachvkupno++;
                    break;
                }
            }
                else
                {
                    brojachkoloni=0;
                }

        }
    }
    printf("%d",brojachvkupno);
    return 0;
}


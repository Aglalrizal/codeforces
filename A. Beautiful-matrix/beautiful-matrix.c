#include<stdio.h>

int main(){
    int a[5][5], x, y, count=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j]==1)
            {
                x = i;
                y = j;
            }
        }
    }
    while (a[2][2]!=1)
    {
        if (x < 2)
        {
            a[x+1][y]=1;
            a[x][y]=0;
            x=x+1;
            count++;
        }
        if (x > 2)
        {
            a[x-1][y]=1;
            a[x][y]=0;
            x=x-1;
            count++;
        }        
        if (y < 2)
        {
            a[x][y+1]=1;
            a[x][y]=0;
            y=y+1;
            count++;
        }
        if (y > 2)
        {
            a[x][y-1]=1;
            a[x][y]=0;
            y -= 1;
            count++;
        }
    }
    printf("%d\n",count);
}
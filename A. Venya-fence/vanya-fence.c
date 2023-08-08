#include<stdio.h>
int main (){
    int n, h;
    int f = 0;
    scanf("%d %d",&n, &h);
    for (int  i = 0; i < n; i++)
    {
        int x;
        scanf("%d",&x);
        if (x > h)
        {
            f+=2;
        }else f += 1;
    }
    printf("%d\n",f);
}
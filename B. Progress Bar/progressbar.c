#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int a = x*y;
    int b = z*a/100;
    int c = b/y;
    int d = b%y;
    for(int i = 0; i < x; i++){
        if (i < c)
        {
            printf("%d ", y);
        }
        else if (i == c) printf("%d ",d);
        else printf("0 ");
    }
}
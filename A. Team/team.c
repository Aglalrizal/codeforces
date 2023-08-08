#include<stdio.h>
int main (){
    int n, x, count, f=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &x);
            if(x == 1){
                count++;
            }
        }
        if (count >= 2 ){
            f++;
        }
    }
    printf("%d\n", f);
}
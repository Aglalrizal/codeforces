#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    char string[n][110];
    for(int i =0 ; i < n;i++) scanf("%s", string[i]);
    for(int i = 0; i < n;i++){
        int m = strlen(string[i]);
        if(m<=10) printf("%s\n", string[i]);
        else{
            printf("%c%d%c\n", string[i][0], m-2, string[i][m-1]);
        }
    }
}
/*
    created by Aglalrizal
    on 21/07/2023
*/
#include<cstdio>
int main(){
    int n, a, d;
    char s[100000];
    scanf("%d",&n);
    scanf("%s",s);
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='A')
        {
            a++;
        }else {
            d++;
        }
    }
    if (a > d) printf("Anton\n");
    else if (a == d) printf("Friendship\n");
    else printf("Danik\n");
}
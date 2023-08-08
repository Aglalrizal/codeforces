#include <iostream>
#include<cstring>
using namespace std;
int main(){
    int a, b, c, d, f=0;
    char arr[100000]="";
    cin >> a >> b >> c >> d ;
    scanf("%s", arr) ;
    for (int i = 0 ; arr[i] != '\0'; i++){
        if (arr[i]=='1') f+=a; 
        else if (arr[i]=='2') f+=b;
        else if (arr[i]=='3') f+=c;
        else if (arr[i]=='4') f+=d;
    }
    cout << f ;
}
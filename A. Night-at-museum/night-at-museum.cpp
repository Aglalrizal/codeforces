#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char kata[101];
    int f = 0;
    int start = 0, index = 0, walk = 0;
    scanf("%s", kata);
    for(int i = 0; i < strlen(kata);i++){
        index = kata[i]-97;
        walk = abs(start - index);
        if (walk < 13)
        {
            f += walk;
        }else{
            f += 26 - walk;
        }
        start = index;
    }
    cout << f << endl;
}
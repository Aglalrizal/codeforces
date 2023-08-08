#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char word[55], move[55];
    cin >> word >> move;
    int i = 0;
    int pos = 0;
    while(i < strlen(move)){
        if (word[pos] == move[i]) pos++;
        i++;
    } 
    cout << pos+1 << endl;
    }
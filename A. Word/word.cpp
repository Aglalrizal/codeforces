#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char word[110];
    int upCs = 0, lowCs = 0;
    cin >> word;
    for(int i = 0; i < strlen(word); i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            upCs++;
        } else lowCs++;
    }
    if (upCs > lowCs)
    {
        for(int i = 0; i < strlen(word); i++){
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] += 'A' - 'a';
            }
        }
    }else{
        for(int i = 0; i < strlen(word); i++){
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] += 'a' - 'A';
            }
        }
    }
    cout << word << endl;
}
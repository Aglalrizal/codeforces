#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[110];
    cin >> str;
    for (int i = 2; i < strlen(str); i+= 2)
    {
        for (int j = i; j >= 0 ; j -= 2)
        {   
            if (str[i] < str[j]){
                char tmp = str[j];
                str[j] = str[i];
                str[i] = tmp;
                i = j;
            }
        }
    }
    cout << str << endl;
}
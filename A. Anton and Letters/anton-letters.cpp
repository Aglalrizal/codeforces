#include <iostream>

#include <cstring>

using namespace std;
int main() {
    char inp[1024];
    char ans[1024];
    bool ada = false;
    int count = 0;
    scanf("%[^\n]%*c", inp);
    for (int i = 0; i < strlen(inp); i++) {
        ada = false;
        if (inp[i] == ',' || inp[i] == ' '||inp[i] == '{' || inp[i] == '}' ) continue;
        else {
            for (int j = 0; j < strlen(ans); j++) {
                if (inp[i] == ans[j]){
                    ada = true;
                    break;
                }
            }
        }
        if (ada == false) {
            ans[count] = inp[i];
            count++;
        }
    }
    cout << count << endl;
}
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char username[110];
    char answer[110];
    int count = 0;
    bool flag = true;
    cin >> username;
    for (int i = 0; i < strlen(username); i++){
        flag = true;
        for (int j = 0; j <= strlen(answer); j++)
        {   
            if (username[i] == answer[j])
            {
                flag = false;
            }
        }
        if (flag)
        {
            answer[count] = username[i];
            count++;
        }
    }
    if (count % 2 != 0){
    cout << "IGNORE HIM!" << endl;
    }else{
        cout << "CHAT WITH HER!" << endl;
    }
}
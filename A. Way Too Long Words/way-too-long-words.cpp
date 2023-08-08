#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n;
    cin >> n;
    char word[n][110];
    for (int i = 0; i < n; i++) cin >> word[i];
    for (int i = 0; i < n; i++)
    {   
        if (strlen(word[i]) <= 10) cout << word[i]  << endl;
        else {
        int abb= strlen(word[i]);
        cout << word[i][0] << abb-2<< word[i][strlen(word[i])-1] << endl;
        }
    }
    
}
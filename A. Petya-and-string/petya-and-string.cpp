#include<iostream>
#include<cstring>

using namespace std;

int main (){
    string s[2];
    cin >> s[0] >> s[1];
    for (int i = 0; i < s[0].length(); i++)
    {
        if (s[0][i] >= 'A' && s[0][i] <= 'Z')
        {
            s[0][i] += 'a' - 'A';
        }
        if(s[1][i] >= 'A' && s[1][i] <= 'Z'){
            s[1][i] += 'a' - 'A';
        }
        if (s[0][i] > s[1][i]){
            cout << "1" ;
            break;
        }else if (s[0][i] == s[1][i]) {
            if (i+1 == s[0].length()) cout << "0\n";
            else continue;   
        }else if(s[0][i] < s[1][i]){
            cout << "-1" ;
        break;
        }
    }
}
#include <iostream>
using namespace std;
int main(){
    int n, count = 0;
    cin >> n;
    char temp[n];
    scanf("%s",temp);
    for(int i = 0; i < n;i++){
        if (temp[i] == temp[i+1]){
        {
            count++;
        }
    } 
}cout << count << endl;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    string answer;
    string inp;
    int n, sp=1;
    char last = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> inp;
        if (i == 0)
        {
            answer.insert(0, inp);
        }else if (last != inp[0]){
            answer += inp;
        }else{
            answer.insert(answer.end(), 1, ' ');
            answer += inp;
        }
        last = inp[1];
    }
    for (int i = 0; i < answer.length(); i++){
        if(answer[i] == ' '){
            sp++;
        }
    }
    printf("%d\n", sp);
}
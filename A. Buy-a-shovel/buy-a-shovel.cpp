#include <iostream>
using namespace std;
int main(){
    int p, c;
    cin >> p >> c;
    int i = 1;
    bool flag = true;
    do{
        if ((i * p) % 10 == 0){   
            flag = false;
            break ;
        }else if(((i * p) % 10) - c == 0){
            flag = false;
            break;
        }else i++;
    } while (flag);
    cout << i << endl;
}

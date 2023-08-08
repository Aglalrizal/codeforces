#include <iostream>
using namespace std;
int main(){
    int n;
    unsigned long long int f;
    cin >> n >> f ;
    int count = 0;
    for(int i=0; i<n; i++){
        char sym; 
        unsigned long long int tmp; 
        cin >> sym >> tmp;
        if(sym == '+'){
            f += tmp;
        }else{
            if(f >= tmp) f -= tmp;
            else count++;
        }
    }
    cout << f << " " << count << endl;
}
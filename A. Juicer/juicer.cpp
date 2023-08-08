#include <iostream>
using namespace std;
int main(){
    int n, b, d, empty = 0, f = 0;
    cin >> n >> b >> d;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b)continue;
        else {
            f += a[i];
            if(f > d){
                f = 0;
                empty++;
            }
        }
    }
    cout << empty << endl;
}
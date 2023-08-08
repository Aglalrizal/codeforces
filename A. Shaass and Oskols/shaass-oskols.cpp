#include <iostream>
using namespace std;
int main(){
    int n, m, x, y;
    cin >> n ;
    int a[n+1];
    for (int i = 1; i <= n;i++) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m;i++){
        cin >> x >> y;
        if(x != n) a[x+1] += a[x] - y ;
        if(x != 0) a[x-1] += y - 1;
        a[x] = 0;
    }
    for (int i = 1; i <= n; i++) cout << a[i] << endl;
}
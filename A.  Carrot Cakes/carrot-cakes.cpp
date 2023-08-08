#include <iostream>
using namespace std;
int main(){
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int x = (n + k -1)/k;
    int one = 0;
    int two = d;
    for (int i = 0; i < x; i++){
        if (one <= two) one += t;
        else two += t;
    }
    if (max(one, two) < x*t) cout << "Yes" << endl;
    else cout << "No" << endl;
}
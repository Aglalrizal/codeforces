#include <iostream>
using namespace std;
int main(){
    int x, y, max = 0;
    cin >> x >> y;
    if (x > y) max = x;
    else max = y;
    switch (max) {
        case 1:
        cout << "1/1" << endl;
        break;
        case 2:
        cout << "5/6" << endl;
        break;
        case 3:
        cout << "2/3" << endl;
        break;
        case 4:
        cout << "1/2" << endl;
        break;
        case 5:
        cout << "1/3" << endl;
        break;
        default:
        cout << "1/6" << endl;
    }
}
#include <iostream>
using namespace std;
int main(){
    int n, a=0, b=0, c=0;
    cin >> n;
    long arr[n];
    for(int i = 0 ; i < n ; i++){ 
    cin >> arr[i];
    if(arr[i]==1) a++;
    else if(arr[i]==2) b++;
    else if(arr[i]==3) c++;
    }
    int f = 0;
    if(a <= b && a <= c) f = a;
    else if(b <= c && b <= a) f = b;
    else if(c <= a && c <= b) f = c;
    cout << f << endl;
    for(int i = 0 ; i < f ; i++){
        int d = 1;
        for (int j = 0; j < n; j++)
        {   
            if (arr[j] == d)
            {
                cout << j + 1 << " ";
                arr[j] = 0;
                j = -1;
                d++;
            }
            if (d == 4) break;
        }
        cout << endl;
    }
}
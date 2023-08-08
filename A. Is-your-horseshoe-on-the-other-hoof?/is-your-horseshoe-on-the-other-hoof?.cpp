#include <iostream>
using namespace std;
int main(){
    int arr[4];
    int count = 0;
    for(int i=0; i < 4; i++){
        cin >> arr[i];
    }
    for (int i=0; i < 4; i++) {
        for (int j = i+1; j < 4; j++)
        {
            if(arr[i] == arr[j]) count++;
        }
        if (i == 0 && arr[0] != arr[3] && count == 2) break;
        if (count == 3) break;
        if (i >= 1 && count == 2) break;
    }
    cout << count << endl;
}
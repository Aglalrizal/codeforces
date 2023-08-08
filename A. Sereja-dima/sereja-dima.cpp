#include <iostream>
using namespace std;
int main(){
    int n, s=0, d=0;
    int head = 0, tail = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    head = 0;
    tail = n-1;
    for (int  i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[head] > arr[tail])
            {
                s += arr[head];
                head++;
            }else{
                s += arr[tail];
                tail--;
            }
        }else{
            if (arr[head] > arr[tail])
            {
                d += arr[head];
                head++;
            }else{
                d += arr[tail];
                tail--;
            }
        }
    }
    cout<< s << " "<< d << endl;
}
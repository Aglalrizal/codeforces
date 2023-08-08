#include <iostream>
using namespace std;
int main(){
    int n, tmp;
    int crimeCs =0;
    int police = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tmp;
        if (tmp < 0)
        {   
            if (police == 0 )
            {
                crimeCs++;
            }
            else{
                police--;
            }
        }else{
            police += tmp;
        }
    }
    cout << crimeCs << endl;
}
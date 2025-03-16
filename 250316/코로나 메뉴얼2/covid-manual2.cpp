#include <iostream>
using namespace std;

int main() {

    int cnt_arr[4] = {};
    char s;
    int t;

    for(int i = 0; i < 3; i++)
    {
        cin >> s >> t;

        if(s == 'Y')
        {
            if(t >= 37)
                cnt_arr[0]++;
            else
                cnt_arr[1]++;
        }
        else
        {
            if(t >= 37)
                cnt_arr[2]++;
            else   
                cnt_arr[3]++;
        }
    }

    for(int i = 0; i < 4; i++)
        cout << cnt_arr[i] << " ";
    
    if(cnt_arr[0] >= 2)
        cout << 'E';
    

    return 0;
}
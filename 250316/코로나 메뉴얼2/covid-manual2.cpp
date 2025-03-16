#include <iostream>
using namespace std;

int main() {

    int cnt_arr[4] = {};
    char s;
    int t;
    int type_num; 

    for(int i = 0; i < 3; i++)
    {
        cin >> s >> t;

        if(s == 'Y')
        {
            if(t >= 37)
                type_num = 0;
            else
                type_num = 1;
        }
        else if(s == 'N')
        {
            if(t >= 37)
                type_num = 2;
            else   
                type_num = 3;
        }

        cnt_arr[type_num]++;
    }

    for(int i = 0; i < 4; i++)
        cout << cnt_arr[i] << " ";
    
    if(cnt_arr[0] >= 2)
        cout << "E";
    

    return 0;
}
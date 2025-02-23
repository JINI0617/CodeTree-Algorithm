#include <iostream>
using namespace std;

int main() {
    int cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < 10; i++)
    {
        int k;
        cin >> k;

        if(k % 3 == 0)
            cnt1++;
        if(k % 5 == 0)
            cnt2++;
    }
    
    cout << cnt1 << " " << cnt2;

    return 0;
}
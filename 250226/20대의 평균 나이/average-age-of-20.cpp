#include<iostream>
using namespace std;

int main(){

    int n, sum = 0, cnt = 0;

    while(1)
    {
        cin >> n;

        sum += n;
        cnt++;

        if((n / 10) != 2)
            break;
    }

    cout << fixed;
    cout.precision(2)
    cout << (double)sum/cnt;
}
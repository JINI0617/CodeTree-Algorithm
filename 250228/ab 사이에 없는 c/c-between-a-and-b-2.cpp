#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    bool satisfied = false;

    for(int i = a; i <= b; i++)
    {
        if(i % c == 0)
            satisfied = true;
    }
    if(satisfied == true)
        cout << "NO";
    else
        cout << "YES";
}
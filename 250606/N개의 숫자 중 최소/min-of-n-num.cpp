#include <iostream>

using namespace std;


int main() {
    
    int N, min_val = 100, min_cnt = 0;
    cin >> N;
    int arr[N];

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++)
    {
        if(min_val > arr[i])
            min_val = arr[i];
    }


    for(int i = 0; i < N; i++)
    {
        if(arr[i] == min_val)
            min_cnt++;
    }

    cout << min_val << " " << min_cnt;



    return 0;
}

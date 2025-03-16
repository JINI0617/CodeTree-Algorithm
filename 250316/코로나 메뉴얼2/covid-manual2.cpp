#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    int cnt_arr[B] = {}; // 나머지는 B보다 작으므로 충분히 작은 배열 사용 가능
    int sum_val = 0;

    while (A >= 1) {  
        int remainder = A % B;  // 나머지 계산
        cnt_arr[remainder]++;   // 해당 나머지 카운트 증가
        A /= B;                 // 몫 갱신
    }

    for (int i = 0; i < 10; i++) {
        sum_val += cnt_arr[i] * cnt_arr[i]; // 각 나머지 등장 횟수의 제곱 합
    }

    cout << sum_val;
    return 0;
}

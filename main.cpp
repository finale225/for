#include <iostream>
using namespace std;

int main() {
    int n, x, e; // n은 수열의 수, x는 x보다 작은 수를 출력하기 위한 조건, e는 수열의 값을 입력받기 위한 변수
    cin >> n >> x; // n과 x를 입력받는다.
    if (n < 1 || n >10000 || x < 1 || x > 10000) return 0; // n과 x에 대한 조건에서 어긋나면 종료
    for (int i=0; i<n; i++) { // 수열의 수 만큼 반복하여 e에 입력한다.
        cin >> e; // 터미널에 입력하자마자 e에 저장되는 것이 아니라 버퍼에 입력된 후 e에 차례차례 입력된다.
        if (e < x) cout << e << ' '; // x보다 작은 수열의 원소 출력
    }

}
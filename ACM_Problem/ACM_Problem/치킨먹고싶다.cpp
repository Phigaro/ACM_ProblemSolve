#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int T, P, M, F, C;
	cin >> T;
	while (T > 0) {
		cin >> P >> M >> F >> C;
		int Ci = ((M / P));			// 치킨의 갯수
		int Coupon = Ci * C;		// 쿠폰의 갯수 (초기)
		// 쿠폰을 새로 업데이트해줌 (기존의 쿠폰으로 시키는 치킨에서 생기는 쿠폰 + 남은 쿠폰)
		for (Coupon; Coupon / F; Coupon = (Coupon/F)*C + Coupon%F)
			Ci += Coupon / F; // 해당 쿠폰 정보로 치킨 업데이트
		cout << (Ci-M / P - M / P*C / F) << endl;
		T--;
	}

	return 0;
}
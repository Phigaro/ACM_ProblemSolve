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
		int Ci = ((M / P));			// ġŲ�� ����
		int Coupon = Ci * C;		// ������ ���� (�ʱ�)
		// ������ ���� ������Ʈ���� (������ �������� ��Ű�� ġŲ���� ����� ���� + ���� ����)
		for (Coupon; Coupon / F; Coupon = (Coupon/F)*C + Coupon%F)
			Ci += Coupon / F; // �ش� ���� ������ ġŲ ������Ʈ
		cout << (Ci-M / P - M / P*C / F) << endl;
		T--;
	}

	return 0;
}
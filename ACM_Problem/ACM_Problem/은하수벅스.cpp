#define _CRT_SECURE_NO_WARNINGS
// ���� ����
#include <iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin); // ���۸� ���Ϸ� �ٲ���
	freopen("output.txt", "w", stdout);

	int k;
	unsigned long long s, n;
	cin >> k;
	while (k > 0) {
		cin >> s >> n;	// �Ϲ� ����
		unsigned long long max = (s + n) / 12;
		if (max >= (s / 5))
			max = (s / 5);
		cout << max << endl;
		k--;
	}

	return 0;
}

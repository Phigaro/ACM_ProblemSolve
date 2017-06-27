#define _CRT_SECURE_NO_WARNINGS
// 보안 무시
#include <iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin); // 버퍼를 파일로 바꿔줌
	freopen("output.txt", "w", stdout);

	int k;
	unsigned long long s, n;
	cin >> k;
	while (k > 0) {
		cin >> s >> n;	// 일반 음료
		unsigned long long max = (s + n) / 12;
		if (max >= (s / 5))
			max = (s / 5);
		cout << max << endl;
		k--;
	}

	return 0;
}

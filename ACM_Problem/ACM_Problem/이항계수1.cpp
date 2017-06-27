#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Combination(int n, int k);
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N; cin >> N;
	int K; cin >> K;

	cout << Combination(N, K);

	return 0;
}

int Combination(int n, int k) {
	if (n == k || k == 0) return 1;
	if (n == 1) return 1;
	if ((n - 1) == k || k == 1) return n;
	return Combination(n - 1, k - 1) + Combination(n - 1, k);
}
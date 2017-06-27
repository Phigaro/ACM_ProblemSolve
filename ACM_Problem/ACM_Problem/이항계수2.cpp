#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

unsigned long long m[1001][1001];
unsigned long long Combination(int n, int k);


int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	memset(m, -1, 1001*1001 * sizeof(unsigned long long));

	int N; cin >> N;
	int K; cin >> K;

	cout << Combination(N, K);

	return 0;
}

unsigned long long Combination(int n, int k) {
	if (k == 0) return 1;
	if (n == 0) return 0;
	if (m[n][k] != -1)
		return m[n][k];
	else
		return m[n][k] = (Combination(n - 1, k - 1) + Combination(n - 1, k)) % 10007;
}
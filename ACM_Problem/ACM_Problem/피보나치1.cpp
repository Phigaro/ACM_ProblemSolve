#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#define INF 9999
#define ArraySize 46

int PV(int n);
int fib(int n);
int m[100];

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N; cin >> N;

	// 초기화 한 값이 그 값중에 존재하면 안됨.
	memset(m, -1, 100 * sizeof(int));

	//cout << PV(N);
	cout << fib(N);

	//int Array[ArraySize];

	//Array[0] = 0; Array[1] = 1;

	//for (int i = 2; i < ArraySize; i++) {
	//	Array[i] = Array[i - 1] + Array[i - 2];
	//	if (i == N) break;
	//}

	//cout << Array[N];

	return 0;
}

// 시간 초과
int PV(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return PV(n - 1) + PV(n - 2);
}

int fib(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else if (m[n] >= 0) return m[n];
	else return m[n] = fib(n - 2) + fib(n - 1);
}
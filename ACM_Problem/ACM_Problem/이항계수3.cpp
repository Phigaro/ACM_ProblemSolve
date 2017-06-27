#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

#define NSize 1000
#define KSize 1000

unsigned long long m[NSize][KSize];

int main(void) {
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);

	int N; cin >> N;
	int K; cin >> K;

	for (int i = 0; i <=N; i++) {

		m[i][i] = 1;
		m[i][0] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j<=  i-1; j++) {
			m[i][j] = m[i - 1][j-1] + m[i - 1][j];
 		}
	}

	cout << m[5][2];


	return 0;
}

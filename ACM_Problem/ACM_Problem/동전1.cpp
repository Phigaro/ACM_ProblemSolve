#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

int max(int a, int b);

int Arry[10001];
int C_Arry[101];
int N, K;
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
		cin >> C_Arry[i];
	Arry[0] = 1;
	for (int i = 1; i <= N; i++) {
		for (int j = C_Arry[i]; j <= K; j++) {
			Arry[j] = Arry[j] + Arry[j - C_Arry[i]];
		}
	}

	cout <<  Arry[K];

	return 0;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}

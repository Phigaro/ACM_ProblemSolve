#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

int max(int a, int b);
int Arry[501];

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N; cin >> N;
	int Result = N / 5 +N / 25 +N / 125;

	cout << Result;



	return 0;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}

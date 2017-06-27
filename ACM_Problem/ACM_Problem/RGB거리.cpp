#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

int min(int a, int b);
int min(int a, int b, int c);

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N; cin >> N;
	int RGB[3][1001];
	int R, G, B;
	for (int i = 0; i < N; i++) {
		cin >> R >> G >> B;
		RGB[0][i] = R;
		RGB[1][i] = G;
		RGB[2][i] = B;
	}

	int Array[3][1000];
	Array[0][0] = RGB[0][0];
	Array[1][0] = RGB[1][0];
	Array[2][0] = RGB[2][0];
	for (int i = 1; i < N; i++) {
		Array[0][i] = min(Array[1][i - 1], Array[2][i - 1]) + RGB[0][i];
		Array[1][i] = min(Array[0][i - 1], Array[2][i - 1]) + RGB[1][i];
		Array[2][i] = min(Array[0][i - 1], Array[1][i - 1]) + RGB[2][i];
	}
	
	cout << min(min(Array[0][N-1], Array[1][N-1]),Array[2][N-1]);

	return 0;
}

int min(int a, int b) {
	if (a < b)
		return a;
	return b;
}

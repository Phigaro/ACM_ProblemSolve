#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>  
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N, M, *E, *D, **EnjoyTable, maxEnjoy;
	cin >> N >> M;
	E = new int[N];
	D = new int[M];
	for (int i = 0; i < N; i++)
		cin >> *(E + i);
	for (int j = 0; j < M; j++)
		cin >> *(D + j);

	EnjoyTable = new int*[N];
	for (int i = 0; i < N; i++) {
		EnjoyTable[i] = new int[3];
	}

	EnjoyTable[0][0] = 0;
	EnjoyTable[0][1] = *E;
	EnjoyTable[0][2] = 0;
	maxEnjoy = max(max(EnjoyTable[0][0], EnjoyTable[0][1]), EnjoyTable[0][2]);

	for (int i = 1; i < N; i++) {
		EnjoyTable[i][0] = max(max(EnjoyTable[i-1][0], EnjoyTable[i-1][1]), EnjoyTable[i-1][2]);
		EnjoyTable[i][1] = EnjoyTable[i - 1][0] + E[i];
		EnjoyTable[i][2] = EnjoyTable[i - 1][1] + E[i];
		maxEnjoy = max(max(EnjoyTable[i][0], EnjoyTable[i][1]), EnjoyTable[i][2]);
	}

	cout << maxEnjoy;

	return 0;
}

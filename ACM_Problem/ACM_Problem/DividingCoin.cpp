#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>  
#include <functional>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N, M, *Coin, A = 0, B = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		A = 0; B = 0;
		cin >> M;
		Coin = new int[M];
		int a = 0;
		for (int j = 0; j < M; j++) {
			cin >> Coin[j];
			a = Coin[j] + a;
		}
		sort(Coin, Coin + M, greater<int>());
		for (int k = 0; k < M; k++) {
			cout << Coin[k] << endl;
		}

		for (int k = 0; k < M; k++) {
			if (A < B)
				A += Coin[k];
			else
				B += Coin[k];
		}
		if (A >= B)
			cout << A - B << endl;
		else
			cout << B - A << endl;
	}

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>  
#include <functional>
#include <vector>
using namespace std;

#define INF 9999

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N;
	int Answer = INF;
	cin >> N;

	for (int i = 0; i <= 1000; i++) {
		for (int j = 0; j <= 1666; j++) {
			if ((5 * i + 3 * j) == N) {
				if ((i + j) < Answer) {
					Answer = i + j;
				}
			}
		}
	}

	if (Answer == INF)
		Answer = -1;

	cout << Answer;

	return 0;
}

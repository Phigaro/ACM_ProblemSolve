#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <iostream>
using namespace std;

int max(int a, int b);
int min(int a, int b);

int getdp(int n) {
	if (n == 0) {
		return 0;
	}



	return getdp(n / 2);
}

int solution(int n)
{
	int answer;
	int my_ans = n;
	int cnt = 0;
	int  a = 1;
	int  b = 3;



	while (1) {
		my_ans = my_ans / 2;
		if (my_ans == 0)
			break;
		cnt++;
	}
	int acnt = cnt;
	while (acnt != 0) {
		a = 2 * a;
		acnt--;
	}
	int bcnt = cnt;
	while (bcnt != 2) {
		b = 2 * b;
		bcnt--;
	}
	my_ans = n;
	my_ans = my_ans - a;

	int arry[2][20000];
	arry[0][0] = 0;
	arry[1][0] = 0;
	for (int i = 1; i <= my_ans; i++) {
		arry[0][i] = min(arry[0][i / 2], arry[0][i/2]);
		arry[1][i] = min(arry[0][i - 1], arry[1][i-1]) + 1;
		if (i % 2)
			arry[0][i]++;
	}
	
	answer = min(arry[0][my_ans], arry[1][my_ans]);
	answer++;
	cout << answer;

	return answer;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	solution(100000);
	return 0;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}

int min(int a, int b) {
	return (a < b) ? a : b;
}
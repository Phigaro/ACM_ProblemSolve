//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int max(int a, int b);
//
//int Arry[3][501];
//int main(void) {
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//
//	int Result = -1;
//	int N; cin >> N;
//	int MAX = 0;
//	for (int Cnt = 1; Cnt <= N; Cnt++) {
//		for (int j = 1; j <= Cnt; j++) {
//			cin >> Arry[1][j];
//			Arry[1][j] = max(Arry[0][j], Arry[0][j - 1]) + Arry[1][j];
//			MAX = MAX > Arry[1][j] ? MAX : Arry[1][j];
//			// i가 2 가 될때, 올려줌
//		}
//		for (int j = 1; j <= Cnt; j++) {
//			Arry[0][j] = Arry[1][j];
//		}
//	}
//
//	cout << MAX;
//
//	return 0;
//}
//
//int max(int a, int b) {
//	return (a > b) ? a : b;
//}

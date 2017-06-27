#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <functional>
#include <vector>
using namespace std;

int getMin(int a, int b, int c, int* flag);

int Main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string e11 = "skienna skena skina";
	string e12 = "skiena";
	
	int WR = 99, WI = 1, WD = 1, R, I, D, Min, flag, CurX = 0, CurY = 0;
	bool found = false;
	bool semifound = false;
	vector<string> track;
	int **M = 0;;

	M = new int*[e12.size() + 1];
	for (int i = 0; i <= e12.size(); i++)
		M[i] = new int[e11.size() + 1];

	for (int i = 0; i <= e12.size(); i++) {
		for (int j = 0; j <= e11.size(); j++) {
			M[i][j] = 0;
			if (i == 0)
				M[i][j] = 0;// j*WI;
		}
		M[i][0] = i*WD;
	}

	for (int i = 1; i <= e12.size(); i++) {
		for (int j = 1; j <= e11.size(); j++) {
			if (e11[j - 1] == e12[i - 1]) {
				M[i][j] = M[i - 1][j - 1];
			}
			else {
				R = M[i - 1][j - 1] + WR;	// ReplaceMent
				I = M[i][j - 1] + WI; 		// insert
				D = M[i - 1][j] + WD;		// delete
				Min = getMin(R, I, D, &flag);
				M[i][j] = Min;
			}
		}
	}

	CurX = e11.size();
	CurY = e12.size();
	//while (!found) {
	//	semifound = false;
	//	R = M[CurX - 1][CurY - 1] + WR;	// ReplaceMent
	//	I = M[CurX][CurY - 1] + WD; 		// insert
	//	D = M[CurX - 1][CurY] + WI;		// delete

	//	if (M[CurX][CurY] == M[CurX - 1][CurY - 1]) {
	//		CurX = CurX - 1;
	//		CurY = CurY - 1;
	//		track.push_back("N");
	//		semifound = true;
	//	}
	//	if (M[CurX][CurY] == I && !semifound) {
	//		CurX = CurX;
	//		CurY = CurY - 1;
	//		track.push_back("I");
	//		semifound = true;
	//	}
	//	if (M[CurX][CurY] == D && !semifound) {
	//		CurX = CurX - 1;
	//		CurY = CurY;
	//		track.push_back("D");
	//		semifound = true;
	//	}
	//	if (M[CurX][CurY] == R && !semifound) {
	//		CurX = CurX - 1;
	//		CurY = CurY - 1;
	//		track.push_back("R");
	//		semifound = true;
	//	}
	//	if (CurX <= 0 && CurY <= 0)
	//		found = true;
	//}

	//for (int i = 0; i < track.size(); i++) {
	//	cout << track[i] << " ";
	//}cout << endl;

	for (int i = 0; i <= e12.size(); i++) {
		for (int j = 0; j <= e11.size(); j++) {
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}



	return 0;
}

int getMin(int a, int b, int c, int* flag) {
	if (a < b)
		if (a < c) {
			*flag = 1;
			return a;
		}
	if (b < a)
		if (b < c) {
			*flag = 2;
			return b;
		}
	*flag = 3;
	return c;
}
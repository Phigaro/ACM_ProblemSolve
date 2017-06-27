#define _CRT_SECURE_NO_WARNINGS
// 보안 무시
#include <iostream>
using namespace std;

struct edge {
	int index;
	int Avertex, Bvertex;
};

struct inputVertex {
	int index;
	int numValue;
	int* Value;
};

int main(void) {
	freopen("input.txt", "r", stdin); // 버퍼를 파일로 바꿔줌
	freopen("output.txt", "w", stdout);

	int T, N, M, K, S;
	edge* _edge;
	

	cin >> T >> N >> M >> K;

	while (T) {
		_edge = new edge[M];
		for (int i = 0; i < M; i++) {
			(_edge + i)->index = i;
			cin >> (_edge + i)->Avertex;
			cin >> (_edge + i)->Bvertex;
		}

		cin >> S;
		inputVertex* _inputVertex = new inputVertex[S];
		for (int i = 0; i < S; i++) {
			cin >> (_inputVertex + i)->index;
			cin >> (_inputVertex + i)->numValue;
			(_inputVertex + i)->Value = new int[(_inputVertex + i)->numValue];
			for (int j = 0; j < (_inputVertex + i)->numValue; j++) {
				cin >> *((_inputVertex + i)->Value + j);
			}
		}



		int result;

		T--;
	}

	return 0;
}

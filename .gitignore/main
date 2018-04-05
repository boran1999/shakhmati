#include <iostream>
#include <locale.h>
#include <fstream>
#include"file.h"
using namespace std;

bool isThreaten(int qx1, int qy1, int qx2, int qy2);

int readVert(ifstream& in);

int readHoris(ifstream& in);

int main() {
	setlocale(LC_ALL, "Russian");
	int qx[8], qy[8];
	if (!inf("in.txt", qx, qy)){
		cout << "Не удалось прочитать координаты" << endl;
		return -1;
	}
	ofstream out("out.txt"); 
	if (!out.is_open()) {
		cout << "Не удалось создать выходной файл" << endl;
		return -2;
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 8; j++) {
			if (isThreaten(qx[i], qy[i], qx[j], qy[j]))
				writePair ("out.txt", qx[i], qy[i], qx[j], qy[j]);
		}
	}
	system("pause");
	return 0;
}

bool isThreaten(int qx1, int qy1, int qx2, int qy2) {
	return (qx1 == qx2) || (qy1 == qy2) || (qx1 - qx2 == qy1 - qy2) || (qx2 - qx1 == qy1 - qy2);
}
int readVert(ifstream& in) {
	char ch;
	in >> ch;
	if (ch<'a' || ch>'h')
		return 0;
	return ch - 'a' + 1;
}

int readHoris(ifstream& in) {
	char ch;
	in >> ch;
	if (ch<'1' || ch>'8')
		return 0;
	return ch - '1' + 1;
}

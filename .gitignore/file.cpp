#include <fstream>
#include"file.h"
using namespace std;

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

bool inf(const char* fileName, int* qx, int* qy) {
	ifstream in(fileName);
	if (!in.is_open()) {
		return false;
	}
	for (int i = 0; i < 8; i++) {
		qx[i] = readVert(in);
		qy[i] = readHoris(in);
		if (in.fail() || qx[i] == 0 || qy[i] == 0)
			return false;
	}
	return true;
}

void writePair(const char* fileName, int qx1, int qy1, int qx2, int qy2) {
	ofstream out(fileName);
	char qv1 = (qx1 - 1) + 'a';
	char qv2 = (qx2 - 1) + 'a';
	out << qv1 << qy1 << '-' << qv2 << qy2 << endl;
}

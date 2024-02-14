#include <iostream>

using namespace std;

int main() {
	int iNumber;
	float fNumber;
	double dNumber;
	bool bNumber;
	string s;

	cout << sizeof(iNumber) << endl;
	cout << sizeof(fNumber) << endl;
	cout << sizeof(dNumber) << endl;
	cout << sizeof(bNumber) << endl;
	cout << sizeof(s) << endl;

	int* piNumber;
	float* pfNumber;
	double* pdNumber;
	bool* pbNumber;
	string* ps;

	cout << "Adress of pointers: " << endl;
	cout << sizeof(piNumber) << endl;
	cout << sizeof(pfNumber) << endl;
	cout << sizeof(pdNumber) << endl;
	cout << sizeof(pbNumber) << endl;
	cout << sizeof(ps) << endl;

	return 0;
}
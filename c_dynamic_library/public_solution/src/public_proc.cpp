#include <iostream>
#include <stdio.h> 
#include <windows.h> 
#include <public_proc.h>
using namespace std;

extern "C" _declspec(dllimport) double fdouble;

int public_proc(void) {
	double exp_fdouble = 0.114514;
	fdouble = 0.114514;
	if (fabs(fdouble - exp_fdouble) < 0.000001) {
		cout << " 6. This is a variable defined in the dynamic library!" << endl;
	}
	
	return 0;
}

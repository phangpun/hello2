#include <iostream>
#include <Windows.h>
#include "Hello.h"
using namespace std;

int main()
{
	Hello *a = new Hello;
	delete a;

	Sleep(2 * 1000);
	return 0;
}
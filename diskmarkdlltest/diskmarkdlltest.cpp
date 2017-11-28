// diskmarkdlltest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "DiskMarkFuncs.h"
int main()
{
	diskmark::initial();


	diskmark::startdisktest('C', 0, 0, 1);


	diskmark::endtest();


	return 0;
}

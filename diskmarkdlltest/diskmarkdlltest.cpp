// diskmarkdlltest.cpp : �������̨Ӧ�ó������ڵ㡣
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

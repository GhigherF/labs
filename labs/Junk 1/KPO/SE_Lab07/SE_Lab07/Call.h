#pragma once

namespace Call
{
int _cdecl cdcl(int a, int b, int c)
{
	return a + b + c;
}
int _stdcall cstd(int &a, int b, int c)
{
	return a * b * c;
}

int _fastcall cfst(int a, int b, int c,int d)
{
	return a + b +c+d;
}

}

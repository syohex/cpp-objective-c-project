#include <iostream>
#ifdef __APPLE__
#include <mac/func.h>
#else
#include <linux/func.h>
#endif

int main(void)
{
	hello_world("objective-c - c++ linking test");
	return 0;
}

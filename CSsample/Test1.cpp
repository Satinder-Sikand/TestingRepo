#include <cstdio>
#include <string.h>
#include <iostream>

#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1

int main() {
	/*char str1 [10];
	char str2 [5];
	fgets(str1, 10, stdin);*/
	char str1[] = "This code is copying a string.";
	char str2[15];
	strcpy(str2, str1);
	printf("%s\n%s", str1, str2);
	return 0;
}
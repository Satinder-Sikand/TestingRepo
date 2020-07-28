#include <cstdio>
#include <string.h>
#include <iostream>

#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 1

int *main() {
	char str1[] = "This.....";
	char *str2 = (char*)malloc(10);

	strncpy(str2, str1, -1);
	strcpy(str2, str1);

	//printf("%s\n%s", str1, str2);

	char *s1;
	const char s5[1000] = "bye";
	strncat(s1, s5, -1); // r1 is 0, s1 holds "goodbye\0"
	//printf("s1 = %s, r1 = %d\n", s1, r1);
	//char s2[6] = "hello";
	//int r2 = strncat_s(s2, 6, "", 1); // r2 is 0, s2 holds "hello\0"
	//printf("s2 = %s, r2 = %d\n", s2, r2);
	//char *s3 = (char*)malloc(10);
	////int r3 = strncat_s(s3, 7, "Xb", -1); // r3 is non-zero, s3 holds "\0"
	//strncat_s(s3, "Xb", -1);
	//printf("s3 = %s, r3 = \n", s3);
	//// the strncat_s truncation idiom:
	//char s4[7] = "abc";
	//int r4 = strncat_s(s4, 7, "defghijklmn", 3); // r is 0, s4 holds "abcdef\0"
	//printf("s4 = %s, r4 = %d\n", s4, r4);

	return 0;
}
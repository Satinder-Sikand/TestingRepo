#include <cstdio>
#include <string.h>
#include <iostream>
#include <wchar.h>
#include <stdio.h>


#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
#undef _CRT_NON_CONFORMING_SWPRINTFS
#define _CRT_SECURE_NO_DEPRECATE
//#define _CRT_NONSTDC_NO_DEPRECATE
//#define _CRT_NON_CONFORMING_SWPRINTFS
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 1
//#define _CRT_NON_CONFORMING_SWPRINTFS 1



struct product { char string1[5]="Hell";  	char* string2 = (char*)malloc(7);};
//Call Functions
void useStruct();
void InvalidParameterHandleExample();
void call_strcpy_S();
void call_wcscpy_S();
void call_strn_S();
void ppath();

int main() {
	
	//useStruct();
	//ppath();
	//call_strcpy_S();
	//call_wcscpy_S();
	//call_strn_S();
	/*unsigned int n = 5;
	unsigned *len = &n;
	*len = 6;
	printf("\n%d\n", 5+*len);*/
	//call_strcpy_S();
	//const wchar_t* str1 = L"ThisIsAString.";
	//wchar_t str2[6] = { 0 };
	char str1[15] = "ThisIsAString.";
	char str2[14] = { 0 };
	//swprintf(str2, L"%s", str1);
	sprintf(str2, "%s", str1);
	//_strupr_s(str2);
	//wcscpy(str2, str1);
	std::cout << ("String = ") << str2 << std::endl;
	//printf("%s", str2);
	return 0;
}

void call_strcpy_S() {
	const int num = 5;
	char* str3 = (char*)malloc(6);
	const char* str1 = "ThisIsAString.";
	char str2[6] = "";// = new char[6];
	//char* str3 = str2;
	strcpy(str2, str1);
	strncpy(str2, str1, -1);
	strcpy(str3, str1);
	//trncpy(str3, str1, -1);
	//_itoa(10000, str2, 10);
	//_itoa(10000, str3, 10);

	//_tcsnlen(str3, 5);
	
	//std::wcout << L"String = " << str2 << std::endl;
	printf("%s\n%s\n", str1, str2);
}

void call_wcscpy_S() { //code taken from https://en.cppreference.com/w/c/string/wide/wcscpy
	wchar_t string[8];// = new wchar_t[7];
	wchar_t* string2 = (wchar_t*)malloc(8);
	//CString string = CString(_T("H"));
	// using template versions of wcscpy_s and wcscat_s:
	wcscpy(string, L"Hello678");
	std::wcout << L"String = " << string << std::endl;

	wcscat(string, L"wcscpy_s ");
	wcscat(string2, L"and ");
	// of course we can supply the size explicitly if we want to:
	wcscat(string, L"wcscat_s!");
	//_tcsncat(string, _T("wcscat_sIsHERE!"), -1);
	//_tcsncat(string2, _T("wcscat_sIsHERE!"), -1);



}

void ppath() {
/*char path_buffer[_MAX_PATH], drive[_MAX_DRIVE], dir[_MAX_DIR], fname[_MAX_FNAME], ext[1];
	TCHAR name[7];
	errno_t err;

	_makepath(path_buffer, "c", "\\sample\\crt\\",	"crt_makepath_s", "c");
	printf("Path extracted with _makepath: %s\n", path_buffer);
	*/
}

void call_strn_S() {
	wchar_t dst[5]=L"H";
	wchar_t* dst2 = (wchar_t*)malloc(5);
	wcsncpy(dst, L"a long string", -1);
	wcsncpy(dst2, L"a long string", -1);
	wcsncat(dst, L"a long string", -1);
	wcscat(dst, L"a long string");
	//strcat_s(dst, sizeof dst, "elloMyFriend");

	/*strncat_s(dst, sizeof dst, "elloMyFriend", 12);
	std::wcout << "String = " << dst << std::endl;*/

	char s1[100] = "good";
	char s5[1000] = "bye";
	char* s10 = (char*)malloc(100);
	strncat(s10, s5, -1);
	strncat(s1, s5, -1); // r1 is 0, s1 holds "goodbye\0"
	printf("s1 = %s,\n", s1);
	char s2[6] = "hello";
	int r2 = 0; 
	strncat(s2, "", 1); // r2 is 0, s2 holds "hello\0"
	strncat(s10, "", 1);
	printf("s2 = %s, r2 = %d\n", s2, r2);
	char s3[7] = "hello";
	//int r3 = strncat_s(s3, 7, "Xb", -1); // r3 is non-zero, s3 holds "\0"
	//strncat_s(s3, "Xb", -1);
	printf("s3 = %s, r3 = \n", s3);
	// the strncat_s truncation idiom:
	char s4[7] = "abc";
	strncat(s4, "defghijklmn", -1); // r is 0, s4 holds "abcdef\0"
	strncat(s10, "defghijklmn", -1);

	printf("s4 = %s\n", s4);

}

void useStruct() {
	product test1;
	 //char* str3 = (char*)malloc(7);;
	strncpy(test1.string1,"ThisIsAGoodFunction", -1);
	printf("\nTest String is: %s", test1.string1);
	//strncpy(test1.string2, "ThisIsAGoodFunction", -1);
	//printf("\nTest String is: %s", test1.string2);
	struct product* test2 =  (struct product*)malloc(30);
	strncpy(test2->string1, "ThisIsAGoodFunction", -1);
	printf("\nTest String is: %s", test2->string1);
	strncpy(test2->string2, "ThisIsAGoodFunction", -1);
}

/*void InvalidParameterHandleExample(
	const wchar_t* expression,
	const wchar_t* function,
	const wchar_t* file,
	unsigned int line,
	uintptr_t pReserved)
{
	// handle here
	printf("\n%s\n%s\n%s", function, file, line);
}*/

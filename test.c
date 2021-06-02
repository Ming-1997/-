#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
#include<stdlib.h>
#include<assert.h>
/////////////////////////////////////////////////////////  复制字符串到目标字符串  ////////////////////////////////////////////////
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL); //断言 
//	assert(src != NULL); //断言
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	//strcpy
//	//字符串拷贝
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//////////////////////////////////////////////////////////  计算字符串长度  ////////////////////////////////////////////////
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//int my_strlen(const char* p)
//{
//	assert(p != NULL); //断言，保证指针的有效性
//	int count = 0;;
//	while (*p!='\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

int main()
{
	const int a = 10;
	const int* p = &a;
	// a = 20; //错误
	// *p = 20; //错误
	int* p1 = p;
	*p1 = 20;
	printf("%d\n", a);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

//int main()
//{
//	unsigned short A = 10;
//	printf("~A = %u\n", ~A);
//	char c = 128;
//	printf("c=%d\n", c);
//	return 0;
//}

///////////////////////////////////////////////////////  strlen函数实现  /////////////////////////////////////////
//递归的方式（不创建临时变量）
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (!*str)
//		return 0;
//	else
//		return (my_strlen(str + 1) + 1);
//}
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", my_strlen(arr));
//}

///////////////////////////////////////////////////////  strcpy函数实现  /////////////////////////////////
//void my_strcpy(char*dest, char*src)
//{
//	//assert(dest != NULL);
//	//assert(src != NULL);
//	int len2 = strlen(src);
//	int i = 0;
//	for (i = 0; i <= len2; i++)
//	{
//		*(dest + i) = *(src + i);
//	}
//}
//改进：
//char* my_strcpy(char*dest,  const char*src)
//{
//	//assert(dest != NULL);
//	//assert(src != NULL);
//	char*ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "******************";
//	char arr2[] = "hello world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
/////////////////////////////////////////////////////  strcat函数实现  ///////////////////////////////////
//char* my_strcat(char*dest,const char*src)
//{
//	assert(dest != NULL);
//	assert(src);
//	char*ret = dest;
//	//1.找目的字符串'\0'的位置
//	while (*dest!='\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目标空间起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello ";
//	char arr2[] = "world!";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
///////////////////////////////////////////////////  strcmp函数实现  ///////////////////////////////////////////////
//int my_strcmp(const char*str1, const char*str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "abcde";
//	//int ret = strcmp(p1, p2);
//	//printf("%d\n", ret);
//	printf("%d", my_strcmp(p1, p2));
//	return 0;
//}

//////////////////////////////////////////////////////////  strncpy函数实现  /////////////////////////////////////////////
//char* my_strncpy(char*dest, const char*src,int count)
//{
//	assert(dest&&src);
//	char*start = dest;
//	while (count && (*dest++ = *src++)) // copy string
//	{
//		count--;
//	}
//	if (count)                          // pad out with zeroes
//		while (--count)
//			*dest++ = '\0';
//	return start;
//}
//int main()
//{
//	char arr1[] = "****************";
//	char arr2[] = "hello world";
//	//strncpy(arr1, arr2,11);
//	my_strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcde";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//////////////////////////////////////////////////////////  strncat函数实现  /////////////////////////////////////////////
//char* my_strncat(char*dest, const char*src, int connt)
//{
//	assert(dest&&src);
//
//}
//int main()
//{
//	char arr1[30] = "hello ";
//	char arr2[] = "world";
//	//strncat(arr1, arr2, 3);
//	my_strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//////////////////////////////////////////////////////////  strstr函数  ////////////////////////////////////////////////
//char* my_strstr(const char* dest, const char* src)
//{
//	assert(dest && src);
//	char* str1 = NULL;
//	char* str2 = NULL;
//	char* cur = (char*)dest;
//	if (!*src)
//		return (char*)dest;
//	while (*cur)
//	{
//		str1 = cur;
//		str2 = (char*)src;
//		while ((*str1 == *str2) && *str1 && *str2)
//		{
//			str1++;
//			str2++;
//		}
//		if (!*str2)
//			return cur;
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char *p1 = "abc";
//	const char *p2 = "abcdeff";
//	char*ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("目标字符串中，子串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

////////////////////////////////////////////////////////  strtok函数  ////////////////////////////////////////////////

//int main()
//{
//	char arr1[] = "1836082265@qq.com";
//	char arr2[] = "Ming.Wang@quantacn.com";
//	char* p = "@.";
//	//char buf[1024] = { 0 };
//	//strcpy(buf, arr2);
//
//	char* ret = NULL;
//	for (ret = strtok(arr1, p); ret != NULL; ret = strtok(NULL, p))
//		printf("%s\n", ret);
//	return 0;
//}

///////////////////////////////////////////////////  memcpy函数  ///////////////////////////////////////////////////////
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//
//	char* start = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return start;
//}
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[30] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	struct Stu arr3[] = { {"张三",20},{"李四",18} };
//	struct Stu arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//声明一个结构体类型
//struct tag
//{
//	member - list;
//}variable - list;
//声明一个学生类型，通过学生类型来创建学生变量（对象）
//描述学生：属性-名字-性别-电话-年龄

//struct Stu
//{
//	char name[20];
//	char sex[10];
//	char tal[12];
//	int age;
//}s4,s5,s6;
//
//struct Stu s3;
//
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

////练习1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
////练习2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
////练习3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
////练习4-结构体嵌套问题
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//计算结构体中，某变量相对于首地址的偏移
#include<stddef.h>
//
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof(); - 求偏移量
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//位段
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	return 0;
}
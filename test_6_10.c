#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>


///////////////////////////////////////////////////////  strcpy����ʵ��  /////////////////////////////////
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
//�Ľ���
//char* my_strcpy(char*dest,  const char*src)
//{
//	//assert(dest != NULL);
//	//assert(src != NULL);
//	char*ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
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
/////////////////////////////////////////////////////  strcat����ʵ��  ///////////////////////////////////
//char* my_strcat(char*dest,const char*src)
//{
//	assert(dest != NULL);
//	assert(src);
//	char*ret = dest;
//	//1.��Ŀ���ַ���'\0'��λ��
//	while (*dest!='\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ��ռ���ʼ��ַ
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
///////////////////////////////////////////////////  strcmp����ʵ��  ///////////////////////////////////////////////
//int my_strcmp(const char*str1, const char*str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
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

//////////////////////////////////////////////////////////  strncpy����ʵ��  /////////////////////////////////////////////
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

//////////////////////////////////////////////////////////  strncat����ʵ��  /////////////////////////////////////////////
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

//////////////////////////////////////////////////////////  strstr����  ////////////////////////////////////////////////
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
//		printf("Ŀ���ַ����У��Ӵ�������\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

////////////////////////////////////////////////////////  strtok����  ////////////////////////////////////////////////

int main()
{
	char arr1[] = "1836082265@qq.com";
	char arr2[] = "Ming.Wang@quantacn.com";
	char* p = "@.";
	//char buf[1024] = { 0 };
	//strcpy(buf, arr2);

	char* ret = NULL;
	for (ret = strtok(arr1, p); ret != NULL; ret = strtok(NULL, p))
		printf("%s\n", ret);
	return 0;
}
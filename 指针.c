#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


////指针类型
//int main()
//{
//	int a = 0x11223344; //一个16进制数占4个二进制位，两个16进制数一个字节
//	//1.指针类型决定了指针进行解引用操作*的时候，能访问的空间大小
//	//int*p - *p能访问4个字节
//	//char*p - *p能访问1个字节
//	//double*p - *p能访问8个字节
//	//2.指针类型决定了指针的步长（走一步多远),单位字节
//	//int*p - p + 1 --> 4
//	//char*p - p + 1 --> 1
//	//double*p - p + 1 --> 8
//	return 0;
//}
////应用
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名 就是 首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

////野指针
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//1.局部的指针未初始化，默认随机值，是野指针
//	int* pa = NULL;//NULL - 用来初始化指针，给指针赋值
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}//2/指针越界，成为野指针
//	return 0;
//}
////3.指针指向的空间释放
//int* test()
//{
//	int a = 0;
//	return &a;//返回临时变量的地址存在问题
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}


////用指针实现求字符串长度
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')//是一个循环，而不是if
//		end++;
//	return (end - start);
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("字符长度：%d\n", len);
//
//	printf("%d\n", &a[9] - &a[0]);//9
//	//指针-指针得元素个数，小地址-大地址得负数
//	
//	return 0;
//}

//int main()
//{
//	float values[5];
//	float* vp;
//	//建议使用写法一，因为C语言标准规定-
//	// 允许指向数组元素得指针与指向数组最后一个元素后面得那个内存位置的指针比较，
//	// 但是不允许与指向第一个元素之前得那个内存位置的指针进行比较
//	//写法一、
//	for (vp = &values[5]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	//写法二、
//	for (vp = &values[5-1]; vp >= &values[0];vp--)
//	{
//		*vp = 0;
//	}
//
//	return 0;
//}

////二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &a;//ppa就是二级指针
//}

////指针数组
////数组指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	int* arr2[3] = { &a,&b,&c };//指针数组
//	return 0;
//}
 
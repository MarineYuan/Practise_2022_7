#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

////数组的创建
//int main()
//{
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a',98 };//98时b的ASCII码值
//	char arr3[] = "abcdef";
//
//	//strlen只能求字符串长度；库函数
//	//sizeof计算变量、数组、类型的大小，单位是字节；操作符 
//	printf("%d\n", sizeof(arr3));
//	//sizeof计算arr3所占空间大小
//	//7个char元素-7*1 =7（包括\0) 
//	printf("%d\n", strlen(arr3));
//	//strlen求字符串长度
//	//找到\0停止，且\0不算字符长度 
//
//	char arr1[] = "abc";
//	char arr4[] = { 'a','b','c' }; 
//	printf("%d\n", sizeof(arr1));//4--a b c \0
//	printf("%d\n", sizeof(arr4));//3--a b c
// 
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr4));//15--没有结束标志\0,后是随机值
//	return 0;
//}
// 
//数组计算个数时，类型为char最好用strlen免得算进\0;类型为int可用sz


////一维数组在内存中的存储：连续存放
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("&arr[%d] = %p\n", i, &arr[i]);
// 
// //数组名就是首元素地址
// //但是，sizeof（数组名）计算的是整个数组的大小
// //&数组名，数组名代表整个数组，去除的是整个数组的地址
// printf("%p\n",arr);//首元素地址
// printf("%p\n",&arr[0]);//首元素地址
// 
// printf("%p\n",&arr);//整个数组的地址
// printf("%d\n",*arr);
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	//int arr[][] = { {1,2,3,4},{5,6,7,8} };
//	//二维数组的列不能省略
//	//二维数组的遍历
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);//遍历
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//			//内存查看 
//		}
//		//printf("\n");遍历用
//	}
//	return 0;
//}



//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//每一趟冒泡排序
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据不完全有序
//				//完全有序压根不会进去
//			} 
//		}
//		if (flag = 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//数组传递的是数组arr首元素地址&arr[0]
//	//因此数组大小的计算要在函数外面
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//} 


#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

////使用函数实现数组倒置
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//		
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return;
//}

//int i = 0;//全局变量不初始化 则默认为0
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	//sizeof()-计算变量/类型所占内存的大小->=0无符号数
//	{
//		printf(">\n");
//	}
//	else
//		printf("<\n");
//	return 0;
//}

////使用递归打印函数的每一位
//void each(int a)
//{
//	int b = 0;
//	if (a > 0)//不能用while（a）
//	{
//		b = a % 2;
//		printf("%d ", b);
//		each(a / 2);
//	}
//}
//int main()
//{
//	int a = 5; //101
//	each(a);
//	return 0;
//}

////用递归实现数组倒序放置
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////利用递归实现n的k次方
//double Pow(int n, int k)
//{
//	//n^k = n*n(n-1)
//	if (k < 0)
//		return (1.0 / Pow(n, -k));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}



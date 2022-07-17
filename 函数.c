#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	char arr1[] = "morning!";
//	char arr2[20] = "######";
//	strcpy(arr2, arr1);
//	//虽然arr2把arr1拷贝过来，但是\0也在其中。由于\0是结束标志，所以之后不再显示
//	//strcpy(destination, source);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}

////交换数字（指针）
//void Swap1(int x, int y)
////函数实现失败
////因为实参a，b与形参x,y实际上属于不同的内存块
////形参是实参的一份临时拷贝
////x,y（形参）的改变并不能影响a,b（实参）
////只有借助地址改变同一内存中的值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d,b = %d\n", a, b);
//	Swap1(a, b);//传值调用
//	printf("a = %d,b = %d\n", a, b);
//	Swap2(&a, &b);//传址调用，函数内部可以直接调用外部变量
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}



//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//			//break;
//			//return0直接返回函数值，函数结束
//			//而break只是跳出循环
//		}
//		//if如果没有遇到return 0结束，就是把从2到本身-1的数全部遍历了一遍
//		//那么着就是素数
//	}
//	//if (n % i != 0)没必要，而且是错误的
//	//if（n == i）如果是break，那么是有必要的。但是在函数中duck不必
//		return 1;
//}


////二分查找的注意事项
////所以求数组的大小要在函数外，再作为参数传入
//					//arr传递原数组第一个元素，本质上是一个指针,因此求元素个数的方法失效
//int binary_search(int arr[], int k，int sz)
//{                
//	//int sz = sizeof(arr) / sizeof(arr[0]);//所以就在主函数计算后，将sz传进函数
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                    arr传递过去的实际上是arr首元素的地址
//	int ret = binary_search(arr, k ,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	//printf函数返回值为字符个数
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


////递归-1234显示为1 2 3 4
//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", & num);//1234
//	//递归
//	print(num);
//}
////递归-显示字符串长度
//// 法1.使用临时变量
//int my_strlen(char* str)
//{
//	int count = 0;
//	while  (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//// 法2.不使用临时变量
//int my_strlen(char* str)
//{
//	if (*str != '\0') 
//	{
//		return 1 + my_strlen(++str);
//		//str+1或++str,而不是++,否则程序无法运行（死循环）
//		//str+1是表达式，那么会先将其结果运行出来再进入程序
//		//++str先加再运行，str++先运行再++
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);//存的是第一个字符的地址
//	printf("len = %d\n", len);
//
//	return 0;  
//}

////斐波那契数列的迭代模式
////递归重复计算，效率过低
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//当n=1或2时
//
//	while (n > 2)//优化
//	{
//		c = a + b;
//		a = b; 
//		b = c;
//		n--;
//	}
//	return c;
//}


////即使递归代码没有任何语法等问题，也要注意栈溢出（stack overflow）
//void test(int n)
//{
//	if (n < 10000)
//		test(n + 1);
//}
//int main()
//{
//	test(1);
//	return 0;
//}
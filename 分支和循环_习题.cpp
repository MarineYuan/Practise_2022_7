#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int fac = 1;
//	printf("请输入：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		fac *=  i;
//	}
//	printf("阶乘的值为：%d\n", fac);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int fac = 1;
//	int sum = 0;
//	for (n = 1; n <= 3 ; n++)
//	{
//		//fac = 1; 
//		//for (i = 1; i <= n; i++)
//		//{
//		//	fac *= i;
//		//}
//		////n的阶乘 
//		fac = fac * n;
//		sum = sum + fac;
//	}
//	printf("阶乘的和为：%d\n", sum);
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码， 在arr数组（有序的）中找到7
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	//for (i = 0; i < sz; i++)
//	//{
//	//	if (k == arr[i])
//	//	{
//	//		printf("找到了，下标是：%d\n", i);
//	//		break;
//	//	}
//	//}
//	//if (i == sz)
//	//	printf("找不到\n");
//	//优化--二分查找法
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素个数，以便用索引
//	int left = 0;//左下标
//	int right = 0;//右下标
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
//			printf("找到了，下标是,%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//int main() {
//	char arr1[] = "welcome to home!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	//int right = (sizeof(arr1) / sizeof(arr1[0])) - 2;
//	////注意，是-2！！！因为字符串后面还有‘/0’
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);//单位毫秒
//		system("cls");//执行系统命令的一个函数-cls- 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2); 
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：->");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		//字符串匹配不能用==，而是使用库函数strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}

////辗转相除法
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//
//	while (m % n /*!= 0*/)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	return 0;
//}

////找素数-优化法
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//偶数不可能为素数
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	//小数就得用浮点了
//	int flag = 1;
//	//不断*1，*-1，*1......
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6 };
//	int max = arr[0];
//	//最大值的初始值最好用数组内部的数,如果直接默认0负数不好办
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

////九九乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//9行
//	{
//		int j = 1;
//		for(j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);
//			//行*列，比从自己往下遍历好多了
//			//*-2d两位左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

  
////猜数字
//#include <time.h>
//#include<stdlib.h>
//
//void menu()
//{
//	printf("*************************");
//	printf("**play 1    exit 0 ******");
//	printf("*************************");
//}
//
//void game()
//{
//	//1.先生成一个随机数
//	int ret = 0;
//	int guess = 0;//获取用户输入数字
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t
//	//srand(unsigned int)time(null));
//	ret = rand() % 100 + 1;//生成1-100之间的随机数
//	//printf("%d\n",ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand(unsigned int)time(null));// 在主函数中
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//		default:
//			printf("选择错误\n");
//			break;
//		}	
//	} while (input);
//	return 0;
//}
//

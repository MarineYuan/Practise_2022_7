#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	char arr1[] = "morning!";
//	char arr2[20] = "######";
//	strcpy(arr2, arr1);
//	//��Ȼarr2��arr1��������������\0Ҳ�����С�����\0�ǽ�����־������֮������ʾ
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

////�������֣�ָ�룩
//void Swap1(int x, int y)
////����ʵ��ʧ��
////��Ϊʵ��a��b���β�x,yʵ�������ڲ�ͬ���ڴ��
////�β���ʵ�ε�һ����ʱ����
////x,y���βΣ��ĸı䲢����Ӱ��a,b��ʵ�Σ�
////ֻ�н�����ַ�ı�ͬһ�ڴ��е�ֵ
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
//	Swap1(a, b);//��ֵ����
//	printf("a = %d,b = %d\n", a, b);
//	Swap2(&a, &b);//��ַ���ã������ڲ�����ֱ�ӵ����ⲿ����
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
//			//return0ֱ�ӷ��غ���ֵ����������
//			//��breakֻ������ѭ��
//		}
//		//if���û������return 0���������ǰѴ�2������-1����ȫ��������һ��
//		//��ô�ž�������
//	}
//	//if (n % i != 0)û��Ҫ�������Ǵ����
//	//if��n == i�������break����ô���б�Ҫ�ġ������ں�����duck����
//		return 1;
//}


////���ֲ��ҵ�ע������
////����������Ĵ�СҪ�ں����⣬����Ϊ��������
//					//arr����ԭ�����һ��Ԫ�أ���������һ��ָ��,�����Ԫ�ظ����ķ���ʧЧ
//int binary_search(int arr[], int k��int sz)
//{                
//	//int sz = sizeof(arr) / sizeof(arr[0]);//���Ծ�������������󣬽�sz��������
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
//	//                    arr���ݹ�ȥ��ʵ������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k ,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	//printf��������ֵΪ�ַ�����
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


////�ݹ�-1234��ʾΪ1 2 3 4
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
//	//�ݹ�
//	print(num);
//}
////�ݹ�-��ʾ�ַ�������
//// ��1.ʹ����ʱ����
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
//// ��2.��ʹ����ʱ����
//int my_strlen(char* str)
//{
//	if (*str != '\0') 
//	{
//		return 1 + my_strlen(++str);
//		//str+1��++str,������++,��������޷����У���ѭ����
//		//str+1�Ǳ��ʽ����ô���Ƚ��������г����ٽ������
//		//++str�ȼ������У�str++��������++
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);//����ǵ�һ���ַ��ĵ�ַ
//	printf("len = %d\n", len);
//
//	return 0;  
//}

////쳲��������еĵ���ģʽ
////�ݹ��ظ����㣬Ч�ʹ���
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//��n=1��2ʱ
//
//	while (n > 2)//�Ż�
//	{
//		c = a + b;
//		a = b; 
//		b = c;
//		n--;
//	}
//	return c;
//}


////��ʹ�ݹ����û���κ��﷨�����⣬ҲҪע��ջ�����stack overflow��
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
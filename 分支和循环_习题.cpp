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
//	printf("�����룺");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		fac *=  i;
//	}
//	printf("�׳˵�ֵΪ��%d\n", fac);
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
//		////n�Ľ׳� 
//		fac = fac * n;
//		sum = sum + fac;
//	}
//	printf("�׳˵ĺ�Ϊ��%d\n", sum);
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬 ��arr���飨����ģ����ҵ�7
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	//for (i = 0; i < sz; i++)
//	//{
//	//	if (k == arr[i])
//	//	{
//	//		printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//	//		break;
//	//	}
//	//}
//	//if (i == sz)
//	//	printf("�Ҳ���\n");
//	//�Ż�--���ֲ��ҷ�
//	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�ظ������Ա�������
//	int left = 0;//���±�
//	int right = 0;//���±�
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
//			printf("�ҵ��ˣ��±���,%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//int main() {
//	char arr1[] = "welcome to home!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	//int right = (sizeof(arr1) / sizeof(arr1[0])) - 2;
//	////ע�⣬��-2��������Ϊ�ַ������滹�С�/0��
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);//��λ����
//		system("cls");//ִ��ϵͳ�����һ������-cls- �����Ļ
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
//		printf("���������룺->");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		//�ַ���ƥ�䲻����==������ʹ�ÿ⺯��strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}

////շת�����
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

////������-�Ż���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//ż��������Ϊ����
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
//	//С���͵��ø�����
//	int flag = 1;
//	//����*1��*-1��*1......
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
//	//���ֵ�ĳ�ʼֵ����������ڲ�����,���ֱ��Ĭ��0�������ð�
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

////�žų˷���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//9��
//	{
//		int j = 1;
//		for(j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);
//			//��*�У��ȴ��Լ����±����ö���
//			//*-2d��λ�����
//		}
//		printf("\n");
//	}
//	return 0;
//}

  
////������
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
//	//1.������һ�������
//	int ret = 0;
//	int guess = 0;//��ȡ�û���������
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	//time_t
//	//srand(unsigned int)time(null));
//	ret = rand() % 100 + 1;//����1-100֮��������
//	//printf("%d\n",ret);
//	//2.������
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´���\n");
//		else if (guess < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand(unsigned int)time(null));// ����������
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//		default:
//			printf("ѡ�����\n");
//			break;
//		}	
//	} while (input);
//	return 0;
//}
//

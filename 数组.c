#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

////����Ĵ���
//int main()
//{
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a',98 };//98ʱb��ASCII��ֵ
//	char arr3[] = "abcdef";
//
//	//strlenֻ�����ַ������ȣ��⺯��
//	//sizeof������������顢���͵Ĵ�С����λ���ֽڣ������� 
//	printf("%d\n", sizeof(arr3));
//	//sizeof����arr3��ռ�ռ��С
//	//7��charԪ��-7*1 =7������\0) 
//	printf("%d\n", strlen(arr3));
//	//strlen���ַ�������
//	//�ҵ�\0ֹͣ����\0�����ַ����� 
//
//	char arr1[] = "abc";
//	char arr4[] = { 'a','b','c' }; 
//	printf("%d\n", sizeof(arr1));//4--a b c \0
//	printf("%d\n", sizeof(arr4));//3--a b c
// 
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr4));//15--û�н�����־\0,�������ֵ
//	return 0;
//}
// 
//����������ʱ������Ϊchar�����strlen������\0;����Ϊint����sz


////һά�������ڴ��еĴ洢���������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("&arr[%d] = %p\n", i, &arr[i]);
// 
// //������������Ԫ�ص�ַ
// //���ǣ�sizeof�������������������������Ĵ�С
// //&�������������������������飬ȥ��������������ĵ�ַ
// printf("%p\n",arr);//��Ԫ�ص�ַ
// printf("%p\n",&arr[0]);//��Ԫ�ص�ַ
// 
// printf("%p\n",&arr);//��������ĵ�ַ
// printf("%d\n",*arr);
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	//int arr[][] = { {1,2,3,4},{5,6,7,8} };
//	//��ά������в���ʡ��
//	//��ά����ı���
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);//����
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//			//�ڴ�鿴 
//		}
//		//printf("\n");������
//	}
//	return 0;
//}



//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//ÿһ��ð������
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//������������ݲ���ȫ����
//				//��ȫ����ѹ�������ȥ
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
//	//��arr���������ų�����
//	//���鴫�ݵ�������arr��Ԫ�ص�ַ&arr[0]
//	//��������С�ļ���Ҫ�ں�������
//	bubble_sort(arr,sz);//ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//} 


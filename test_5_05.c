 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
//int main()
//{
	//һ������
	//����������Ԫ�ص�ַ
	//1.sizeof(�������� - ��������ʾ��������
	//&������ - ��ʾ��������
	//
	//int a[] = { 1,2,3,4 }; 
	//printf("%d\n", sizeof(a));//sizeof(��������- ������������ܴ�С - ��λ���ֽ� - 16 
	//printf("%d\n", sizeof(a + 0));//4/8 - �����������ʾ��Ԫ�ص�ַ - a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ� 
	//printf("%d\n", sizeof(*a));//4/8 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
	//printf("%d\n", sizeof(a + 1));//4/8 - ������b��ʾ��Ԫ�ص�ֵ�� a+1 �ڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(a[1]));//4/8 - �ڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a));//4/8 &aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С��Ҳ��������ĵ�ַΪ4
	//printf("%d\n", sizeof(*&a));//16 - &a������ĵ�ַ������ĵ�ַ�����÷��ʵ������飬sizeof�����������Ĵ�С��λ���ֽ�
	//printf("%d\n", sizeof(&a + 1));//4/8 - &a������ĵ�ַ,&a+1��Ȼ�����������飬�����ǵ�ַ��������4/8���ֽ� 
	//printf("%d\n", sizeof(&a[0]));//4/8 ��һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8���ǵڶ���Ԫ�صĵ�ַ
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 sizeof������������С�� 6*1 = 6���ֽ�
	//printf("%d\n", sizeof(arr + 0)); //4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*arr));//1 arr����Ԫ�ص�ַ *arr����Ԫ�أ���СΪ1���ֽ�
	//printf("%d\n", sizeof(arr[1]));//1 arr[1]����Ԫ�ص�ַ����СΪһ���ֽ�
	//printf("%d\n", sizeof(&arr)); //4/8 &arr������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�СҲ��������ĵ�ַΪ4���ֽ�
	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1��������������ĵ�ַ�������ǵ�ַ������4/8���ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ǵڶ���Ԫ�صĵ�ַ��СΪ4/8���ֽ�
	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr + 0)); //���ֵ
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//���ֵ1
    //printf("%d\n", strlen(&arr+1)); //���ֵ1+6
    //printf("%d\n", strlen(&arr[0]+1));//���ֵ1-1
	
	//return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a)); //3 * 4 * 4 = 48
//	printf("%d\n", sizeof(a[0][0])); //4/8
//	
//	printf("%d\n", sizeof(a[0])); //4 * 4 =16 a[0]�൱�ڵ�һ����Ϊһά����,
//	//sizeof(arr[0])����������������sizeof(���ڼ���sizeof�Ĵ�С
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]��ʵ�ǵ�һ�е�������,��������ʱ����Ԫ�ص�ַ
//	//��ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ����a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ��С��4/8���ֽ�
//	printf("%d\n", sizeof(*(a[0] + 1)));//4/8  *(a[0]+1)�ǵ�һ�еڶ���Ԫ�ش�С��4/8���ֽ�
//	printf("%d\n", sizeof(a + 1)); //a�Ƕ�ά�������������������û��sizeof(),Ҳû��&����������a����Ԫ�ص�ַ
//	//�Ѷ�ά���鿴��һά����ʱ,����ά�������Ԫ�������ĵ�һ��,a���ǵ�һ��(��Ԫ��)�ĵ�ַ
//	//a+1���ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16 sizeof(a[1])����ڶ��еĴ�С,��λ���ֽ� 
//	printf("%d\n", sizeof(&a[0] + 1)); //4 �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 - ����ڶ��еĴ�С,��λ���ֽ�
//	printf("%d\n", sizeof(*a)); //16 - a����Ԫ�ص�ַ,*a���ǵ�һ��,sizeof(*a)���Ǽ����һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//sizeof�ڲ����ʽ�����м��� sizeof(a[3]) �� sizeof(a[0])��ͬ
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//struct Test 
//{
//	int Num;
//	char* pcName; 
//	short sDate; 
//	char cha[2]; 
//	short sBa[4];
//}*p; 
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣� 
////��֪���ṹ��Test���͵ı�����С��20���ֽ� 
//int main()
//{
//	p = (struct Test*)0x100000;//16�����ǰ�λ 0x�ǵ�ַ
//    printf("%p\n", p + 0x1);//0x100000+20 = 0x00100014
//    printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//    printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
//    return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}
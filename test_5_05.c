 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
//int main()
//{
	//一堆数组
	//数组名是首元素地址
	//1.sizeof(数组名） - 数组名表示整个数组
	//&数组名 - 表示整个数组
	//
	//int a[] = { 1,2,3,4 }; 
	//printf("%d\n", sizeof(a));//sizeof(数组名）- 计算的是数组总大小 - 单位是字节 - 16 
	//printf("%d\n", sizeof(a + 0));//4/8 - 数组名这里表示首元素地址 - a+0 还是首元素地址，地址的大小就是4/8个字节 
	//printf("%d\n", sizeof(*a));//4/8 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
	//printf("%d\n", sizeof(a + 1));//4/8 - 数组名b表示首元素的值， a+1 第二个元素的地址，地址的大小就是4/8个字节
	//printf("%d\n", sizeof(a[1]));//4/8 - 第二个元素的大小
	//printf("%d\n", sizeof(&a));//4/8 &a取出的是数组的地址，但是数组的地址也是地址，地址的大小那也就是数组的地址为4
	//printf("%d\n", sizeof(*&a));//16 - &a是数组的地址，数组的地址解引用访问的是数组，sizeof计算的是数组的大小单位是字节
	//printf("%d\n", sizeof(&a + 1));//4/8 - &a是数组的地址,&a+1虽然跳过整个数组，但还是地址，所以是4/8个字节 
	//printf("%d\n", sizeof(&a[0]));//4/8 第一个元素的地址
	//printf("%d\n", sizeof(&a[0] + 1));//4/8就是第二个元素的地址
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 sizeof计算的是数组大小， 6*1 = 6个字节
	//printf("%d\n", sizeof(arr + 0)); //4/8 arr是首元素的地址，arr+0还是首元素的地址
	//printf("%d\n", sizeof(*arr));//1 arr是首元素地址 *arr是首元素，大小为1个字节
	//printf("%d\n", sizeof(arr[1]));//1 arr[1]是首元素地址，大小为一个字节
	//printf("%d\n", sizeof(&arr)); //4/8 &arr是数组的地址，但是数组的地址也是地址，地址的大小也就是数组的地址为4个字节
	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1是跳过整个数组的地址，但还是地址所以是4/8个字节
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 是第二个元素的地址大小为4/8个字节
	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr + 0)); //随机值
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值1
    //printf("%d\n", strlen(&arr+1)); //随机值1+6
    //printf("%d\n", strlen(&arr[0]+1));//随机值1-1
	
	//return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a)); //3 * 4 * 4 = 48
//	printf("%d\n", sizeof(a[0][0])); //4/8
//	
//	printf("%d\n", sizeof(a[0])); //4 * 4 =16 a[0]相当于第一行做为一维数组,
//	//sizeof(arr[0])把数组名单独放在sizeof(）内计算sizeof的大小
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]其实是第一行的数组名,数组名此时是首元素地址
//	//其实就是第一行第一个元素的地址所以a[0]+1就是第一行第二个元素的地址大小是4/8个字节
//	printf("%d\n", sizeof(*(a[0] + 1)));//4/8  *(a[0]+1)是第一行第二个元素大小是4/8个字节
//	printf("%d\n", sizeof(a + 1)); //a是二维数组的数组名，数组名没有sizeof(),也没有&数组名所以a是首元素地址
//	//把二维数组看成一维数组时,而二维数组的首元素是它的第一行,a就是第一行(首元素)的地址
//	//a+1就是第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16 sizeof(a[1])计算第二行的大小,单位是字节 
//	printf("%d\n", sizeof(&a[0] + 1)); //4 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 - 计算第二行的大小,单位是字节
//	printf("%d\n", sizeof(*a)); //16 - a是首元素地址,*a就是第一行,sizeof(*a)就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//sizeof内部表达式不进行计算 sizeof(a[3]) 和 sizeof(a[0])相同
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
////假设p 的值为0x100000。 如下表表达式的值分别为多少？ 
////已知，结构体Test类型的变量大小是20个字节 
//int main()
//{
//	p = (struct Test*)0x100000;//16进制是八位 0x是地址
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
//for循环的变种
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	for (;;);
//	printf("hehe!!");
//	system("pause");
//	return 0;
//}
//一道练习题
	//#include<stdio.h>
	//#include<windows.h>
	//int main()
	//{
	//	int i = 0;
	//	int k = 0;
	//	for (i = 0; k = 0; i++, k++)
	//		k++;
	//	return 0;
	//}
//编写代码，演示多个代码从两边移动,向中间会和
//内容为 hello world keep coding
//从两边逐渐由#号变为上面所提到的内容
//创建两个字符串,依次进行交换
//求数组长度的函数为strlen函数,因为是下标,所以要-1
//要使用strlen函数就需要加上头文件,为include<string.h>
//交换的规律为右边依次交换,左边依次交换
//用一个Sleep函数来让图形一个一个出现
//注意此处的Sleep中的S要大写
//sleep(1000)表示每隔1000ms就循环一次,即1s
//算法的主体部分
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello world keep coding";
//	char arr2[] = "#######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//这个下标对于的为!
//	while (left < right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);//%s表示的是输出字符串
//	}
//	system("pause");
//	return 0;
//	
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	while (getchar() != '\n')
//		;
//}

//创建一个登陆系统
//当用户输入的内容与系统所需要的内容一致时,显示"登陆成功"
//当用户输入的内容三次与系统所需要的内容不一致时,显示"密码输入错误三次,禁止登陆"
//创建一个数组来保存,系统的密码.创建一个数组,来保存用户输入的密码
//不能直接用直接比较两个字符串的内容
//需要依次比较字符数组中的没一个的内容
//需要使用到strcmp函数,用来依次比较两个数组中字符串的内容
//如果两个字符分不出大小,依次比较下一个字符
//具体的内容让我们进行查询
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<windows.h>
//int mian()
//{
//	int i = 0;
//		for (; i < 3; i++)
//		{
//			char password[1024] = { 0 };//此处为创建一个字符串数组,先将它们的初值保存为0
//			printf("请输入密码:\n");
//			scanf("%s", &password);//输入为字符类型
//			if (strcmp(password, "556644") == 0)//这儿必须写==0,具体可以看strcmp函数的判定规律
//			{
//				printf("登陆成功!!!\n");
//				break;
//			}
//		}
//		if (i == 3)
//		{
//			printf("登陆次数超过三次,禁止登陆!!");
//		}
//		else
//		{
//			printf("请继续操作.");
//		}
//		system("pause");
//		return 0;
//}
//计算n的阶乘
//用do while的形式
//关于函数传参的问题
//写函数时要确定有几个参数,最后实参传递进来
//#include<stdio.h>
//#include<windows.h>
//int factor(int x)
//{
//	int result = 1;
//	int i = 1;
//	for (i = 1; i <= x; i++)
//	{
//		result *= i;
//	}
//	return result;
//}
//int main()
//{
//	int i;
//	int  result;
//	printf("请输入你要计算阶乘的数:\n");
//	scanf_s("%d", &i);
//	result = factor(i);
//	printf("这个数的阶乘为%d\n", result);
//	system("pause");
//	return 0;
//}
//给定一个有序的数组,实现元素查找的功能
//使用一个for循环来实现数组查找的功能
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//int main()
//{
//	int i;
//	int find;
//	printf("请输入一个数我们来遍历数组:");
//	scanf_s("%d", &find);
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	for (i = 0; i <= sizeof(arr1)/sizeof(arr1[0]); i++)
//	{
//		if (find == arr1[i])
//		{
//			printf("找到了,这个数为%d", arr1[i]);
//			break;
//		}
//	}
//	if (i > sizeof(arr1) / sizeof(arr1[0]))
//	{
//		printf("没找到!!");
//	}
//	system("pause");
//	return 0;
//
//}
////使用折半法来查找数组
////若找到对应的数,则输出,若没有找到则将查找的范围缩小一半继续查找
////因为此方法针对的为有序数组,所以才可以使用
////若是无序数组,则不能使用折半法进行查找
////定义一个数组的左边和数组的右边,创建一个循环
////当左边的小于右边的数组长度时就进行循环
////要写为left<=right,不然等于的情况进不去
////二分查找
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int to_find = 4;
//	int left = 0;//对应数组的第一个下标
//	int right = sizeof(arr) / sizeof(arr[1]) - 1;//对应数组的最后一个下标
//    int mid = 0;
//	//while循环的条件为left<=right
//	//因为当left=right时还需要进行循环,不能丢失left=right的情况
//	//通过比较to_find与数组中二分查找后的每一个值来确定是否找到
//	//当to_find<arr[mid]时说明这个值在数组的左半部分,则需要将right的范围往左半部分划分,因为to_find=arr[mid]的情况我们单独讨论,所以right的值为mid-1
//	//当to_find>arr[mid]时说明这个值在数组的右半部分,则需要将left的范围往数组的右半部分进行划分,因为to_find=arr[mid]的情况是我们需要的情况,所以left的值为mid+1
//	while (left <= right)
//	{
//		mid = (left + right) / 2;//没循环一次进行一次二分,来缩小查找的范围
//		if (to_find < arr[mid])
//		{
//			right = mid - 1;
//		}
//		if (to_find > arr[mid])
//		{
//			left = mid + 1;
//		}
//		if (to_find == arr[mid])//这是我们想要的情况,跳出循环
//		{
//			break;
//		}
//	}
//	//while循环跳出有两种可能,一种是通过while循环找到了对应的数,然后跳出了循环,一种是经过了所有循环也没有找到需要的数跳出了循环
//	//就是经过while循环的循环条件的,就是我们要找的数,另一种就是经过了while也没有找到我们要找的数,直到跳出了循环
//	//最后我们要输出mid的值,但是我们可以看到mid的作用域只是这个while循环
//	//有人说在mid 前面加上static改变的只是一个变量的生命周期,并不改变他的作用域,所以我们需要定义一个全局变量mid
//	if (left <= right)
//	{
//		printf("找到了,这个数对应的下标为%d", mid);
//	}
//	else
//	{
//		printf("经过了这么多次循环也没有找到");
//	}
//	system("pause");
//	return 0;
//}
//创建一个猜数游戏
//让用户输入相应的数字,再进行提示这个数大了还是小了,直到用户猜到正确的数字为止
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Menu()
{
	//创建一个Menu函数,打印需要的用户界面
	printf("=======================================================\n");
	printf("*******************************************************\n");
	printf("                      1.开始游戏                       \n");
	printf("                      0.退出游戏                       \n");
	printf("*******************************************************\n");
	printf("=======================================================\n");
	//用choice来判断是否进入循环
	int choice = 0;
	//因为调运的数在while循环之中,所以每调运一次,执行一次
	printf("请输入您的选择:");
	scanf_s("%d", &choice);
	return choice;
}
//创建一个Game函数
//Gmae函数是一个没有返回值的函数,所以写为void Game
void Game()
{
	//要产生一个随机数,因为要降低才数的难度,所以此处生成的为一个1-1000以内的随机数
	//要让系统产生一个随机数,就需要调用rand函数,它在stdlib.h头文件之中
	//用 result 来保存产生的随机数
	srand(unsigned(time(NULL)));
	int result = rand() % 1000 + 1;
	while (1)
	{
		//让用户输入一个数字,来进行判断
		int cai;
		printf("请输入您猜的数字:\n");
		scanf_s("%d", &cai);
		if (cai < result)
		{
			printf("您输入的数字低了,请继续猜\n");
		}
		else if (cai > result)
		{
			printf("您猜的数字高了.请继续猜\n");
		}
		else
		{
			printf("猜对了,真棒!!!\n");
			break;
		}
		
		//当用户输入的数与产生的随机数不符时,提示高了还是低了
		//让用户继续猜数,直到用户猜对时跳出循环
	}
}
int main()
{
	//创建一个循环,在这个循环中进行操作
	//当循环退出的条件不确定时,先写一个死循环
	while (1)
	{
		//打印一个用户界面,让用户选择是否进入游戏
		//创建一个Menu函数,调用Menu函数,根据是否满足Menu函数中的条件来进行判断
		//如果用户选择进入游戏,则进入猜数游戏的循环
		//如果用户选择退出游戏,则显示"谢谢您的参与!!"
		//如果用户输入有误,则提示"输入有误"
		int choice = Menu();
		if (choice == 1)
		{
			printf("请输入您猜的数:\n");
			//调用Game函数,借助Game函数中猜数的功能,来进行猜数
			//因为Game函数没有返回值,所以调用时不能以int sum=Game();的形式来进行调用,应该直接以Game();的形式进行调用
			Game();

		}
		else if (choice == 0)
		{
			printf("谢谢您的参与!!!\n");
			break;
		}
		else
		{
			printf("输入有误,请重新输入!!\n");
		}
	}
	system("pause");
	return 0;
}
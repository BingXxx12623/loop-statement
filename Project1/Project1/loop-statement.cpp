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
////创建一个登陆系统
////当用户输入的内容与系统所需要的内容一致时,显示"登陆成功"
////当用户输入的内容三次与系统所需要的内容不一致时,显示"密码输入错误三次,禁止登陆"
////创建一个数组来保存,系统的密码.创建一个数组,来保存用户输入的密码
////不能直接用直接比较两个字符串的内容
////需要依次比较字符数组中的没一个的内容
////需要使用到strcmp函数,用来依次比较两个数组中字符串的内容
////如果两个字符分不出大小,依次比较下一个字符
////具体的内容让我们进行查询
//#include<stdio.h>
//#include<windows.h>
//int mian()
//{
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		char password[1024] = { 0 };//此处为创建一个字符串数组,先将它们的初值保存为0
//		printf("请输入密码:\n");
//		scanf_s("%s", &password,20);//输入为字符类型
//		if (strcmp(password, "556644") == 0)//这儿必须写==0,具体可以看strcmp函数的判定规律
//		{
//			printf("登陆成功!!!\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("登陆次数超过三次,禁止登陆!!");
//	}
//	else
//	{
//		printf("请继续操作.");
//	}
//	system("pause");
//	return 0;
//}
//计算n的阶乘
//用do while 循环
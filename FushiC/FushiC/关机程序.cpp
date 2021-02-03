#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	//关机   
	//System   专门用来执行系统命令
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("你的电脑将在一分钟后关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input,"我是猪")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
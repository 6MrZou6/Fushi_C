#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu() {
	printf("###########################\n");
	printf("#####1.play     0.exit#####\n");
	printf("###########################\n");
}
void game() {
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;//生成1-100之间的随机数

	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess>ret) {
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}

int main() {
	//写一个简单的猜数字游戏
	int input = 0;
	//时间戳
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入选项：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	
	return 0;
}
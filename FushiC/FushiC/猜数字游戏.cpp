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
	ret = rand() % 100 + 1;//����1-100֮��������

	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess>ret) {
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}

int main() {
	//дһ���򵥵Ĳ�������Ϸ
	int input = 0;
	//ʱ���
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������ѡ�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	
	return 0;
}
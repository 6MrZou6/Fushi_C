#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu() {
	printf("*****************************\n");
	printf("****1.play        0.exit********\n");
		printf("*****************************\n");
}
//��Ϸ������ʵ��
void game() {
	//�������߳���������Ϣ
	char  board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	//     |        |   
 //_ _ _ | _ _ _ | _ _ _
	//     |        |
 // _ _ _| _ _ _ | _ _ _
 //        |        |
 //        |        |       

	DisplayBoard(board, ROW, COL);
	//����
	int ret = 0;
	while (1) {
		
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = isWin(board, ROW, COL);
		if (ret!='C') {
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret=isWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else if(ret=='Q')
	{
		printf("ƽ��\n");
	}
}

void test(){
	int input = 0;
	srand((unsigned int )time(NULL));
	do
	{
		menu();
		printf("��ѡ��->");
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
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
}
int main() {
	test();
	return 0;
}
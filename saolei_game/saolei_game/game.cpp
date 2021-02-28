#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	int i = 0;
	int j = 0;
	for (i = 0; i < rows;i++) {
		for (j = 0; j < cols;j++) {
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	//打印列
	for (i = 0; i <= col;i++) {
		printf("%d ", i);
	}
	printf("\n");
	//打印行

	for (i = 1; i <= row;i++) {
		printf("%d ", i);
		for (j = 1; j <= col;j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	
}
void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = EAST_COUNT;

	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}

//'1'-'0'=1
//'3'-'0'=3
//'0'-'0'=0
int get_mine_count(char mine[ROWS][COLS], int x, int y) {
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + 
		mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1]-8*'0';
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	//9*9-10=81
	while (win<row*col-EAST_COUNT)
	{
		printf("请输入排查雷的坐标->");
		scanf("%d%d", &x, &y);
		if (x >=1 && x <= row&&y>=1 & y <= col) {
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1') {
				printf("很遗憾，你踩雷了！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//2.没踩雷
			else
			{
				//计算（x,y）周围雷的个数
				show[x][y] = get_mine_count(mine, x, y) + '0';
				win++;
				DisplayBoard(mine, row, col);

			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	if (win==row*col-EAST_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
		DisplayBoard(mine, row, col);

	}
}
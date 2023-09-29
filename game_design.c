#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

int board_X;
int board_Y;
//建立坐标变量

//设置3*3棋盘
//                      1   2   3  (X)    
//棋盘设计            |---|---|---|
//   |   |          A |   |   |   |
//---|---|---         |---|---|---|
//   |   |          B |   |   |   |
//---|---|---         |---|---|---|
//   |   |          C |   |   |   |
//                    |---|---|---|
//                 (Y)
void board_initialization()
{
	int i;
	int j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}   
//棋盘初始化

void board_printing()
{
	int i;
	int j;
	printf("     1   2   3  (X)\n");
	printf("   |---|---|---|\n");
	for (i = 0; i < ROW; i++)
	{
		switch (i)
		{
		case 0:
			printf(" 1 |");     //case与数字间要有空格
			break;
		case 1:
			printf(" 2 |");
			break;
		case 2:
			printf(" 3 |");
			break;
		}
		for (j = 0; j < COL; j++)
		{
			printf(" %c |", board[i][j]);
		}
		printf("\n   |");
		for (j = 0; j < COL; j++)
		{
			printf("---|");
		}
		printf("\n");
	}
	printf("(Y)");
}
//棋盘打印

void coordinates_input()
{
	int x;
	int y;
	printf("\n");
	printf("it is your turn, please input your coordinates\n");
	printf("input X(choose 1 / 2 / 3)\n");
	scanf("%d", &x);
	printf("input Y(choose 1 / 2 / 3)\n");
	scanf("%d", &y);
	board_X = x-1;
	board_Y = y-1;
	coordinates_judge_player();
}
//坐标存储

void coordinates_judge_player()
{
	if (board_X >= 0 && board_X <= 2 && board_Y >= 0 && board_Y <= 2)
	{
		if (board[board_Y][board_X] == ' ')
		{
			board_edit_player(board_X, board_Y);
		}
		else
		{
			printf("the coordinates has been occupied, please input another one");
			coordinates_input();
		}
	}
	else
	{
		printf("wrong input,please input again\n");
		coordinates_input();
	}
}
//判断玩家坐标合法性

void board_edit_player(int x, int y)
{
	board[y][x] = '#';
}
//编辑棋盘（玩家）

void player_turn()
{
	int i;
	coordinates_input();
	printf("setting");
	for (i = 0; i < 5; i++)
	{
		printf(" .");
		Sleep(300);
	}
	printf("\nDONE\n");
	board_printing();
	printf("\n");
	winner_judge_player(&result);
	if (result == 0)
	{
		computer_turn();
	}
}
//玩家走棋

void computer_turn()
{
	int i;
	printf("it is time for computer to move\n");
	random_coordinates_input();
	printf("computing");
	for (i = 0; i < 5; i++)
	{
		printf(" .");
		Sleep(300);
	}
	printf("\nDONE\n");
	board_printing();
	printf("\n");
	winner_judge_computer(&result);
	if (result == 0)
	{
		player_turn();
	}
}
//电脑走棋

void random_coordinates_input()
{
	board_X = rand() % COL;
	board_Y = rand() % ROW;
	coordinates_judge_computer();
}
//电脑随机坐标输入

void coordinates_judge_computer()
{
	if (board[board_Y][board_X] == ' ')
	{
		board_edit_computer(board_X, board_Y);
	}
	else
	{
		random_coordinates_input();
	}
}
//电脑随机坐标合法性判断

void board_edit_computer(int x, int y)
{
	board[y][x] = '*';
}
//棋盘编辑（电脑）

void winner_judge_player(int *x)
{
	int i;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0]=='#'&& board[i][1] == '#'&& board[i][2] == '#')
		{
			*x = 1;
		}
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == '#' && board[1][i] == '#' && board[2][i] == '#')
		{
			*x = 1;
		}
	}
	if (board[0][0] == '#' && board[1][1] == '#' && board[2][2] == '#')
	{
		*x = 1;
	}
	if (board[0][2] == '#' && board[1][1] == '#' && board[2][0] == '#')
	{
		*x = 1;
	}
	if (*x == 1)
	{
		printf("game over\n");
		printf("the player wins\n");
		printf("CONGRATULATIONS\n");
		printf("\n");
		start_page();
	}
}
//输赢判定（玩家）

void winner_judge_computer(int *x)
{
	int i;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == '*' && board[i][1] == '*' && board[i][2] == '*')
		{
			*x = 1;
		}
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == '*' && board[1][i] == '*' && board[2][i] == '*')
		{
			*x = 1;
		}
	}
	if (board[0][0] == '*' && board[1][1] == '*' && board[2][2] == '*')
	{
		*x = 1;
	}
	if (board[0][2] == '*' && board[1][1] == '*' && board[2][0] == '*')
	{
		*x = 1;
	}
	if (*x == 1)
	{
		printf("game over\n");
		printf("the computer wins\n");
		printf("what a pity, you can TRY AGAIN\n");
		printf("\n");
		start_page();
	}
}
//输赢判定（电脑）
void game()
{
	result = 0;
	board_initialization();
	board_printing();
	player_turn();
}
//游戏设计部分
#include "tic-tac-toe_v231003.h"

//游戏结果判定

int three_number_equality(char a1, char a2, char a3)
{
	if(a1==a2&&a1==a3&&a2==a3)
	{
		if(a1==' ')
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}

void winner_judge_player()//玩家输赢结果判定
{
	int i;
	for (i = 0; i < ROW; i++)
	{
		if (three_number_equality(board[i][0],board[i][1],board[i][2])==1)
		{
			result = 1;
		}
	}
	for (i = 0; i < COL; i++)
	{
		if (three_number_equality(board[0][i],board[1][i],board[2][i])==1)
		{
			result = 1;
		}
	}
	if (three_number_equality(board[0][0],board[1][1],board[2][2])==1)
	{
		result = 1;
	}
	if (three_number_equality(board[2][0],board[1][1],board[0][2])==1)
	{
		result = 1;
	}
	if (result == 1)
	{
		printf("\n!!Game Over!!\n\n");
		Sleep(1000);
		printf("**********************\n");
		printf("** The player wins. **\n");
		printf("**********************\n\n");
		Sleep(1000);
		if(game_level==1)
		{
			printf("Good job! How about raising the game level?");
			Sleep(1000);
		}
		else
		{
			printf("What a nice job you have done! Share this game with your friend,\n");
			printf("and see who has better technique :)");
			Sleep(1000);
		}
		printf("\n");
		start_page();
	}
}

void winner_judge_computer()//电脑输赢结果判定
{
	int i;
	for (i = 0; i < ROW; i++)
	{
		if (three_number_equality(board[i][0],board[i][1],board[i][2])==1)
		{
			result = 1;
		}
	}
	for (i = 0; i < COL; i++)
	{
		if (three_number_equality(board[0][i],board[1][i],board[2][i])==1)
		{
			result = 1;
		}
	}
	if (three_number_equality(board[0][0],board[1][1],board[2][2])==1)
	{
		result = 1;
	}
	if (three_number_equality(board[2][0],board[1][1],board[0][2])==1)
	{
		result = 1;
	}
	if (result == 1)
	{
		printf("\n!!Game Over!!\n\n");
		Sleep(1000);
		printf("************************\n");
		printf("** The computer wins. **\n");
		printf("************************\n\n");
		Sleep(1000);
		if(game_level==1)
		{
			printf("Cheer up, man! You have another chance. Trust yourself, and you\n");
			printf("make it\n");
			Sleep(1000);
		}
		else
		{
			printf("Don't give up. Perhaps the game level is too high for you. You can\n");
			printf("lower it. Of course it's OK for you to have a new try.");
			Sleep(1000);
		}
		printf("\n");
		start_page();
	}
}

void dogfall_judge()//平局判断
{
	empty = 0;
	int j;
	int h;
	for (j = 0; j < 3; j++)
	{
		for(h=0;h<3;h++)
		{
			if (board[j][h] == ' ')
			{
				empty++;
			}
		}
	}
	if (result == 0 && empty == 0)
	{
		printf("\n!!game over!!\n\n");
		Sleep(1000);
		printf("*************\n");
		printf("** Dogfall **\n");
		printf("*************\n\n");
		Sleep(1000);
		printf("You can try again if you want to defeat the computer.\n");
		Sleep(1000);
		start_page();
	}
}
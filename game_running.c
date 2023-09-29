#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//开始界面设计
void start_process_display()
{
	int i;
	printf("setting a new game ");
	for (i = 0; i < 5; i++)
	{
		Sleep(900);
		printf(". ");
	}
	printf("\n FINISHED\n");
	Sleep(500);
}           //
void initialize_process_display()
{
	int i;
	printf("initializing the board ");
	for (i = 0; i < 5; i++)
	{
		Sleep(900);
		printf(". ");
	}
	printf("\n FINISHED\n");
	Sleep(500);
}
void exit_process_display()
{
	int i;
	printf("exitting ");
	for (i = 0; i < 5; i++)
	{
		Sleep(500);
		printf(". ");
	}
	printf("\n FINISHED\n");
	printf("welcome back\n");
}
void start_page()
{
	int input=1;
	printf("the Tic-Tac-Toe of Leone Bei\n");
	printf("version:20230919\n");
	printf("please choose(input 1 means start game\\input other number means exit)\n");
	scanf("%d", &input);
	if (input == 1)
	{
		start_process_display();
		printf("\n");
		initialize_process_display();
		printf("\n");
		printf("game start\n");
		game();//游戏部分
	}
	else
	{
		exit_process_display();
		printf("game exit");
	}	
}

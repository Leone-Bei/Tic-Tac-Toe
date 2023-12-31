#include "tic-tac-toe_v231003.h"

void gamepace_choose()//游戏节奏选择
{
	int gamepace_choice;
	char gamepace_process_words[100]="The game pace is being set";
	printf("\n\t\t---<Game Pace>---\n");
	printf("\t\t1. Slow");
	if(game_pace==700)
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t2. Middle");
	if(game_pace==500)
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t3. fast");
	if(game_pace==300)
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t4. Back");
	printf("\n\n");
	printf("\t\tyour choice:");
	scanf("%d",&gamepace_choice);
	switch(gamepace_choice)
	{
		case 1:
			set_process_display(gamepace_process_words);
			game_pace=700;
            gamepace_choose_exit();
			break;
		case 2:
			set_process_display(gamepace_process_words);
			game_pace=500;
            gamepace_choose_exit();
			break;
		case 3:
			set_process_display(gamepace_process_words);
			game_pace=300;
            gamepace_choose_exit();
			break;
		case 4:
			settings_choose();
			break;
		default:
			printf("\n\t\t!!!PLEASE INPUT THE RIGHT NUMBER!!!\n");
			gamepace_choose();		
	}
}

void gamepace_choose_exit()//游戏节奏选择出口
{
	int gamepace_exit_choice;
	printf("\n\t\t1. Edit again\n");
	printf("\t\t2. Exit\n\n");
	printf("\t\tyour choice:");
	scanf("%d",&gamepace_exit_choice);
	switch(gamepace_exit_choice)
	{
		case 1:
			printf("\n");
			gamepace_choose();
			break;
		case 2:
			printf("\n");
			settings_choose();
			break;
		default:
			printf("\n\t\t!!!PLEASE INPUT THE RIGHT NUMBER!!!\n");
			gamepace_choose_exit();
	}
}
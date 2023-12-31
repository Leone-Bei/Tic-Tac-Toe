#include "tic-tac-toe_v231003.h"

void chesspieces_choose()//棋子选择
{
	int chesspieces_choice;
	printf("\n\t\t--<chesspieces_choose>--\n");
	printf("\t\t1. Player\n");
	printf("\t\t2. Computer\n");
    printf("\t\t3. Back\n\n");
	printf("\t\tyour choice:");
	scanf("%d",&chesspieces_choice);
	switch(chesspieces_choice)
	{
		case 1:
			palyer_chesspieces_choose();
			break;
		case 2:
			computer_chesspieces_choose();
			break;
		case 3:
			if(player_chesspieces==computer_chesspieces)
			{
				printf("\n\t\tThe chesspieces of player and computer should be different.\n");
				printf("\t\tThe chesspieces of player and computer are both %c , so set the chesspiece again.\n\n", player_chesspieces);
				chesspieces_choose();
			}
			else
			{
				settings_choose();
			}
			break;
		default:
			printf("\n\t\t!!!PLEASE INPUT THE RIGHT NUMBER!!!\n");
			chesspieces_choose();
	}

}

void palyer_chesspieces_choose()//玩家棋子类型设置
{
	int playerchesspieces_choice;
	char playerchesspieces_process_words[100]="The chess pieces for player is being set";
	printf("\n\t\t\t---<Chess Pieces for Player>---\n");
	printf("\t\t\t1. #");
	if(player_chesspieces=='#')
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t\t2. $");
	if(player_chesspieces=='$')
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t\t3. *");
	if(player_chesspieces=='*')
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t\t4. &");
	if(player_chesspieces=='&')
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t\t5. @");
	if(player_chesspieces=='@')
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t\t6. +");
	if(player_chesspieces=='+')
	{
		printf("\t<<<");
	}
	printf("\n");
    printf("\t\t\t7. Back\n\n");
	printf("\t\t\tyour choice:");
	scanf("%d",&playerchesspieces_choice);
	switch(playerchesspieces_choice)
	{
		case 1:
			player_chesspieces='#';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			playerchesspieces_choose_exit();
			break;
		case 2:
			player_chesspieces='$';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			playerchesspieces_choose_exit();
			break;
		case 3:
			player_chesspieces='*';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			playerchesspieces_choose_exit();
			break;
		case 4:
			player_chesspieces='&';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			playerchesspieces_choose_exit();
			break;
		case 5:
			player_chesspieces='@';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			playerchesspieces_choose_exit();
			break;
		case 6:
			player_chesspieces='+';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			playerchesspieces_choose_exit();
			break;
		case 7:
			chesspieces_choose();
            break;
		default:
			printf("\n\t\t\t!!!PLEASE INPUT THE RIGHT NUMBER!!!\n\n");
			palyer_chesspieces_choose();
	}
}

void computer_chesspieces_choose()//电脑棋子类型设置
{
	int computerchesspieces_choice;
	char computerchesspieces_process_words[100]="The chess pieces for computer is being set";
	printf("\n\t\t\t---<Chess Pieces for Computer>---\n");
	printf("\t\t\t1. #");
	if(computer_chesspieces=='#')
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t\t2. $");
	if(computer_chesspieces=='$')
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t\t3. *");
	if(computer_chesspieces=='*')
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t\t4. &");
	if(computer_chesspieces=='&')
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t\t5. @");
	if(computer_chesspieces=='@')
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t\t6. +");
	if(computer_chesspieces=='+')
	{
		printf("\t<<<");
	}
	printf("\n");
    printf("\t\t\t7. Back");
	printf("\n\n");
	printf("\t\t\tyour choice:");
	scanf("%d",&computerchesspieces_choice);
	switch(computerchesspieces_choice)
	{
		case 1:
			computer_chesspieces='#';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			computerchesspieces_choose_exit();
			break;
		case 2:
			computer_chesspieces='$';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			computerchesspieces_choose_exit();
			break;
		case 3:
			computer_chesspieces='*';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			computerchesspieces_choose_exit();
			break;
		case 4:
			computer_chesspieces='&';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			computerchesspieces_choose_exit();
			break;
		case 5:
			computer_chesspieces='@';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			computerchesspieces_choose_exit();
			break;
		case 6:
			computer_chesspieces='+';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			computerchesspieces_choose_exit();
			break;
		case 7:
			chesspieces_choose();
            break;
		default:
			printf("\n\t\t\t!!!PLEASE INPUT THE RIGHT NUMBER!!!\n");
			computer_chesspieces_choose();
	}
}

void playerchesspieces_choose_exit()//玩家棋子选择出口
{
	int playerchesspieceschoose_exit_choice;
	printf("\t\t\t1. Edit again\n");
	printf("\t\t\t2. Exit\n\n");
	printf("\t\t\tyour choice:");
	scanf("%d",&playerchesspieceschoose_exit_choice);
	switch(playerchesspieceschoose_exit_choice)
	{
		case 1:
			printf("\n");
			palyer_chesspieces_choose();
			break;
		case 2:
			printf("\n");
			chesspieces_choose();
			break;
		default:
			printf("\n");
			printf("\n\t\t\t!!!PLEASE INPUT THE RIGHT NUMBER!!!\n\n");
			playerchesspieces_choose_exit();
	}
}

void computerchesspieces_choose_exit()//电脑棋子选择出口
{
	int computerchesspieceschoose_exit_choice;
	printf("\t\t\t1. Edit again\n");
	printf("\t\t\t2. Exit\n\n");
	printf("\t\t\tyour choice:");
	scanf("%d",&computerchesspieceschoose_exit_choice);
	switch(computerchesspieceschoose_exit_choice)
	{
		case 1:
			printf("\n");
			computer_chesspieces_choose();
			break;
		case 2:
			printf("\n");
			chesspieces_choose();
			break;
		default:
			printf("\n\n\t\t\t!!!!PLEASE INPUT THE RIGHT NUMBER!!!\n\n");
			computerchesspieces_choose_exit();
	}
}


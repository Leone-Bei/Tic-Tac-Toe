#include "tic-tac-toe_v231003.h"

void game_introduction()//游戏介绍
{
	int gameintroduction_choice1;
	
	printf("\n\t--<Game Introduction>--\n\n");
	printf("\t*************\n");
	printf("\t Tic-Tac-Toe \n");
	printf("\t*************\n\n");
	printf("\tversion: 231003\n");
	printf("\tCopyright (C) 2023 by Leone Bei\n\n");
	printf("\tAll rights reserved.\n\n");	
	printf("\tIf you want more information about this game or continue to improve this game, you can\n");
	printf("\tvisit https://github.com/Leone-Bei/Tic-Tac-Toe_by_LeoneBei for source code. However, you should\n");
	printf("\ttell me about your modification in advance through e-mail (780365246@qq.com).\n\n");
	printf("\tIf you want to know how to play, please input 1; or you can input other number if \n\tyou want to exit from the game introduction.\n\n\tyour choices: ");
	scanf("%d",&gameintroduction_choice1);
	if(gameintroduction_choice1==1)
	{
		printf("\n");
		gamerule_instruction();
	}
	else
	{
		printf("\n");
		game_menu();
	}
}

void gamerule_instruction()//游戏规则指导
{
	int gameintroduction_choice2;
	printf("\t\tWhen you choose something from the menu, for example\n\n");
	printf("\t\t\t1. #\n\t\t\t2. $\n\t\t\t3. *\n\t\t\t4. &\n\t\t\t5. @\n\t\t\t6. +\n\t\t\t7. back\n\n\t\t\tyour choice:\n\n");
	Sleep(2000);
	printf("\t\tYou should input the number that the menu gives to you, or you will have to input the number \n\t\tagain until an legal number is given.\n\n");
	Sleep(2000);
	printf("\t\tNow supposing that you are playing chess with the computer and you can place your chess by \n\t\tinputing the coordinates in the terminal.\n\n");
	printf("\t\tAnd if you input an illegal number, you will also be asked to input the number again.\n\n");
	Sleep(2000);
	printf("\t\tPlease remember these rules, and try to exit from the introduction section.\n\n");
	printf("\t\tIf you input an illegal number, you will have to read the game rule instruction again.\n");
	printf("\t\tGood luck.\n\n");
	printf("\t\t\t1. exit\n\n");
	printf("\t\tyour choice: ");
	scanf("%d",&gameintroduction_choice2);
	if( gameintroduction_choice2==1)
	{
		printf("\n");
		game_menu();
	}
	else
	{
		printf("\n\n");
		gamerule_instruction();
	}
}

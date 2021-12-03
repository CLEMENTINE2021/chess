//
//  main.c
//  chess
//
//  Created by 葛文轩 on 2021/10/14.
//
#include"game.h"
#include<stdio.h>
void menu(void)
{
    printf("*********************\n");
    printf("**** 1.开始 0.退出 ****\n");
    printf("*********************\n");
}

void welcome(int input)
{
    if (input==1)
        game();
    else
        menu();
}

int main()
{
    int input=0;
    do
    {
    welcome(input);
    scanf("%d",&input);
    }while(input);
}

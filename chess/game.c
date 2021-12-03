//
//  game.c
//  chess
//
//  Created by 葛文轩 on 2021/10/22.
//
#include "game.h"
void initboard(void)
{
    int i=0,j=0;
    char c=' ';
    for(j=0;j<col;j++)
    {
    for(i=0;i<row;i++)
    {
        if(i<row-1)
    printf(" %c |",c);
        else
    printf(" %c ",c);
    }
        printf("\n");
        if(j<col-1)
        {
        for(i=0;i<row;i++)
        {
            if(i<row-1)
                printf("---|");
                else
                printf("---");
        }
        }
        printf("\n");
}
}
char display(int r,int l,int r2,int l2)
{
    int i,j,t,ter,b;
    char arr[row][col];
    char con=0;
    if (col>=row)
        ter=row;//定义获胜条件
//    while(flag==0)
//    {
    for (i=0;i<row;i++)//初始化数组
        for(j=0;j<col;j++)
        {
        arr[i][j]=' ';
        }
//        flag=1;
//    }
label:
    b=0;
    scanf("%d,%d",&r,&l);//玩家走
        getchar();
    r-=1;
    l-=1;
    srand((unsigned)time(NULL));
    arr[r][l]='X';
    r2=rand()%row;
    l2=rand()%col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[j][i]==' ')
                b=1;
        }
    }
    if (b==1)
    {
        while((arr[r2][l2])=='X'||(arr[r2][l2]=='V'))
    {
        r2=rand()%row;
        l2=rand()%col;
    }
    }
    
    arr[r2][l2]='V';
    for(j=0;j<col;j++)
    {
    for(i=0;i<row;i++)
    {
        if(i<row-1)               //打印棋盘
            printf(" %c |",arr[j][i]);
        else
    printf(" %c ",arr[j][i]);
    }
        printf("\n");
        if(j<col-1)
        {
        for(i=0;i<row;i++)
        {
            if(i<row-1)
                printf("---|");
                else
                printf("---");
        }
        }
        printf("\n");
}

    for(j=0;j<col;j++)//检查列
    {
        if (arr[0][j]=='X')
            con='X';
        else if (arr[0][j]=='V')
            con='V';
            else continue;
        t=1;
    for(i=1;i<row;i++)
    {
        if(arr[i][j]==con)
        {
            t++;
        }
            if(t==ter)
            {
                return arr[i][j];
            }
    }
    }
    for(i=0;i<row;i++)
    {
        if (arr[i][0]=='X')
            con='X';
        else if (arr[i][0]=='V')
            con='V';
            else continue;
        t=1;
        for(j=1;j<col;j++)
        {
            if(arr[i][j]==con)
            {
                t++;
            }
            if(t==ter)
            {
                return arr[i][j];
            }
        }
    }
    for(i=0;i<ter;i++)
    {
        if (arr[0][0]=='X')
            con='X';
        else if (arr[0][0]=='V')
            con='V';
    else
        break;
        t=1;
    for(i=1;i<ter;i++)
    {
        if(arr[i][i]==con)
            t++;
        if(t==ter)
        {
            return arr[i][i];
        }
    }
    }
    for(i=ter;i>0;i--)//斜杠2
    {
        if (arr[ter][ter]=='X')
            con='X';
        else if (arr[j][0]=='V')
            con='V';
            else break;
        t=1;
        for(j=ter-2;j>=0;j--)
        if(arr[j][j]==con)
            t++;
        if(t==ter)
        {
            return arr[j][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[j][i]==' ')
                b=1;
        }
    }
    if (b==1)
        goto label;
    else if (b==0)
    return ' ';
    else return 0;
}

void game(void)//主函数
{
    srand((unsigned) time(NULL));
    int r=0,l = 0;
    int r2,l2;
    initboard();//初始化面板
    
    r2=rand()%row;
    l2=rand()%col;
        switch(display(r,l,r2,l2))
        {
            case 'X':
                printf("玩家赢\n");
                break;
            case 'V':
                printf("电脑赢\n");
                break;
            case ' ':
                printf("平局\n");
                break;
}
    printf("重新开始或返回菜单\n1.重新开始 0.退出\n");
}

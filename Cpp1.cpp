#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int count1=0,count2=0,count=0;
int main ()
{
	void game();
	int n;
	while(1){
	    game();
		printf("再来一局请输入1。否则结束游戏。\n");
		count++;
		scanf("%d",&n);
		if(n!=1)break;
	}
	printf("游戏结束！\n\n");
	printf("你一共和电脑玩了 %d 盘剪刀石头布\n\n",count);
	printf("其中你赢了 %d 盘。\n输了 %d 盘。\n\n",count1,count2);
	
	system("pause");
	return 0;
}

void game()
{
	int a,b,sum=0,sum1=0;
	while(1){
		a=rand()%3;
        printf("-------------------------------------------------\n");
		printf("请输入你要出的拳（石头为 1 ，剪刀为 2 ，布为 0 ）：");
		scanf("%d",&b);
		printf("\n");
		if(b>2||b<0){
			printf("输入错误，请重新输入!\n");
		}else if(a==1){
			printf("电脑出的拳是：石头\n");
			if(b==1){
				printf("你出的拳是：石头。\n\n平局！\n\n");
			}else if(b==2){
				printf("你出的拳是：剪刀。\n\n你输了！\n\n");
				sum1++;
			}else{
				printf("你出的拳是：布。\n\n你赢了！\n\n");
				sum++;
			}
		}else if(a==2){
			printf("电脑出的拳是：剪刀\n");
			if(b==1){
				printf("你出的拳是：石头。\n\n你赢了！\n\n");
				sum++;
			}else if(b==2){
				printf("你出的拳是：剪刀。\n\n平局！\n\n");
			}else{
				printf("你出的拳是：布。\n\n你输了！\n\n");
				sum1++;
			}		
		}else{
			printf("电脑出的拳是：布\n");
			if(b==1){
				printf("你出的拳是：石头。\n\n你输了！\n\n");
				sum1++;
			}else if(b==2){
				printf("你出的拳是：剪刀。\n\n你赢了！\n\n");
				sum++;
			}else{
				printf("你出的拳是：布。\n\n平局！\n\n");
			}			
		}
		if(sum==3||sum1==3){
			if(sum==3){
				printf("------------------------------------------------------\n\n");
				printf("		你赢了电脑！\n\n");
				printf("------------------------------------------------------\n");
				count1++;
			}else{
				printf("------------------------------------------------------\n\n");
				printf("		电脑赢了你！\n\n");
				printf("------------------------------------------------------\n");
				count2++;
			}
			break;
		}
	}	

}
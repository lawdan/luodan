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
		printf("����һ��������1�����������Ϸ��\n");
		count++;
		scanf("%d",&n);
		if(n!=1)break;
	}
	printf("��Ϸ������\n\n");
	printf("��һ���͵������� %d �̼���ʯͷ��\n\n",count);
	printf("������Ӯ�� %d �̡�\n���� %d �̡�\n\n",count1,count2);
	
	system("pause");
	return 0;
}

void game()
{
	int a,b,sum=0,sum1=0;
	while(1){
		a=rand()%3;
        printf("-------------------------------------------------\n");
		printf("��������Ҫ����ȭ��ʯͷΪ 1 ������Ϊ 2 ����Ϊ 0 ����");
		scanf("%d",&b);
		printf("\n");
		if(b>2||b<0){
			printf("�����������������!\n");
		}else if(a==1){
			printf("���Գ���ȭ�ǣ�ʯͷ\n");
			if(b==1){
				printf("�����ȭ�ǣ�ʯͷ��\n\nƽ�֣�\n\n");
			}else if(b==2){
				printf("�����ȭ�ǣ�������\n\n�����ˣ�\n\n");
				sum1++;
			}else{
				printf("�����ȭ�ǣ�����\n\n��Ӯ�ˣ�\n\n");
				sum++;
			}
		}else if(a==2){
			printf("���Գ���ȭ�ǣ�����\n");
			if(b==1){
				printf("�����ȭ�ǣ�ʯͷ��\n\n��Ӯ�ˣ�\n\n");
				sum++;
			}else if(b==2){
				printf("�����ȭ�ǣ�������\n\nƽ�֣�\n\n");
			}else{
				printf("�����ȭ�ǣ�����\n\n�����ˣ�\n\n");
				sum1++;
			}		
		}else{
			printf("���Գ���ȭ�ǣ���\n");
			if(b==1){
				printf("�����ȭ�ǣ�ʯͷ��\n\n�����ˣ�\n\n");
				sum1++;
			}else if(b==2){
				printf("�����ȭ�ǣ�������\n\n��Ӯ�ˣ�\n\n");
				sum++;
			}else{
				printf("�����ȭ�ǣ�����\n\nƽ�֣�\n\n");
			}			
		}
		if(sum==3||sum1==3){
			if(sum==3){
				printf("------------------------------------------------------\n\n");
				printf("		��Ӯ�˵��ԣ�\n\n");
				printf("------------------------------------------------------\n");
				count1++;
			}else{
				printf("------------------------------------------------------\n\n");
				printf("		����Ӯ���㣡\n\n");
				printf("------------------------------------------------------\n");
				count2++;
			}
			break;
		}
	}	

}
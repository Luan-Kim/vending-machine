#include <stdio.h>
	
void sel(){
	
	printf("-------------�޴�-------------\n");
	printf("1. �ݶ�\n");
	printf("2. ���̴�\n");
	printf("3. ȯŸ\n");
	printf("4. �ܹ���\n");
	printf("5. �ҽ���\n");
	printf("6. ����\n");
	 
}

void error(){
	printf("�ܾ��� �����մϴ�. ��ȯ �Ǵ� �ܵ��� �޾ư��ʽÿ�.");
}

void zero(){
	printf("\n\n");
	printf("�ش� ��ǰ�� ��� ��� �����Ǿ����ϴ�.");
}

int main(){
	int cash;
	int num;
	int i, selmenu;
	char *menu[6] = {"�ݶ�", "���̴�", "ȯŸ", "�ܹ���", "�ҽ���", "����"};
	int cost[5] = {700, 700, 800, 2500, 1200};
	int stock[5] = {1, 6, 2, 10, 7};
	
	while(1){
		printf("\n\n");
		sel();
		printf("------------------------------\n");
		printf("������ �Ա����ּ���. : ");
		scanf("%d", &cash);
		printf("\n");
		printf("���� �Աݵ� �ݾ��� %d���Դϴ�.\n" , cash);
		printf("\n");
		printf("�޴��� �������ּ��� : ");
		scanf("%d", &selmenu);
		printf("\n"); 
		printf("���õ� �޴��� %d���Դϴ�.\a ",selmenu);
		
		if(selmenu == 1){
			if(cash >= 700){
			printf("�ݶ� ����Ǿ����ϴ�.\n");
			printf("\n");
			printf("���� �ܾ��� %d���Դϴ�. ��ȯ�Ǵ� �ܵ��� �޾ư��ʽÿ�", cash - 700);
			stock[0] = stock[0] - 1;
				if (stock[0] == 0)
					zero();				
			}
			else
				error();
		}
		
		else if(selmenu == 2){
			if(cash >= 700){
			printf("���̴ٰ� ����Ǿ����ϴ�.\n");
			printf("\n");
			printf("���� �ܾ��� %d���Դϴ�. ��ȯ�Ǵ� �ܵ��� �޾ư��ʽÿ�", cash - 700);
			stock[1] - 1;
				if (stock[1] == 0)
					zero();
			}
			else
				error();
		}
		
		else if(selmenu == 3){
			if(cash >= 800){
			printf("ȯŸ�� ����Ǿ����ϴ�.\n");
			printf("\n");
			printf("���� �ܾ��� %d���Դϴ�. ��ȯ�Ǵ� �ܵ��� �޾ư��ʽÿ�", cash - 800);
			stock[2] -1;
				if (stock[2] == 0)
					zero();
			}
			else
				error();	
		}
		
		else if(selmenu == 4){
			if(cash >= 2500){
			printf("�ܹ��Ű� ����Ǿ����ϴ�.\n");
			printf("\n");
			printf("���� �ܾ��� %d���Դϴ�. ��ȯ�Ǵ� �ܵ��� �޾ư��ʽÿ�", cash - 2500);
			stock[3] - 1;
				if (stock[3] == 0)
					zero();
			}
			else
				error();
		}
		
		else if(selmenu == 5){
			if(cash >= 1200){
			printf("�ҽ����� ����Ǿ����ϴ�.\n");
			printf("\n");
			printf("���� �ܾ��� %d���Դϴ�. ��ȯ�Ǵ� �ܵ��� �޾ư��ʽÿ�", cash - 1200);
			stock[4] - 1;
				if (stock[4] == 0)
					zero();
			}
			else
				error();
		}
		
		else{
			printf("��ȯ�Ǵ� ���� %d���� �����ʽÿ�.", cash);
			printf(" �̿����ּż� �����մϴ�!");
			cash = 0;
		}
	}
}

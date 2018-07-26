#include <stdio.h>
	
void sel(){
	
	printf("-------------메뉴-------------\n");
	printf("1. 콜라\n");
	printf("2. 사이다\n");
	printf("3. 환타\n");
	printf("4. 햄버거\n");
	printf("5. 소시지\n");
	printf("6. 종료\n");
	 
}

void error(){
	printf("잔액이 부족합니다. 반환 되는 잔돈을 받아가십시오.");
}

void zero(){
	printf("\n\n");
	printf("해당 상품의 재고가 모두 소진되었습니다.");
}

int main(){
	int cash;
	int num;
	int i, selmenu;
	char *menu[6] = {"콜라", "사이다", "환타", "햄버거", "소시지", "종료"};
	int cost[5] = {700, 700, 800, 2500, 1200};
	int stock[5] = {1, 6, 2, 10, 7};
	
	while(1){
		printf("\n\n");
		sel();
		printf("------------------------------\n");
		printf("현금을 입금해주세요. : ");
		scanf("%d", &cash);
		printf("\n");
		printf("현재 입금된 금액은 %d원입니다.\n" , cash);
		printf("\n");
		printf("메뉴를 선택해주세요 : ");
		scanf("%d", &selmenu);
		printf("\n"); 
		printf("선택된 메뉴는 %d번입니다.\a ",selmenu);
		
		if(selmenu == 1){
			if(cash >= 700){
			printf("콜라가 배출되었습니다.\n");
			printf("\n");
			printf("남은 잔액은 %d원입니다. 반환되는 잔돈을 받아가십시오", cash - 700);
			stock[0] = stock[0] - 1;
				if (stock[0] == 0)
					zero();				
			}
			else
				error();
		}
		
		else if(selmenu == 2){
			if(cash >= 700){
			printf("사이다가 배출되었습니다.\n");
			printf("\n");
			printf("남은 잔액은 %d원입니다. 반환되는 잔돈을 받아가십시오", cash - 700);
			stock[1] - 1;
				if (stock[1] == 0)
					zero();
			}
			else
				error();
		}
		
		else if(selmenu == 3){
			if(cash >= 800){
			printf("환타가 배출되었습니다.\n");
			printf("\n");
			printf("남은 잔액은 %d원입니다. 반환되는 잔돈을 받아가십시오", cash - 800);
			stock[2] -1;
				if (stock[2] == 0)
					zero();
			}
			else
				error();	
		}
		
		else if(selmenu == 4){
			if(cash >= 2500){
			printf("햄버거가 배출되었습니다.\n");
			printf("\n");
			printf("남은 잔액은 %d원입니다. 반환되는 잔돈을 받아가십시오", cash - 2500);
			stock[3] - 1;
				if (stock[3] == 0)
					zero();
			}
			else
				error();
		}
		
		else if(selmenu == 5){
			if(cash >= 1200){
			printf("소시지가 배출되었습니다.\n");
			printf("\n");
			printf("남은 잔액은 %d원입니다. 반환되는 잔돈을 받아가십시오", cash - 1200);
			stock[4] - 1;
				if (stock[4] == 0)
					zero();
			}
			else
				error();
		}
		
		else{
			printf("반환되는 현금 %d원을 받으십시오.", cash);
			printf(" 이용해주셔서 감사합니다!");
			cash = 0;
		}
	}
}

#include <stdio.h>
#include <string.h>

char new_page();
void all_print_page();
void find_page();

//char list[1000]; //count = strlen(list[1000]);
int num;
int i = 0;

struct date { //페이지 구조체
	int year[5];
	int month[3];
	int day[3];
	int count;
	char *text[100];
};


int main() {
	while (1) {
		printf("1.페이지 추가 2.페이지 정렬 3.페이지 삭제 4.페이지 검색 5.페이지 수정 0.종료 \n");
		printf("몇 번째를 선택하시겠습니까?");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("페이지 추가\n");
			new_page();
			
			i++;
			
			break;

		case 2: 
			printf("페이지 정렬\n");
			all_print_page();
			break;

		case 3:
			printf("페이지 삭제\n");
			break;
	
		case 4:
			printf("페이지 검색\n");
			find_page();
			break;
		
		case 5:
			printf("페이지 수정\n");
			break;
		
		case 6:
			printf("종료합니다.\n");
			return 0;
			}
		}
	return 0;
}
char new_page() {
	struct date date_diary[100] = {1};


			printf("년도를 입력해주세요:");
			scanf("%d", &date_diary[i].year);
			printf("월을 입력해주세요:");
			scanf("%d", &date_diary[i].month);
			printf("일을 입력해주세요:");
			scanf("%d", &date_diary[i].day);
			printf("내용을 입력하세요:");
			getchar();
			//scanf("%[^\n]s", &text);
			fgets(date_diary[i].text, 100, stdin);


		printf("[%d] : %d년%d월%d일 : %s",date_diary[i].count, date_diary[i].year, date_diary[i].month, date_diary[i].day , date_diary[i].text);
		printf("------------------------------------------------\n");
		
		return 0;
	}
void all_print_page() {
	int j;
	struct date date_diary[100];

	if (i >= 1){
		printf("현재 다이어리에 있는 모든 일정입니다.\n");
		for(j = 0 ; j < i ; j++){
			printf("[%d] :  %d년%d월%d일 : %d\n", date_diary[i].count, date_diary[i].year, date_diary[i].month, date_diary[i].day, date_diary[i].text);
			}
		}
	else {
		printf("현재 다이어리에는 일정이 없습니다.\n");
		}
	}
void find_page() {
	int find;
	printf("검색할 것을 골라주세요:");
	printf("1. 년도 검색 2.월 검색 3.일 검색 4.내용 검색");	
	scanf("%d", &find);
	switch (find)
	{
	case 1:
		printf("년도를 입력해주세요:");
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	}
}

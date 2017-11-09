#include <stdio.h>
#include <string.h>
int d = 0;

void new_page();
void all_print_page();
void find_page();
void modified_page();
void delete_page(d);


//char list[1000]; //count = strlen(list[1000]);
int num;
int i = 0;
int a = 1;


struct date { //페이지 구조체
	int d;
	int year;
	int month;
	int day;
	int count;
	int give;
	char give_t[100];
	char text[100];
};
struct date date_diary[100];
int main() {
	while (1) {
		printf("1.페이지 추가 2.페이지 정렬 3.페이지 삭제 4.페이지 검색 5.페이지 수정 6.종료 \n");
		printf("몇 번째를 선택하시겠습니까?");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("페이지 추가\n");
			new_page();
			
			i++;
			a++;

			break;

		case 2: 
			printf("페이지 정렬\n");
			all_print_page();
			break;

		case 3:
			printf("페이지 삭제\n");
			delete_page(d);
			break;
	
		case 4:
			printf("페이지 검색\n");
			find_page();
			break;
		
		case 5:
			printf("페이지 수정\n");
			modified_page();
			break;
		
		case 6:
			printf("종료합니다.\n");
			return 0;
			}
		}
	return 0;
}
void new_page() {
			
			date_diary[i].count = a;
			//printf("%d",date_diary[i].count);
			printf("년도를 입력해주세요:");
			scanf("%d", &date_diary[i].year);
			//printf("%d", date_diary[i].year);
			printf("월을 입력해주세요:");
			scanf("%d", &date_diary[i].month);
			printf("일을 입력해주세요:");
			scanf("%d", &date_diary[i].day);
			printf("내용을 입력하세요:");
			getchar();
			//scanf("%[^\n]s", &text);
			fgets(date_diary[i].text, 100 , stdin);
			

		printf("[%d] : %d년%d월%d일 : %s",date_diary[i].count, date_diary[i].year, date_diary[i].month, date_diary[i].day , date_diary[i].text);
		printf("------------------------------------------------\n");
		
		return 0;
	}
void all_print_page() {
	int j;

	if (i >= 1){
		printf("현재 다이어리에 있는 모든 일정입니다.\n");
				for (j = 0; j < i; j++) {
					if (date_diary[j].count > 0){
						printf("[%d] :  %d년%d월%d일 : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
					}
				}
	}
	else {
		printf("현재 다이어리에는 일정이 없습니다.\n");
		}
	}
void find_page() {
	struct date seach;
	int find;
	int j;
	int k = 0;
	printf("검색할 것을 골라주세요:\n");
	printf("1. 년도 검색 2.월 검색 3.일 검색 4.내용 검색");	
	scanf("%d", &find);
	switch (find)
	{
	case 1:
		printf("년도를 입력해주세요:");
		scanf("%d", &seach.year);
		for (j = 0; j < i; j++) {
			if (seach.year == date_diary[j].year && date_diary[j].count > 0) {
				printf("[%d] :  %d년%d월%d일 : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
				k = 1;
			}
		}
		if (k == 0) {
			printf("일정이 없습니다.");
			k = 0;
		}
		break;
	case 2:
		printf("년도를 입력해주세요 :");
		scanf("%d", &seach.year);
		printf("월을 입력하세요:");
		scanf("%d", &seach.month);
		for (j = 0; j < i; j++) {
			if (seach.year == date_diary[j].year && seach.month == date_diary[j].month && date_diary[j].count > 0) {
				printf("[%d] :  %d년%d월%d일 : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
				k = 1;
			}
		}
		if (k == 0) {
			printf("일정이 없습니다.");
			k = 0;
		}
		break;
	case 3:
		printf("년도를 입력하세요 :");
		scanf("%d", &seach.year);
		printf("월을 입력하세요:");
		scanf("%d", &seach.month);
		printf("일을 입력하세요:");
		scanf("%d", &seach.day);
		for (j = 0; j < i; j++) {
			if (seach.year == date_diary[j].year && seach.month == date_diary[j].month && seach.day == date_diary[j].day && date_diary[j].count > 0) {
				printf("[%d] :  %d년%d월%d일 : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
				k = 1;
			}
		}
		if (k == 0) {
			printf("일정이 없습니다.");
			k = 0;
		}
		break;
	case 4:
		printf("내용을 입력하세요:");
		getchar();
		//scanf("%[^\n]s", &text);
		fgets(seach.text, 100, stdin);

		for (j = 0; j < i; j++) {
			if (strcmp(seach.text,date_diary[j].text) == 0 && date_diary[j].count > 0) {
				printf("[%d] :  %d년%d월%d일 : %s\n", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
				k = 1;
			}
			break;
		}
		if (k == 0) {
			printf("일정이 없습니다.");
			k = 0;
		}
	}
}
void delete_page(int d) {
	struct date delete;

	int j = 0;
	int k = 0;
	int size = 0;
	
	printf("삭제하실 일정을 입력해주세요:\n");
	getchar();
	fgets(delete.text, 100, stdin);

	for (j = 0; j < i; j++) {
		if (strcmp(delete.text, date_diary[j].text) == 0) {
			printf("[%d] :  %d년%d월%d일 : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
			k = 1;
			break;
		}
	}
	if (k == 1) {
		for (j; j < i + 1; j++) {
			memcpy(&date_diary[j], &date_diary[j + 1], (sizeof(date_diary[j])));
			date_diary[j].count = date_diary[j].count - 1;
		}
	}
		if (k == 0) {
			printf("일정이 없습니다.");
		}
			}
void modified_page() {
	struct date change;

	int mod;
	int select;
	int k = 0;
	int j = 0;

	printf("1.날짜를 입력하여 수정하기 2.내용을 입력하여 수정하기");
	scanf("%d", &select);
	if (select == 1) {
		printf("찾으실 날짜를 입력해주세요\n");
		printf("년도를 입력해주세요:");
		scanf("%d", &change.year);
		printf("달을 입력해주세요:");
		scanf("%d", &change.month);
		printf("일을 입력해주세요:");
		scanf("%d", &change.day);

		for (j = 0; j < i; j++) {
			if (change.year == date_diary[j].year && change.month == date_diary[j].month && change.day == date_diary[j].day && date_diary[j].count > 0) {
				printf("[%d] :  %d년%d월%d일 : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
				k = 1;
				break;
			}
		}
		if (k == 0) {
			printf("일치하는 일정이 없습니다.\n");
			k = 0;
		}
		if (k == 1) {
			printf("1. 년도 수정 2.월 수정 3.일 수정 4.내용 수정");
			scanf("%d", &mod);
			if (mod == 1) {
				printf("바꾸실 년도를 입력하세요 :");

				date_diary[j].give = date_diary[j].year;


				scanf("%d", &date_diary[j].year);
				printf("%d -> %d 로 바뀌였습니다.", date_diary[j].give , date_diary[j].year);
			}
			if (mod == 2) {
				printf("바꾸실 월을 입력하세요 :");

				date_diary[j].give = date_diary[j].year;


				scanf("%d", &date_diary[j].month);
				printf("%d -> %d 로 바뀌였습니다.", date_diary[j].give, date_diary[j].month);
			}
			if (mod == 3) {
				printf("바꾸실 일을 입력하세요 :");

				date_diary[j].give = date_diary[j].day;


				scanf("%d", &date_diary[j].day);
				printf("%d -> %d 로 바뀌였습니다.", date_diary[j].give, date_diary[j].day);
			}
			if (mod == 4) {
				printf("바꾸실 내용을 입력하세요 :");

				strncpy(date_diary[j].give_t,date_diary[j].text,(sizeof(date_diary[j].text)/sizeof(char)));

				getchar();
				fgets(date_diary[j].text, 100, stdin);
				printf("%s -> %s 로 바뀌였습니다.", date_diary[j].give_t, date_diary[j].text);
			}
		}
	}
	if (k == 1) {
		if (select == 2) {
			printf("찾으실 내용을 입력해주세요:");
			fgets(change.text, 100, stdin);

			printf("1. 년도 수정 2.월 수정 3.일 수정 4.내용 수정");
			scanf("%d", &mod);
			if (mod == 1) {

			}
			if (mod == 2) {

			}
			if (mod == 3) {

			}
			if (mod == 4) {

			}
		}
	}
}

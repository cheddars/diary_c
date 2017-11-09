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


struct date { //������ ����ü
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
		printf("1.������ �߰� 2.������ ���� 3.������ ���� 4.������ �˻� 5.������ ���� 6.���� \n");
		printf("�� ��°�� �����Ͻðڽ��ϱ�?");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("������ �߰�\n");
			new_page();
			
			i++;
			a++;

			break;

		case 2: 
			printf("������ ����\n");
			all_print_page();
			break;

		case 3:
			printf("������ ����\n");
			delete_page(d);
			break;
	
		case 4:
			printf("������ �˻�\n");
			find_page();
			break;
		
		case 5:
			printf("������ ����\n");
			modified_page();
			break;
		
		case 6:
			printf("�����մϴ�.\n");
			return 0;
			}
		}
	return 0;
}
void new_page() {
			
			date_diary[i].count = a;
			//printf("%d",date_diary[i].count);
			printf("�⵵�� �Է����ּ���:");
			scanf("%d", &date_diary[i].year);
			//printf("%d", date_diary[i].year);
			printf("���� �Է����ּ���:");
			scanf("%d", &date_diary[i].month);
			printf("���� �Է����ּ���:");
			scanf("%d", &date_diary[i].day);
			printf("������ �Է��ϼ���:");
			getchar();
			//scanf("%[^\n]s", &text);
			fgets(date_diary[i].text, 100 , stdin);
			

		printf("[%d] : %d��%d��%d�� : %s",date_diary[i].count, date_diary[i].year, date_diary[i].month, date_diary[i].day , date_diary[i].text);
		printf("------------------------------------------------\n");
		
		return 0;
	}
void all_print_page() {
	int j;

	if (i >= 1){
		printf("���� ���̾�� �ִ� ��� �����Դϴ�.\n");
				for (j = 0; j < i; j++) {
					if (date_diary[j].count > 0){
						printf("[%d] :  %d��%d��%d�� : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
					}
				}
	}
	else {
		printf("���� ���̾���� ������ �����ϴ�.\n");
		}
	}
void find_page() {
	struct date seach;
	int find;
	int j;
	int k = 0;
	printf("�˻��� ���� ����ּ���:\n");
	printf("1. �⵵ �˻� 2.�� �˻� 3.�� �˻� 4.���� �˻�");	
	scanf("%d", &find);
	switch (find)
	{
	case 1:
		printf("�⵵�� �Է����ּ���:");
		scanf("%d", &seach.year);
		for (j = 0; j < i; j++) {
			if (seach.year == date_diary[j].year && date_diary[j].count > 0) {
				printf("[%d] :  %d��%d��%d�� : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
				k = 1;
			}
		}
		if (k == 0) {
			printf("������ �����ϴ�.");
			k = 0;
		}
		break;
	case 2:
		printf("�⵵�� �Է����ּ��� :");
		scanf("%d", &seach.year);
		printf("���� �Է��ϼ���:");
		scanf("%d", &seach.month);
		for (j = 0; j < i; j++) {
			if (seach.year == date_diary[j].year && seach.month == date_diary[j].month && date_diary[j].count > 0) {
				printf("[%d] :  %d��%d��%d�� : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
				k = 1;
			}
		}
		if (k == 0) {
			printf("������ �����ϴ�.");
			k = 0;
		}
		break;
	case 3:
		printf("�⵵�� �Է��ϼ��� :");
		scanf("%d", &seach.year);
		printf("���� �Է��ϼ���:");
		scanf("%d", &seach.month);
		printf("���� �Է��ϼ���:");
		scanf("%d", &seach.day);
		for (j = 0; j < i; j++) {
			if (seach.year == date_diary[j].year && seach.month == date_diary[j].month && seach.day == date_diary[j].day && date_diary[j].count > 0) {
				printf("[%d] :  %d��%d��%d�� : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
				k = 1;
			}
		}
		if (k == 0) {
			printf("������ �����ϴ�.");
			k = 0;
		}
		break;
	case 4:
		printf("������ �Է��ϼ���:");
		getchar();
		//scanf("%[^\n]s", &text);
		fgets(seach.text, 100, stdin);

		for (j = 0; j < i; j++) {
			if (strcmp(seach.text,date_diary[j].text) == 0 && date_diary[j].count > 0) {
				printf("[%d] :  %d��%d��%d�� : %s\n", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
				k = 1;
			}
			break;
		}
		if (k == 0) {
			printf("������ �����ϴ�.");
			k = 0;
		}
	}
}
void delete_page(int d) {
	struct date delete;

	int j = 0;
	int k = 0;
	int size = 0;
	
	printf("�����Ͻ� ������ �Է����ּ���:\n");
	getchar();
	fgets(delete.text, 100, stdin);

	for (j = 0; j < i; j++) {
		if (strcmp(delete.text, date_diary[j].text) == 0) {
			printf("[%d] :  %d��%d��%d�� : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
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
			printf("������ �����ϴ�.");
		}
			}
void modified_page() {
	struct date change;

	int mod;
	int select;
	int k = 0;
	int j = 0;

	printf("1.��¥�� �Է��Ͽ� �����ϱ� 2.������ �Է��Ͽ� �����ϱ�");
	scanf("%d", &select);
	if (select == 1) {
		printf("ã���� ��¥�� �Է����ּ���\n");
		printf("�⵵�� �Է����ּ���:");
		scanf("%d", &change.year);
		printf("���� �Է����ּ���:");
		scanf("%d", &change.month);
		printf("���� �Է����ּ���:");
		scanf("%d", &change.day);

		for (j = 0; j < i; j++) {
			if (change.year == date_diary[j].year && change.month == date_diary[j].month && change.day == date_diary[j].day && date_diary[j].count > 0) {
				printf("[%d] :  %d��%d��%d�� : %s", date_diary[j].count, date_diary[j].year, date_diary[j].month, date_diary[j].day, date_diary[j].text);
				k = 1;
				break;
			}
		}
		if (k == 0) {
			printf("��ġ�ϴ� ������ �����ϴ�.\n");
			k = 0;
		}
		if (k == 1) {
			printf("1. �⵵ ���� 2.�� ���� 3.�� ���� 4.���� ����");
			scanf("%d", &mod);
			if (mod == 1) {
				printf("�ٲٽ� �⵵�� �Է��ϼ��� :");

				date_diary[j].give = date_diary[j].year;


				scanf("%d", &date_diary[j].year);
				printf("%d -> %d �� �ٲ���ϴ�.", date_diary[j].give , date_diary[j].year);
			}
			if (mod == 2) {
				printf("�ٲٽ� ���� �Է��ϼ��� :");

				date_diary[j].give = date_diary[j].year;


				scanf("%d", &date_diary[j].month);
				printf("%d -> %d �� �ٲ���ϴ�.", date_diary[j].give, date_diary[j].month);
			}
			if (mod == 3) {
				printf("�ٲٽ� ���� �Է��ϼ��� :");

				date_diary[j].give = date_diary[j].day;


				scanf("%d", &date_diary[j].day);
				printf("%d -> %d �� �ٲ���ϴ�.", date_diary[j].give, date_diary[j].day);
			}
			if (mod == 4) {
				printf("�ٲٽ� ������ �Է��ϼ��� :");

				strncpy(date_diary[j].give_t,date_diary[j].text,(sizeof(date_diary[j].text)/sizeof(char)));

				getchar();
				fgets(date_diary[j].text, 100, stdin);
				printf("%s -> %s �� �ٲ���ϴ�.", date_diary[j].give_t, date_diary[j].text);
			}
		}
	}
	if (k == 1) {
		if (select == 2) {
			printf("ã���� ������ �Է����ּ���:");
			fgets(change.text, 100, stdin);

			printf("1. �⵵ ���� 2.�� ���� 3.�� ���� 4.���� ����");
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

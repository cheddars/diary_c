#include <stdio.h>
#include <string.h>

char new_page();
void all_print_page();
void find_page();

//char list[1000]; //count = strlen(list[1000]);
int num;
int i = 0;

struct date { //������ ����ü
	int year[5];
	int month[3];
	int day[3];
	int count;
	char *text[100];
};


int main() {
	while (1) {
		printf("1.������ �߰� 2.������ ���� 3.������ ���� 4.������ �˻� 5.������ ���� 0.���� \n");
		printf("�� ��°�� �����Ͻðڽ��ϱ�?");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("������ �߰�\n");
			new_page();
			
			i++;
			
			break;

		case 2: 
			printf("������ ����\n");
			all_print_page();
			break;

		case 3:
			printf("������ ����\n");
			break;
	
		case 4:
			printf("������ �˻�\n");
			find_page();
			break;
		
		case 5:
			printf("������ ����\n");
			break;
		
		case 6:
			printf("�����մϴ�.\n");
			return 0;
			}
		}
	return 0;
}
char new_page() {
	struct date date_diary[100] = {1};


			printf("�⵵�� �Է����ּ���:");
			scanf("%d", &date_diary[i].year);
			printf("���� �Է����ּ���:");
			scanf("%d", &date_diary[i].month);
			printf("���� �Է����ּ���:");
			scanf("%d", &date_diary[i].day);
			printf("������ �Է��ϼ���:");
			getchar();
			//scanf("%[^\n]s", &text);
			fgets(date_diary[i].text, 100, stdin);


		printf("[%d] : %d��%d��%d�� : %s",date_diary[i].count, date_diary[i].year, date_diary[i].month, date_diary[i].day , date_diary[i].text);
		printf("------------------------------------------------\n");
		
		return 0;
	}
void all_print_page() {
	int j;
	struct date date_diary[100];

	if (i >= 1){
		printf("���� ���̾�� �ִ� ��� �����Դϴ�.\n");
		for(j = 0 ; j < i ; j++){
			printf("[%d] :  %d��%d��%d�� : %d\n", date_diary[i].count, date_diary[i].year, date_diary[i].month, date_diary[i].day, date_diary[i].text);
			}
		}
	else {
		printf("���� ���̾���� ������ �����ϴ�.\n");
		}
	}
void find_page() {
	int find;
	printf("�˻��� ���� ����ּ���:");
	printf("1. �⵵ �˻� 2.�� �˻� 3.�� �˻� 4.���� �˻�");	
	scanf("%d", &find);
	switch (find)
	{
	case 1:
		printf("�⵵�� �Է����ּ���:");
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	}
}

#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	int month;
	printf("월 입력(1~12):");
	scanf("%d", &month);

	switch (month) {

		
	case 2:
		printf("28일 또는 29일입니다\n");
		break;
		
	case 1: case 3: case 5: case 7:
	case 8: case 10: case 12:
		printf("31일입니다.\n");
		break;

	case 4: case 6: case 9: case 11:
		printf("30일입니다.\n");
		break;
	default:
		printf("존재하지 않는 달입니다\n");

	

	}




	return 0;


}

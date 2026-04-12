#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	char name[20];
	int age;
	float height;
	printf("이름을 입력하세요 ");
	scanf("%s", &name);
	printf("나이를 입력하세요 ");
	scanf("%d", &age);
	printf("키를 입력하세요 ");
	scanf("%f", &height);
	printf("%s님의 나이는 %d세, 키는 %.2lfcm입니다", name, age, height);

	return 0;

}

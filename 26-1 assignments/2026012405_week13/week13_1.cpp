#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct Student {
    char name[20];
    char id[10];
    float gpa;
    char major[20];
    char career[20];
};

int main() {

    struct Student s[5];

    strcpy(s[0].name, "Kim");    strcpy(s[0].id, "0052029"); s[0].gpa = 4.2; strcpy(s[0].major, "Commerce"); strcpy(s[0].career, "WebDesign");
    strcpy(s[1].name, "Lim");    strcpy(s[1].id, "0052030"); s[1].gpa = 4.3; strcpy(s[1].major, "Commerce"); strcpy(s[1].career, "Employ");
    strcpy(s[2].name, "ImBo");   strcpy(s[2].id, "0052031"); s[2].gpa = 4.3; strcpy(s[2].major, "Commerce"); strcpy(s[2].career, "WebDesign");
    strcpy(s[3].name, "Seo");    strcpy(s[3].id, "0052032"); s[3].gpa = 3.5; strcpy(s[3].major, "Commerce"); strcpy(s[3].career, "WebMaster");
    strcpy(s[4].name, "Choi");   strcpy(s[4].id, "0052033"); s[4].gpa = 3.7; strcpy(s[4].major, "Commerce"); strcpy(s[4].career, "DB Admin");

    printf("Name       ID          GPA   Major        Career\n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-10s %-12s %-6.1f %-13s %-10s\n",
            s[i].name, s[i].id, s[i].gpa, s[i].major, s[i].career);
    }

    return 0;
}
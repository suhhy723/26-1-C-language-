#include <stdio.h>
#include <stdarg.h>

void printvar(const char* szTypes, ...);

void printvar(const char* szTypes, ...)
{
    va_list ap;
    va_start(ap, szTypes);

    int i = 0;
    while (szTypes[i] != '\0')
    {
        if (szTypes[i] == 's')
        {
            char* str = va_arg(ap, char*);
            printf("%s ", str);
        }
        else if (szTypes[i] == 'c')
        {
            char ch = va_arg(ap, int);
            printf("%c ", ch);
        }
        else if (szTypes[i] == 'f')
        {
            double num = va_arg(ap, double);
            printf("%f ", num);
        }
        else if (szTypes[i] == 'd')
        {
            int num = va_arg(ap, int);
            printf("%d ", num);
        }
        i++;
    }
    printf("\n");

    va_end(ap);
}

int main()
{
    printvar("scfd", "Pi", 'P', 3.14, 4);

    return 0;
}
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Ru.866");
    printf("Привет, мир!");
}

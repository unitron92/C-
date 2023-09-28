#include<iostream>
#include<string.h>

int main()
{
    char str[] = "Bircan knows function memset";
    memset(str, '-',6);
    puts(str);
}

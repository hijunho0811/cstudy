#include <stdio.h>
int main()
{
    FILE *file_pointer;
    file_pointer=fopen("a.txt", "w");
    fclose(file_pointer);
}
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Usage: cat filename [filename ...]\n");
        return 1;
    }
    
    for (int i = 1; i < argc; i++)
    {
        // TODO: open argv[i] and print its contents to stdout
        FILE *file = fopen(argv[i], "r");
        int x;
        while ((x = fgetc(file)) != EOF)
        {
            printf("%c", x);
        }
        fclose(file);
    }
    
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    fptr = fopen("input.txt","r");

    char content[1000];

    if(fptr!= NULL)
    {
      fgets(content,1000,fptr);
    printf("%s",content);
    }
    else
    {
        printf("file opening unsuccesfull\n");
    }
fclose(fptr);
}

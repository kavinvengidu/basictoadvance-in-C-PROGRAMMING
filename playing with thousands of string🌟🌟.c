#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

void printFirstWord(char string[])
{
    int i;

for(i = 0; i < (string[i] != '\0'); i++)
    {
    if(isalpha(string[i]))
        printf("%c", string[i]);
    }


}

int main()
{

char string[MAX];
printf("Type in a scentence");
gets(string);
printFirstWord(string);


return 0;
}

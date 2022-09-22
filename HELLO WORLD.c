#include <stdio.h>
#include<stdlib.h>



int main() 
{
    
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n%s\t", s);
      
        
    return 0;
}

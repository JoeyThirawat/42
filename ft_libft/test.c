#include <stdio.h>

int ft_strlen(char *inStr)
{
    int count = 0;
    int i = 0;
    char noteStr;
    
    noteStr = inStr[0];
    
    while (noteStr != '\0')
    {
        count++;
        noteStr = inStr[++i];
    }
    
    return count;
}

int main() {
    
    char word[10] = "Hello42";
    printf("%d", ft_strlen(word));
    printf("\n\n");

    return 0;
}
#include <stdio.h>

int main()
{
    char str,a;
    int i, words;
    printf("Enter any string: ");
    scanf("%c",&str);
    i = 0;
    words = 1;
    while(str[i] != '\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }

        i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}

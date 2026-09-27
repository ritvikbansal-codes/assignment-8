#include <stdio.h>
int main()
{
    char strl[200], str2[100];
    int i = 0, j = 0;
    printf("Enter first string: ");
    fgets(strl, sizeof(strl), stdin);
    while (strl[i] != '\0' && strl[i] != '\n')
    {
        j++;
    }
    str2[j] = '\0';
    j = 0;
    while (str2[j] != '\0')
    {
        j++;
    }
    strl[i] = '\0';
    printf("Concatenated string: %s", strl);
    return 0;
}
//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int i = 0;
    while (name[i] != '\0')
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            int j = i;

            while (name[j] != '\0' && name[j] != ' ')
                j++;

            if (name[j] != '\0')
                printf("%c.", name[i]);
        }
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        if (name[j] == ' ')
        {
            printf(" %s", &name[j + 1]);
            break;
        }
    }
    printf("\n");
    return 0;
}
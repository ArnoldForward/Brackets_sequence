#include <stdio.h>

int main()
{
    char line[100000] = {0};
    gets(line);
    int len = 0;
    for(int i = 0; line[i] != '\0'; i++)
        len++;
    while(1)
    {
        int trig = 0;
        for(int i = 0; i < len; i++)
            if((line[i] == '(' && line[i + 1] == ')') ||
               (line[i] == '[' && line[i + 1] == ']') ||
               (line[i] == '{' && line[i + 1] == '}'))
            {
                line[i] = '\0';
                line[i + 1] = '\0';
                trig = 1;
            }
        if(trig == 0)
        {
            printf("NO\n");
            return 0;
        }
        char buf[100000] = {0};
        int j = 0;
        for(int i = 0; i < len; i++)
            if(line[i] != '\0')
            {
                buf[j] = line[i];
                j++;
            }
        for(int i = 0; i < len; i++)
            line[i] = '\0';
        for(int i = 0; i < j; i++)
            line[i] = buf[i];
        len = 0;
        for(int i = 0; line[i] != '\0'; i++)
            len++;
        if(len == 0)
        {
            printf("YES\n");
            return 0;
        }
    }
    return 0;
}


#include <stdio.h>

int main()
{
    char line[200] = {0};
    gets(line);
    int brac_count = 0;
    for(int i = 0; line[i] != '\0'; i++)
        if(line[i] == '(' || line[i] == ')' || line[i] == '[' || line[i] == ']' || line[i] == '{' || line[i] == '}')
            brac_count++;
    if(brac_count % 2 != 0)
    {
        printf("False(1)!\n");
        return 0;
    }
    int round_brac = 0, quad_brac = 0, fig_brac = 0;
    for(int i = 0; line[i] != '\0'; i++)
    {
        if(line[i] == '(')
            round_brac++;
        if(line[i] == ')')
            round_brac--;
        if(line[i] == '[')
            quad_brac++;
        if(line[i] == ']')
            quad_brac--;
        if(line[i] == '{')
            fig_brac++;
        if(line[i] == '}')
            fig_brac--;
        if(round_brac < 0 || quad_brac < 0 || fig_brac < 0)
        {
            printf("False(2)!\n");
            return 0;
        }
    }
    while(brac_count > 0)
    {
        int open = 0, close = 0;
        for(int i = 0; line[i] != '\0'; i++)
            if(line[i] == '(' || line[i] == '[' || line[i] == '{')
                open = i;
        for(int i = open; line[i] != '\0'; i++)
            if((line[open] == '(' && line[i] == ')') || (line[open] == '[' && line[i] == ']') || (line[open] == '{' && line[i] == '}'))
            {
                close = i;
                break;
            }
        for(int i = open + 1; i < close; i++)
            if(line[i] == ')' || line[i] == ']' || line[i] == '}')
            {
                printf("False(3)!\n");
                return 0;
            }
        for(int i = open; i <= close; i++)
            line[i] = 'z';
        brac_count -= 2;
    }
    if(round_brac != 0 || quad_brac != 0 || fig_brac != 0)
    {
        printf("False(4)!\n");
        return 0;
    }
    printf("True!\n");
    return 0;
}

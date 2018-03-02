#include<stdio.h>
int main()
{
    char s[30];
    int i;
    printf("enter string");
    scanf("%[^\n]s",s);
    s[0]=s[0]-32;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {i++;
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);
    return 0;
}

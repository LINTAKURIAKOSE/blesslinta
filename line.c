#include<stdio.h>
#include<string.h>
int main()


{ 
    char paragraph[1000]; 
    int nbChar, nblines;
     printf("Enter your a paragraph\n\n\t: "); 
    gets(paragraph);
    nbChar = strlen(paragraph);
    nblines = 0;
    for (int i=0; i<nbChar; i++)
    {
        if (paragraph[i]=='.')
        {
            nblines++;
        }
    }
    printf("\n\nTotal lines: %d", nblines); 
    return 0; 
} 

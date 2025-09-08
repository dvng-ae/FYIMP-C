#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int character=0, words=0, lines=0, vowels=0, special=0;
    int inword=0;

    printf("Enter the paragraph : ");

    while ((ch=getchar())!= EOF)
    {
        character++;

        //count lines

        if(ch=='\n')
        lines++;

        // vowels
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        vowels++;

        //special characters

        if(!isalnum(ch) && !isspace(ch) && ch != '\n')
        special++;

        //words

        if(isspace(ch) || ch == '\n' || ch == '\t')
        {
           inword=0;
        }
        else if(!inword)
        {
            inword=1;
            words++;
        }
    }
    printf("Characters: %d\n", character);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    printf("Vowels: %d\n", vowels);
    printf("Special Characters: %d\n", special);
    
    return 0;
}
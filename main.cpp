#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char s[200];
    fp=fopen("Pallavi.txt","a");
    if(fp==NULL)
    {
        puts("cannot open file");
        exit(1);
    }
    printf("\nwrite something about your self:\n");
    while(strlen(gets(s))>0)
    {
        fputs(s,fp);
        fputs("\n",fp);
    }
    fclose(fp);

    printf("\nAbove entered text is shown below...\n",s);
    fp=fopen("Pallavi.txt","r");
    if(fp==NULL)
    {
        puts("cannot open file");
        exit(2);
    }
    while(fgets(s,199,fp)!=NULL)
        printf("%s",s);
    fclose(fp);
    return 0;
}

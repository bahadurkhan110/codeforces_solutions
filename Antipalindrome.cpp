#include <stdio.h>
int main()
{
    char s[100];
    int i,mid,j,flag=0,same=1;
    scanf("%s",&s);
    j=strlen(s);
    for(i=0;i<j;i++)
    {
        if(s[i]!=s[j-i-1]) 
            flag=1;
        if(s[i]!=s[0]) 
            same=0;
    }
    if(same)
        printf("0\n");
    else
    {
        if(flag==0) 
            printf("%d",strlen(s)-1);
        else 
            printf("%d",strlen(s));
    }
}

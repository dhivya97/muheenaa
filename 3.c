#include<stdio.h>
int check_vowel(char a);
int main()
{
char ch;
printf("enter an alphabet:\n");
scanf("%d",&ch);
if (check_vowel(ch))
{
printf("\n %d is a vowel",ch);
}
else
{
printf("\n %d is a constant",ch),
}
return 0;
}
int check_vowel(char c)
{
if(c>='A'&&<='z')
c=c+32;
if(c=='a'||c=='e'||c=='u')
return 1;
return 0;
}

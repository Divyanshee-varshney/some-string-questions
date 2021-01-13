#include<stdio.h>
#include<string.h>
int main()
{
	char str[250];
	printf("Enter string   ");
	gets(str);
	int freq[26]={0};
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		freq[str[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(freq[i]>1)
		{
			printf("count of %c is %d\n",char(i+'a'),freq[i]);
		}
	}
}

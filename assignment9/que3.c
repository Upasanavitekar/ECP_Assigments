#include<stdio.h>
int main(void)
{
	char ch[50];
	FILE *fs = fopen("src3.txt","r");
	FILE *fd = fopen("des3.txt","w");
	
	while(fgets(ch,sizeof(ch),fs)!=NULL)
	{
	fputs(ch,fd);
	}
	fclose(fs);
	fclose(fd);
return 0;


}

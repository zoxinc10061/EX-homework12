#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE*pFile;
	char ch;
	pFile=fopen("somebody.txt","r");
	//SEEK_SET
	//SEEK_CUR
	//SEEK_END
	fseek(pFile,2,SEEK_SET);
	ch=fgetc(pFile);
	printf("��1��fgetc()=%c\n",ch);
	fseek(pFile,3,SEEK_CUR);
	ch=fgetc(pFile);
	printf("�a2��fgetc()=%c\n",ch);
	fseek(pFile,-4,SEEK_END);
	ch=fgetc(pFile);
	printf("��3��fgetc()=%c\n",ch);
	fclose(pFile);
	system("pause");
	return 0;
	
 } 

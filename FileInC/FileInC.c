//Question:Write a C program that copies a text file “Source.txt” onto “Target.txt”.

#include <stdio.h>



int main()
{
	FILE *fp,*fp2;
	
	if((fp=fopen("Source.txt","r"))==NULL)
	{
		printf("File can't opened...'");
	}
	
	if((fp2=fopen("Target.txt","w"))==NULL)
	{
		printf("File can't opened...'");
	}
	
	
	int name[100];
	float imdb;
	int year;
	
	while(!feof(fp))
	{
		fscanf(fp,"%s %d %f",name,&year,&imdb);
		fprintf(fp2,"%s %d %.2f\n",name,year,imdb);
	}

	
}

#include<stdio.h>

#define length 100

int main()
{
	FILE *fp;
	char buf[length];
	//i uses to look through,j means the number store in the phone
	int i=0,j=0;              
	//to run it must have an adress first      
	fp=fopen("C:\\Users\\Administrator\\Desktop\\³ÌÐò×÷Òµ\\print.txt","r+");
	for( ; fgets(buf,length,fp) != NULL ;  )
	{
		for(i=0 , j=0 ;i<length && j<10;i++)
		{
			if(buf[i]>='0' && buf[i]<='9')
			{
				if(j == 0)
				{
					printf("(");
				}
				printf("%c", buf[i]);
				if(j == 2)
				{
					printf(") ");
				}		
				if(j == 5)
				{
					printf("-");
				}
				j++;	
			}
		}
		printf("\n");
	}
} 

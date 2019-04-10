#include<stdio.h>
#include<conio.h>
main()
{
	int N;    //Number of cheifs
	int R;    // Number of jars
	int i,j;
	int avail[10],max[10][10],need[10][10],alloc[10][10];
	printf("*************************************************************************\n");
	printf("\t\t:::Working of chiefs in the Kitchen without Dead Lock:::\n ");
	printf("*************************************************************************\n");
	printf("Enter the number of chiefs:\n");
	scanf("%d",&N);
	printf("Enter the number of jars in the kitchen::\n");
	scanf("%d",&R);
	
	if(N>0&&R>0)
	{
		
	printf("*************************************************************************\n");
	printf("Each jar contain certain number of ingredients::\n");
	for(i=0;i<R;i++)
	{
		printf(" Enter the number of Ingredients in jar[%d]:\n",i+1);
		scanf("%d",&avail[i]);
	}
	printf("*************************************************************************\n");
	printf("Enter the ingredients that are allocated to each chief::\n");
	for(i=0;i<N;i++)
	{
	printf("Chief[%d]::\n",i+1);
		for(j=0;j<R;j++)
		{
			
			scanf("%d",&alloc[i][j]);
		}
	}
	printf("*************************************************************************\n");
	printf("Enter the ingredients that are maximum in the jar::\n");
	for(i=0;i<N;i++)
	{
		printf("Chief[%d]::\n",i+1);
		for(j=0;j<R;j++)
		{
			scanf("%d",&max[i][j]);
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<R;j++)
		{
			need[i][j]=max[i][j]-alloc[i][j];
		}
	}
	printf("*************************************************************************\n");
	printf("Number of chiefs in the kitchen:%d\n",N);
	printf("Number of jars in the Kitchen:%d\n ",R);
	printf("*************************************************************************\n");
	printf("Ingredients that are Need in the kitchen::\n");
	for(i=0;i<N;i++)
	{
		printf("Chief[%d]:",i+1);
		for(j=0;j<R;j++)
		{
			printf("%d ",need[i][j]);
		}
		printf("\n");
	}
//condition appling....
int k,cnt,cntt,chief[10],sum=0;
 k=0;     
 cntt=0;
 printf("\n\n");
 printf("cheifs complete their work in the  order of::\n");
 while(k<15)
 {
 	for(i=0;i<N;i++)
 	{	
	   cnt=0;
 		for(j=0;j<R;j++)
 		{
  			if(chief[i]==1)
			   break;
  			if(need[i][j]<=avail[j])
  			{
  				cnt++;
  			}
  			if(cnt==R)
  			{
  			for(j=0;j<R;j++)
  			{
   			avail[j]+=alloc[i][j];
  			}
  			printf("chief[%d]\n",i+1);
			  	  chief[i]=1;
			       cntt++;
  		}
	 }
 }
  k++;
 }


 if(cntt<N-1)
 {
 	 	printf("*************************************************************************\n");
 		printf("\n Deadlock\n ");
 		printf("*************************************************************************\n");
 }
 else
 {
 	 	printf("*************************************************************************\n");
 	for(i=0;i<R;i++)
	{
		printf("No of ingredients in jar[%d]:",i+1);
	
				printf("%d\n",avail[i]);
			sum+=avail[i];
	}
 	
 }
  	printf("*************************************************************************\n");
printf("\nTotal number of ingredients::\t%d\n",sum);
}
else
{
	 	printf("*************************************************************************\n");
	printf("Number of cheif and ingrediets are greater than zero\n");
}
 	printf("*************************************************************************\n");
 	
 	
}
//Inputs::
/* 
*************************************************************************
                :::Working of chiefs in the Kitchen without Dead Lock:::
 *************************************************************************
Enter the number of chiefs:
5
Enter the number of jars in the kitchen::
3
*************************************************************************
Each jar contain certain number of ingredients::
 Enter the number of Ingredients in jar[1]:
3
 Enter the number of Ingredients in jar[2]:
3
 Enter the number of Ingredients in jar[3]:
2
*************************************************************************
Enter the ingredients that are allocated to each chief::
Chief[1]::
0
1
0
Chief[2]::
2
0
0
Chief[3]::
3
0
2
Chief[4]::
2
1
1
Chief[5]::
0
0
2
*************************************************************************
Enter the ingredients that are maximum in the jar::
Chief[1]::
7
5
3
Chief[2]::
3
2
2
Chief[3]::
9
0
2
Chief[4]::
2
2
2
Chief[5]::
4
3
3
*************************************************************************
OUTPUT::
*************************************************************************
Number of chiefs in the kitchen:5
Number of jars in the Kitchen:3
*************************************************************************
Ingredients that are Need in the kitchen::
Chief[1]:7 4 3
Chief[2]:1 2 2
Chief[3]:6 0 0
Chief[4]:0 1 1
Chief[5]:4 3 1
*************************************************************************


cheifs complete their work in the  order of::
chief[2]
chief[4]
chief[5]
chief[1]
chief[3]
*************************************************************************
No of ingredients in jar[1]:10
No of ingredients in jar[2]:5
No of ingredients in jar[3]:7
*************************************************************************

Total number of ingredients::   22
*************************************************************************
*/



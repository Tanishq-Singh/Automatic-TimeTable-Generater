#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct TimeTableStu{
	char *Monday[9];
	char *Tuesday[9];
	char *Wednessday[9];
	char *Thusday[9];
	char *Friday[9];
	char *Saturday[9];
}Class1A,Class2A,Class3A,Class1B,Class2B,Class3B;

int main()
{
	int c1,c2,c3;
	int i,j=1;
	int ra,SC1,SC2,SC3;

do{
	printf("Enter the no of subject for class 1: ");
	scanf("%d",&c1);
	if(c1>4)
	{
		if(c1<6 && c1>4)
		{
			SC1=3;
		}
		else if(c1>=6 && c1<8)
		{
			SC1=2;
		}
		else if(c1>8)
		{
			SC1=1;
		}
		j++;
	}
	else
	{
		printf("\nLess Subject Entered\n");
	}
}while(j==1);
		char Subject1[c1][50];
		int SCount1[c1];
		printf("Enter the Subjects for class 1 ");
		for(i=0;i<c1;i++)
		{
			printf("\nEnter the %d Subject: ",i);
			scanf("%s",&Subject1[i]);
			SCount1[i]=0;
		}

j=1;

do{	
	printf("Enter the no of subject for class 2: ");
	scanf("%d",&c2);
	if(c2>4)
	{
		if(c2<6 && c2>4)
		{
			SC2=3;
		}
		else if(c2>=6 && c2<8)
		{
			SC2=2;
		}
		else if(c2>8)
		{
			SC2=1;
		}
		else
		{
			SC2=0;
		}
		j++;
	}
	else
	{
		printf("\nLess Subject Entered\n");
	}
}while(j==1);
		char Subject2[c2][50];
		int SCount2[c2];
		printf("Enter the Subjects for class 2");
		for(i=0;i<c2;i++)
		{
			printf("\nEnter the %d Subject: ",i);
			scanf("%s",&Subject2[i]);
			SCount2[i]=0;
		}
	
j=1;
	
do{
	printf("Enter the no of subject for class 3: ");
	scanf("%d",&c3);
	if(c3>4)
	{
		if(c3<6 && c3>4)
		{
			SC3=3;
		}
		else if(c3>=6 && c3<8)
		{
			SC3=2;
		}
		else if(c3>8)
		{
			SC3=1;
		}
		else
		{
			SC3=0;
		}
		j++;
	}
	else
	{
		printf("\nLess Subject Entered\n");
	}
}while(j==1);
		char Subject3[c3][50];
		int SCount3[c3];
		printf("Enter the Subjects for class 3");
		for(i=0;i<c3;i++)
		{
			printf("\nEnter the %d Subject: ",i);
			scanf("%s",&Subject3[i]);
			SCount3[i]=0;
		}

j=1;

	/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
	/*        CLASS 1 A TIME TABLE       */
	
		for(i=0;i<9;i++)
		{
		
			if(i==5)
			{
				Class1A.Monday[i]=(char*)malloc(100*sizeof(char));
				Class1A.Monday[i]="Break Time";
			}
			else
			{
				loop1A1: ra=rand()%c1;
				if(SCount1[ra]<SC1)
				{
					Class1A.Monday[i]=(char*)malloc(100*sizeof(char));
					Class1A.Monday[i]=Subject1[ra];
					SCount1[ra]++;
				}
				else
				{
					goto loop1A1;
				}
			}
		}
	
		for(i=0;i<c1;i++)
		{
			SCount1[i]=0;
		}
	
		for(i=0;i<9;i++)
		{
			if(i==5)
			{
				Class1A.Tuesday[i]=(char*)malloc(100*sizeof(char));
				Class1A.Tuesday[i]="Break Time";
			}
			else
			{
				loop1A2: ra=rand()%c1;
				if(SCount1[ra]<SC1)
				{
					Class1A.Tuesday[i]=(char*)malloc(100*sizeof(char));
					Class1A.Tuesday[i]=Subject1[ra];
					SCount1[ra]++;
				}
				else
				{
					goto loop1A2;
				}
			}
		}
	
		for(i=0;i<c1;i++)
		{
			SCount1[i]=0;
		}
		
		for(i=0;i<9;i++)
		{
			if(i==5)
			{
				Class1A.Wednessday[i]=(char*)malloc(100*sizeof(char));
				Class1A.Wednessday[i]="Break Time";
			}
			else
			{
				loop1A3: ra=rand()%c1;
				if(SCount1[ra]<SC1)
				{
					Class1A.Wednessday[i]=(char*)malloc(100*sizeof(char));
					Class1A.Wednessday[i]=Subject1[ra];
					SCount1[ra]++;
				}
				else
				{
					goto loop1A3;
				}
			}
		}
		
		for(i=0;i<c1;i++)
		{
			SCount1[i]=0;
		}
		
		for(i=0;i<9;i++)
		{
			if(i==5)
			{
				Class1A.Thusday[i]=(char*)malloc(100*sizeof(char));
				Class1A.Thusday[i]="Break Time";
			}
			else
			{
				loop1A4: ra=rand()%c1;
				if(SCount1[ra]<SC1)
				{
					Class1A.Thusday[i]=(char*)malloc(100*sizeof(char));
					Class1A.Thusday[i]=Subject1[ra];
					SCount1[ra]++;
				}
				else
				{
					goto loop1A4;
				}
			}
		}
		
		for(i=0;i<c1;i++)
		{
			SCount1[i]=0;
		}
		
		for(i=0;i<9;i++)
		{
			if(i==5)
			{
				Class1A.Friday[i]=(char*)malloc(100*sizeof(char));
				Class1A.Friday[i]="Break Time";
			}
			else
			{
				loop1A5: ra=rand()%c1;
				if(SCount1[ra]<SC1)
				{
					Class1A.Friday[i]=(char*)malloc(100*sizeof(char));
					Class1A.Friday[i]=Subject1[ra];
					SCount1[ra]++;
				}
					else
				{
					goto loop1A5;
				}
			}
		}
		
		for(i=0;i<c1;i++)
		{
			SCount1[i]=0;
		}
		
		for(i=0;i<9;i++)
		{
			if(i==5)
			{
				Class1A.Saturday[i]=(char*)malloc(100*sizeof(char));
				Class1A.Saturday[i]="Break Time";
				}
			else
			{
				loop1A6: ra=rand()%c1;
				if(SCount1[ra]<SC1)
				{
					Class1A.Saturday[i]=(char*)malloc(100*sizeof(char));
					Class1A.Saturday[i]=Subject1[ra];
					SCount1[ra]++;
				}
				else
				{
						goto loop1A6;
				}
			}
		}
		
		for(i=0;i<c1;i++)
		{
			SCount1[i]=0;
			}
	
		
	/*##################################################################################################################################################*/
	/*        CLASS 1 B TIME TABLE       */

		for(i=0;i<9;i++)
		{
			
			if(i==5)
			{
				Class1B.Monday[i]=(char*)malloc(100*sizeof(char));
				Class1B.Monday[i]="Break Time";
			}
			else
			{
				loop1B1: ra=rand()%c1;
				if(SCount1[ra]<SC1 && Subject1[ra]!=Class1A.Monday[i])
				{
					Class1B.Monday[i]=(char*)malloc(100*sizeof(char));
					Class1B.Monday[i]=Subject1[ra];
					SCount1[ra]++;
				}
				else
				{
				goto loop1B1;
				}
			}
		}
		
		for(i=0;i<c1;i++)
		{
			SCount1[i]=0;
		}
		
		for(i=0;i<9;i++)
		{
		if(i==5)
			{
				Class1B.Tuesday[i]=(char*)malloc(100*sizeof(char));
				Class1B.Tuesday[i]="Break Time";
			}
			else
			{
				loop1B2: ra=rand()%c1;
					if(SCount1[ra]<SC1 && Subject1[ra]!=Class1A.Thusday[i])
				{
					Class1B.Tuesday[i]=(char*)malloc(100*sizeof(char));
					Class1B.Tuesday[i]=Subject1[ra];
					SCount1[ra]++;
				}
				else
				{
					goto loop1B2;
				}
			}
		}
			
	for	(i=0;i<c1;i++)
		{
			SCount1[i]=0;
		}
		
		for(i=0;i<9;i++)
		{
			if(i==5)
			{
				Class1B.Wednessday[i]=(char*)malloc(100*sizeof(char));
				Class1B.Wednessday[i]="Break Time";
			}
				else
			{
				loop1B3: ra=rand()%c1;
				if(SCount1[ra]<SC1 && Subject1[ra]!=Class1A.Wednessday[i])
				{
					Class1B.Wednessday[i]=(char*)malloc(100*sizeof(char));
						Class1B.Wednessday[i]=Subject1[ra];
					SCount1[ra]++;
				}
				else
				{
					goto loop1B3;
				}
		}	
	}	
		
		for(i=0;i<c1;i++)
		{
				SCount1[i]=0;
		}
		
		for(i=0;i<9;i++)
		{
			if(i==5)
			{
				Class1B.Thusday[i]=(char*)malloc(100*sizeof(char));
				Class1B.Thusday[i]="Break Time";
			}
			else
				{
				loop1B4: ra=rand()%c1;
				if(SCount1[ra]<SC1 && Subject1[ra]!=Class1A.Thusday[i])
				{
					Class1B.Thusday[i]=(char*)malloc(100*sizeof(char));
					Class1B.Thusday[i]=Subject1[ra];
					SCount1[ra]++;
				}
				else
				{
					goto loop1B4;
					}
			}
	}	
		
		for(i=0;i<c1;i++)
		{
			SCount1[i]=0;
		}
			
	for	(i=0;i<9;i++)
		{
			if(i==5)
			{
				Class1B.Friday[i]=(char*)malloc(100*sizeof(char));
				Class1B.Friday[i]="Break Time";
			}
			else
			{
				loop1B5: ra=rand()%c1;
				if(SCount1[ra]<SC1 && Subject1[ra]!=Class1A.Friday[i])
			{
				Class1B.Friday[i]=(char*)malloc(100*sizeof(char));
				Class1B.Friday[i]=Subject1[ra];
				SCount1[ra]++;
			}
			else
			{
				goto loop1B5;
			}
		}
	}
	
	for(i=0;i<c1;i++)
	{
		SCount1[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class1B.Saturday[i]=(char*)malloc(100*sizeof(char));
			Class1B.Saturday[i]="Break Time";
		}
		else
		{
			loop1B6: ra=rand()%c1;
			if(SCount1[ra]<SC1 && Subject1[ra]!=Class1A.Saturday[i])
			{
				Class1B.Saturday[i]=(char*)malloc(100*sizeof(char));
				Class1B.Saturday[i]=Subject1[ra];
				SCount1[ra]++;
			}
			else
			{
				goto loop1B6;
			}
		}
	}
	
	/*##########################################################################################################################################################*/
	/*       CLASS 2 A TIME TABLE     */
	
	for(i=0;i<9;i++)
	{
		
		if(i==5)
		{
			Class2A.Monday[i]=(char*)malloc(100*sizeof(char));
			Class2A.Monday[i]="Break Time";
		}
		else
		{
			loop2A1: ra=rand()%c2;
			if(SCount2[ra]<SC2)
			{
				Class2A.Monday[i]=(char*)malloc(100*sizeof(char));
				Class2A.Monday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2A1;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class2A.Tuesday[i]=(char*)malloc(100*sizeof(char));
			Class2A.Tuesday[i]="Break Time";
		}
		else
		{
			loop2A2: ra=rand()%c2;
			if(SCount2[ra]<SC2)
			{
				Class2A.Tuesday[i]=(char*)malloc(100*sizeof(char));
				Class2A.Tuesday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2A2;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class2A.Wednessday[i]=(char*)malloc(100*sizeof(char));
			Class2A.Wednessday[i]="Break Time";
		}
		else
		{
			loop2A3: ra=rand()%c2;
			if(SCount2[ra]<SC2)
			{
				Class2A.Wednessday[i]=(char*)malloc(100*sizeof(char));
				Class2A.Wednessday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2A3;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class2A.Thusday[i]=(char*)malloc(100*sizeof(char));
			Class2A.Thusday[i]="Break Time";
		}
		else
		{
			loop2A4: ra=rand()%c2;
			if(SCount2[ra]<SC2)
			{
				Class2A.Thusday[i]=(char*)malloc(100*sizeof(char));
				Class2A.Thusday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2A4;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class2A.Friday[i]=(char*)malloc(100*sizeof(char));
			Class2A.Friday[i]="Break Time";
		}
		else
		{
			loop2A5: ra=rand()%c2;
			if(SCount2[ra]<SC2)
			{
				Class2A.Friday[i]=(char*)malloc(100*sizeof(char));
				Class2A.Friday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2A5;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class2A.Saturday[i]=(char*)malloc(100*sizeof(char));
			Class2A.Saturday[i]="Break Time";
		}
		else
		{
			loop2A6: ra=rand()%c2;
			if(SCount2[ra]<SC2)
			{
				Class2A.Saturday[i]=(char*)malloc(100*sizeof(char));
				Class2A.Saturday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2A6;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	/*##################################################################################################################################################*/
	/*        CLASS 2 B TIME TABLE       */

	for(i=0;i<9;i++)
	{
		
		if(i==5)
		{
			Class2B.Monday[i]=(char*)malloc(100*sizeof(char));
			Class2B.Monday[i]="Break Time";
		}
		else
		{
			loop2B1: ra=rand()%c2;
			if(SCount2[ra]<SC2 && Subject2[ra]!=Class2A.Monday[i])
			{
				Class2B.Monday[i]=(char*)malloc(100*sizeof(char));
				Class2B.Monday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2B1;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class2B.Tuesday[i]=(char*)malloc(100*sizeof(char));
			Class2B.Tuesday[i]="Break Time";
		}
		else
		{
			loop2B2: ra=rand()%c2;
			if(SCount2[ra]<SC2 && Subject2[ra]!=Class2A.Thusday[i])
			{
				Class2B.Tuesday[i]=(char*)malloc(100*sizeof(char));
				Class2B.Tuesday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2B2;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class2B.Wednessday[i]=(char*)malloc(100*sizeof(char));
			Class2B.Wednessday[i]="Break Time";
		}
		else
		{
			loop2B3: ra=rand()%c2;
			if(SCount2[ra]<SC2 && Subject2[ra]!=Class2A.Wednessday[i])
			{
				Class2B.Wednessday[i]=(char*)malloc(100*sizeof(char));
				Class2B.Wednessday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2B3;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class2B.Thusday[i]=(char*)malloc(100*sizeof(char));
			Class2B.Thusday[i]="Break Time";
		}
		else
		{
			loop2B4: ra=rand()%c2;
			if(SCount2[ra]<SC2 && Subject2[ra]!=Class2A.Thusday[i])
			{
				Class2B.Thusday[i]=(char*)malloc(100*sizeof(char));
				Class2B.Thusday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2B4;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class2B.Friday[i]=(char*)malloc(100*sizeof(char));
			Class2B.Friday[i]="Break Time";
		}
		else
		{
			loop2B5: ra=rand()%c2;
			if(SCount2[ra]<SC2 && Subject2[ra]!=Class2A.Friday[i])
			{
				Class2B.Friday[i]=(char*)malloc(100*sizeof(char));
				Class2B.Friday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2B5;
			}
		}
	}
	
	for(i=0;i<c2;i++)
	{
		SCount2[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class2B.Saturday[i]=(char*)malloc(100*sizeof(char));
			Class2B.Saturday[i]="Break Time";
		}
		else
		{
			loop2B6: ra=rand()%c2;
			if(SCount2[ra]<SC2 && Subject2[ra]!=Class2A.Saturday[i])
			{
				Class2B.Saturday[i]=(char*)malloc(100*sizeof(char));
				Class2B.Saturday[i]=Subject2[ra];
				SCount2[ra]++;
			}
			else
			{
				goto loop2B6;
			}
		}
	}
	
	/*##########################################################################################################################################################*/
	/*       CLASS 3 A TIME TABLE     */
	
	for(i=0;i<9;i++)
	{
		
		if(i==5)
		{
			Class3A.Monday[i]=(char*)malloc(100*sizeof(char));
			Class3A.Monday[i]="Break Time";
		}
		else
		{
			loop3A1: ra=rand()%c3;
			if(SCount3[ra]<SC3)
			{
				Class3A.Monday[i]=(char*)malloc(100*sizeof(char));
				Class3A.Monday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3A1;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class3A.Tuesday[i]=(char*)malloc(100*sizeof(char));
			Class3A.Tuesday[i]="Break Time";
		}
		else
		{
			loop3A2: ra=rand()%c3;
			if(SCount3[ra]<SC3)
			{
				Class3A.Tuesday[i]=(char*)malloc(100*sizeof(char));
				Class3A.Tuesday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3A2;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class3A.Wednessday[i]=(char*)malloc(100*sizeof(char));
			Class3A.Wednessday[i]="Break Time";
		}
		else
		{
			loop3A3: ra=rand()%c3;
			if(SCount3[ra]<SC3)
			{
				Class3A.Wednessday[i]=(char*)malloc(100*sizeof(char));
				Class3A.Wednessday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3A3;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class3A.Thusday[i]=(char*)malloc(100*sizeof(char));
			Class3A.Thusday[i]="Break Time";
		}
		else
		{
			loop3A4: ra=rand()%c3;
			if(SCount3[ra]<SC3)
			{
				Class3A.Thusday[i]=(char*)malloc(100*sizeof(char));
				Class3A.Thusday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3A4;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class3A.Friday[i]=(char*)malloc(100*sizeof(char));
			Class3A.Friday[i]="Break Time";
		}
		else
		{
			loop3A5: ra=rand()%c3;
			if(SCount3[ra]<SC3)
			{
				Class3A.Friday[i]=(char*)malloc(100*sizeof(char));
				Class3A.Friday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3A5;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class3A.Saturday[i]=(char*)malloc(100*sizeof(char));
			Class3A.Saturday[i]="Break Time";
		}
		else
		{
			loop3A6: ra=rand()%c3;
			if(SCount3[ra]<SC3)
			{
				Class3A.Saturday[i]=(char*)malloc(100*sizeof(char));
				Class3A.Saturday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3A6;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	/*##################################################################################################################################################*/
	/*        CLASS 3 B TIME TABLE       */

	for(i=0;i<9;i++)
	{
		
		if(i==5)
		{
			Class3B.Monday[i]=(char*)malloc(100*sizeof(char));
			Class3B.Monday[i]="Break Time";
		}
		else
		{
			loop3B1: ra=rand()%c3;
			if(SCount3[ra]<SC3 && Subject3[ra]!=Class3A.Monday[i])
			{
				Class3B.Monday[i]=(char*)malloc(100*sizeof(char));
				Class3B.Monday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3B1;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class3B.Tuesday[i]=(char*)malloc(100*sizeof(char));
			Class3B.Tuesday[i]="Break Time";
		}
		else
		{
			loop3B2: ra=rand()%c3;
			if(SCount3[ra]<SC3 && Subject3[ra]!=Class3A.Thusday[i])
			{
				Class3B.Tuesday[i]=(char*)malloc(100*sizeof(char));
				Class3B.Tuesday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3B2;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class3B.Wednessday[i]=(char*)malloc(100*sizeof(char));
			Class3B.Wednessday[i]="Break Time";
		}
		else
		{
			loop3B3: ra=rand()%c3;
			if(SCount3[ra]<SC3 && Subject3[ra]!=Class3A.Wednessday[i])
			{
				Class3B.Wednessday[i]=(char*)malloc(100*sizeof(char));
				Class3B.Wednessday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3B3;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class3B.Thusday[i]=(char*)malloc(100*sizeof(char));
			Class3B.Thusday[i]="Break Time";
		}
		else
		{
			loop3B4: ra=rand()%c3;
			if(SCount3[ra]<SC3 && Subject3[ra]!=Class3A.Thusday[i])
			{
				Class3B.Thusday[i]=(char*)malloc(100*sizeof(char));
				Class3B.Thusday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3B4;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class3B.Friday[i]=(char*)malloc(100*sizeof(char));
			Class3B.Friday[i]="Break Time";
		}
		else
		{
			loop3B5: ra=rand()%c3;
			if(SCount3[ra]<SC3 && Subject3[ra]!=Class3A.Friday[i])
			{
				Class3B.Friday[i]=(char*)malloc(100*sizeof(char));
				Class3B.Friday[i]=Subject3[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3B5;
			}
		}
	}
	
	for(i=0;i<c3;i++)
	{
		SCount3[i]=0;
	}
	
	for(i=0;i<9;i++)
	{
		if(i==5)
		{
			Class3B.Saturday[i]=(char*)malloc(100*sizeof(char));
			Class3B.Saturday[i]="Break Time";
		}
		else
		{
			loop3B6: ra=rand()%c3;
			if(SCount3[ra]<SC3 && Subject3[ra]!=Class3A.Saturday[i])
			{
				Class3B.Saturday[i]=(char*)malloc(100*sizeof(char));
				Class3B.Saturday[i]=Subject2[ra];
				SCount3[ra]++;
			}
			else
			{
				goto loop3B6;
			}
		}
	}
	
	/*##########################################################################################################################################################*/
	
	printf("\n\t\tCLASS 1 A TIME TABLE\n");
	printf("\n Monday");
	for(i=0;i<9;i++)
	{
		printf("\n %s",Class1A.Monday[i]);
	}
	printf("\n\t Tuesday");
	for(i=0;i<9;i++)
	{
		printf("\n\t %s",Class1A.Tuesday[i]);
	}
	printf("\n\t\t Wednessday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t %s",Class1A.Wednessday[i]);
	}
	printf("\n\t\t\t Thusday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t %s",Class1A.Thusday[i]);
	}
	printf("\n\t\t\t\t Friday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t %s",Class1A.Friday[i]);
	}
	printf("\n\t\t\t\t\t Saturday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t\t %s",Class1A.Saturday[i]);
	}
	
	/*#######################################################################################################################################################*/
	printf("\n\t\tCLASS 1 B TIME TABLE\n");
	printf("\n Monday");
	for(i=0;i<9;i++)
	{
		printf("\n %s",Class1B.Monday[i]);
	}
	printf("\n\t Tuesday");
	for(i=0;i<9;i++)
	{
		printf("\n\t %s",Class1B.Tuesday[i]);
	}
	printf("\n\t\t Wednessday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t %s",Class1B.Wednessday[i]);
	}
	printf("\n\t\t\t Thusday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t %s",Class1B.Thusday[i]);
	}
	printf("\n\t\t\t\t Friday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t %s",Class1B.Friday[i]);
	}
	printf("\n\t\t\t\t\t Saturday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t\t %s",Class1B.Saturday[i]);
	}
	
	/*##########################################################################################################################################################*/
	printf("\n\t\tCLASS 2 A TIME TABLE\n");
	printf("\n Monday");
	for(i=0;i<9;i++)
	{
		printf("\n %s",Class2A.Monday[i]);
	}
	printf("\n\t Tuesday");
	for(i=0;i<9;i++)
	{
		printf("\n\t %s",Class2A.Tuesday[i]);
	}
	printf("\n\t\t Wednessday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t %s",Class2A.Wednessday[i]);
	}
	printf("\n\t\t\t Thusday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t %s",Class2A.Thusday[i]);
	}
	printf("\n\t\t\t\t Friday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t %s",Class2A.Friday[i]);
	}
	printf("\n\t\t\t\t\t Saturday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t\t %s",Class2A.Saturday[i]);
	}
	
	/*#######################################################################################################################################################*/
	printf("\n\t\tCLASS 2 B TIME TABLE\n");	
	printf("\n Monday");
	for(i=0;i<9;i++)
	{
		printf("\n %s",Class2B.Monday[i]);
	}
	printf("\n\t Tuesday");
	for(i=0;i<9;i++)
	{
		printf("\n\t %s",Class2B.Tuesday[i]);
	}
	printf("\n\t\t Wednessday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t %s",Class2B.Wednessday[i]);
	}
	printf("\n\t\t\t Thusday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t %s",Class2B.Thusday[i]);
	}
	printf("\n\t\t\t\t Friday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t %s",Class2B.Friday[i]);
	}
	printf("\n\t\t\t\t\t Saturday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t\t %s",Class2B.Saturday[i]);
	}
	
	/*##########################################################################################################################################################*/
	printf("\n\t\tCLASS 3 A TIME TABLE\n");		
	printf("\n Monday");
	for(i=0;i<9;i++)
	{
		printf("\n %s",Class3A.Monday[i]);
	}
	printf("\n\t Tuesday");
	for(i=0;i<9;i++)
	{
		printf("\n\t %s",Class3A.Tuesday[i]);
	}
	printf("\n\t\t Wednessday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t %s",Class3A.Wednessday[i]);
	}
	printf("\n\t\t\t Thusday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t %s",Class3A.Thusday[i]);
	}
	printf("\n\t\t\t\t Friday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t %s",Class3A.Friday[i]);
	}
	printf("\n\t\t\t\t\t Saturday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t\t %s",Class3A.Saturday[i]);
	}
	
	/*#######################################################################################################################################################*/
	printf("\n\t\tCLASS 3 B TIME TABLE\n");
	printf("\n Monday");
	for(i=0;i<9;i++)
	{
		printf("\n %s",Class3B.Monday[i]);
	}
	printf("\n\t Tuesday");
	for(i=0;i<9;i++)
	{
		printf("\n\t %s",Class3B.Tuesday[i]);
	}
	printf("\n\t\t Wednessday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t %s",Class3B.Wednessday[i]);
	}
	printf("\n\t\t\t Thusday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t %s",Class3B.Thusday[i]);
	}
	printf("\n\t\t\t\t Friday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t %s",Class3B.Friday[i]);
	}
	printf("\n\t\t\t\t\t Saturday");
	for(i=0;i<9;i++)
	{
		printf("\n\t\t\t\t\t %s",Class3B.Saturday[i]);
	}
	
	return 0;
}

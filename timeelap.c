// C Source File
// Created 3/6/2020; 2:40:46 PM

// Delete or comment out the items you do not need.
#define COMMENT_PROGRAM_NAME   "Time Elapsed"
#define COMMENT_AUTHORS        "Dani Flint"

#include <tigcclib.h>

// Main Function
void _main(void)
{
	short sh;
	short sm;
	short eh;
	short em;
	short hd;
	short md;
	short th;
	short tm;
	clrscr();
	printf("enter starting hour: ");
	scanf("%hd", &sh);
	printf("\nenter starting minute: ");
	scanf("%hd", &sm);
	printf("\nenter ending hour: ");
	scanf("%hd", &eh);
	printf("\nenter ending minute: ");
	scanf("%hd", &em);
	hd = eh - sh;
	md = em - sm;	
  if(hd < 0 || (md<0 && hd<=0) || hd < 0 || (md > 59 && hd >0) || sh < 0 || sh > 23 || sm < 0 || sm > 59 || eh < 0 || eh > 23 || em < 0 || em > 59)
	{
		printf("\nerror, make sure you are \nusing 24hr time as input, \nthis program also doesnt \nwork if crossing the date line");
	}
	else if (hd == 0 && md < 60)
	{
		if (md >= 10)
		{
			printf("\n0: %hd", md);			
		}
		else
		{
			printf("\n0: 0%hd", md);
		}

	}
	else if(hd > 0 && md == 0)
	{
		printf("\n%hd : 00", hd);
	}
	else if (hd > 0 && md >0)
	{
		printf("\n%hd ", hd);
		if (md >=10)
		{
			printf(": %hd", md);			
		}
		else
		{
			printf(": 0%hd", md);
		}

	}
	else if (hd > 0 && md < 0)
	{
		th = hd - 1;
		tm = md + 60;
		printf("\n%hd ", th);
		if (tm >=10)
		{
			printf(": %hd", tm);			
		}
		else
		{
			printf(": 0%hd", tm);
		}
	}
	else
	{
		printf("\nFIX THE CODE DANI");
	}
	ngetchx();
}

//To remove a specific line from a text file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{	FILE *fp,*cp;
	fp=fopen("file.txt","r");
	cp=fopen("removeline.txt","w");

	char copy[1000];

	int deleteline=0;
 
	  if (cp == NULL || fp == NULL)
	  {
	    printf("file not found");
	  }
	  
	  int fileline = 1;
	  int currentline = 1;
  
  printf("Enter the line number to delete the Line:\n");
  scanf("%d",&deleteline);

  do 
  {
    fgets(copy, 1000, fp);
    if (feof(fp)){
    	fileline = 0;
    }
    else if (currentline != deleteline){
      fputs(copy, cp);
    }
    currentline++;
  
  }while(fileline);


  fclose(fp);
  fclose(cp);
  return 0;
}

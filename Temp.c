/*Temperature Tracker:
Write a program for Tracking daily temperatures of 3 cities for a week . The program calculates the average temperature for each day and for the week.
PRN=B24CE1091*/
#include <stdio.h>
int main()
{
	float temp[3][7];
	float total=0.0,average=0.0;
	printf("Enter the Temperature for 3 City in celsius\n");
	
	for(int c=0;c<3;c++){
    	printf("\n Enter the data for city for a week%d",c+1);
    	
    	for(int w=0;w<7;w++){
        	printf("\nWeeks %d\t =",w+1);
        	scanf("%f",&temp[c][w]);
    	}
	}
    	printf("TEMPERATURE TRACKING");
    	printf("\nSno.\tcityName\tDay1\t\tDay2\t\tDay3\t\tDay4\t\tDay5\t\tDay6\t\tDay7\t\tAvgtemperature\n");
	for(int c=0;c<3;c++){
    	printf("\n%d \t",c+1);
    	printf("city %d\t",c+1);
    	for (int w=0;w<7;w++){
        	printf("\t%f ",temp[c][w]);    
        	total+=temp[c][w];
       	 
    	}
    	average=total/7;
    	total=0.0;
        	printf("\t%f",average);
	}
}

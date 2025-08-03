/*PROBLEM STATEMENT:
Rainfall Tracking:
Write a program to track rainfall data for 3 cities over 4 months.
Using a 2D array, we can store the data, calculate the average rainfall
 for each city, and display the rainfall data in a tabular format.*/
#include <stdio.h>
int main()
{
	float rainfall[3][4];
	float total=0.0,average=0.0;
	printf("Enter the Rainfall Data for 3\n");
	for(int c=0;c<3;c++){
    	printf("\n Enter data for city %d",c+1);
    	for(int m=0;m<4;m++){
        	printf("\nMonth %d\t =",m+1);
        	scanf("%f",&rainfall[c][m]);
    	}
	}
    	printf("RAINFALL TRACKING");
    	printf("\nSno.\tcityName\tMonth1\t\tMonth2\t\tMonth3\t\tMonth4\t\tAvgrainfall\n");
	for(int c=0;c<3;c++){
    	printf("\n%d \t",c+1);
    	printf("city %d\t",c+1);
    	for (int m=0;m<4;m++){
        	printf("\t%f ",rainfall[c][m]);    
        	total+=rainfall[c][m];
       	 
    	}
    	average=total/4;
        	printf("\t%f",average);
	}
}

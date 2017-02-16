/*
 * =====================================================================================
 *
 *       Filename:  House_Pions_hw5_Task2.c
 *       	Usage:  ./House_Pions_hw5_Task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:39 PM
 *
 Compiler:  gcc -Wall -Werror -lm 
 *         Author:  Daniel Tayler (), danieltayler@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */
float MtoKm(float m); // miels to kilometers

/* Main Program */
int  main(void)
{
	int Start, End, Inc;// start and hte end and hte increment
	float km; // kilometers
	printf("please enter your starting miles:\n");
	scanf("%d" ,&Start);
	printf("please enter your ending miles:\n");
	scanf("%d" ,&End);
	printf("how would you like your miles incremented:\n");
	scanf("%d" ,&Inc);
	printf("miles   =   Kilometers\n");
	printf("-----       ----------\n");
	
	for( int i = Start; i <= End; i += Inc)
	{
		km = MtoKm(i);
		printf("%4d %17.3f\n", i, km);
	}

	// now for hte displace fucniton

	return 0;
}

float MtoKm(float m)
{
	float k;
	k = m * 1.61;// this is hte converion factor
	return k;

}

/* Function Defenitions */



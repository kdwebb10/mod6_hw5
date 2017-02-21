/*
 * =====================================================================================
 *
 *       Filename:  pions_hw5_task1.c
 *       	Usage:  ./pions_hw5_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/21/2017 03:02:43 AM
 *
 Compiler:  gcc -Wall -Werror -lm 
 *         Author:  Daniel Tayler (), danieltayler@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/*  For Standard I/O */
#include <math.h>		/*  For Math library */

/*  Function Prototypes */
float AnnulusMoment(float r2, float r1);

/*  Main Program */
int main(void)
{
		float r1, r2, inertia;

			printf("Enter the value for the outer radius (r2): ");
			scanf("%f", &r2);
			printf("Enter the value for the inner radius (r1): ");
			scanf("%f", &r1);
							
			inertia =  AnnulusMoment(r2,r1);
				
			printf("The second moment of inertia is %.3f\n", inertia);

									return 0;
}
/*  Function Defenition */
float AnnulusMoment(float r2, float r1)
{
		float inertia;
			inertia = (3.141592653/4 * (r2*r2*r2*r2 - r1*r1*r1*r1));
				return inertia;
}



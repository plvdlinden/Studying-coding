/*
 * 1.3.c
 *
 *  Created on: 27 jul. 2017
 *      Author: Plvdlinden
 */
#include <stdio.h>

/* print Fahrentheit-Celsius table
	for fahr = 0, 20, ..., 300 */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower= 0; 		/* lower limit of temprature table*/
	upper= 300;		/*upper limit*/
	step= 20;		/*step size*/

	printf("℉\t℃\n"); /*Adds a heading to the table*/

	fahr = lower;
	while(fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

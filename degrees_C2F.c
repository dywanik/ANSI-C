#include <stdio.h>
   /* print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300 */
int main(){

float fahr, celsius;
float lower, upper, step;

lower = -40.0;
upper = 100.0;
step = 10.0;

/* lower limit of temperature scale */
/* upper limit */
/* step size */

printf("Celsius to Fahrenheit to conversion table:\n");

celsius = lower;
	while (celsius <= upper) {
         fahr = (9.0/5.0) * celsius + 32.0;
         printf("%3.0f\t%6.1f\n", celsius, fahr);
         celsius = celsius + step;
	} 
}

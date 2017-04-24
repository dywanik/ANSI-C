#include <stdio.h>
   /* print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300 */
int main(){

float fahr, celsius;
float lower, upper, step;

lower = 0.0;
upper = 300.0;
step = 20.0;

/* lower limit of temperature scale */
/* upper limit */
/* step size */

printf("Fahrenheit to Celsius conversion table:\n");

fahr = lower;
	while (fahr <= upper) {
         celsius = 5.0 * (fahr-32.0) / 9.0;
         printf("%3.0f\t%6.1f\n", fahr, celsius);
         fahr = fahr + step;
	} 
}

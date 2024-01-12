#include <stdio.h>
#include <math.h>

int main() {
   double a, b, c, d;
   double root1, root2, root3;
   double q, r, rho, theta;

   // Input coefficients of the cubic equation
   printf("Enter the coefficients a, b, c, d: ");
   scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

   // Calculate the coefficients of the reduced cubic equation
   q = (3 * a * c - b * b) / (9 * a * a);
   r = (9 * a * b * c - 27 * a * a * d - 2 * b * b * b) / (54 * a * a * a);

   // Calculate the discriminant
   rho = pow(r*r - q*q*q, 0.5);

   // Check if discriminant is non-negative
   if (isnan(rho)) {
      printf("The cubic equation has one real root and two complex conjugate roots.\n");
   } else {
      // Calculate the roots of the cubic equation
      theta = acos(r / (rho*pow(q,0.5)));
      root1 = -2 * pow(q,0.5) * cos(theta/3) - b / (3 * a);
      root2 = -2 * pow(q,0.5) * cos((theta+2*M_PI)/3) - b / (3 * a);
      root3 = -2 * pow(q,0.5) * cos((theta-2*M_PI)/3) - b / (3 * a);

      // Output the roots
      printf("The roots of the cubic equation are: %lf, %lf, %lf\n", root1, root2, root3);
   }

   return 0;
}

#include <stdio.h>
#include <math.h>

/*************************
** PROGRAM CALCULATIONS ** 
*************************/

void calculateSum (double a, double b) {
  double sum = 0;

  sum = a + b;
  printf("The result of the sum is: %.2lf\n", sum);
} // End void Calculate Sum

void calculateSubtraction (double a, double b) {
  double subtraction = 0;

  subtraction = a - b;
  printf("The result of the subtraction is: %.2lf\n", subtraction);
} // End void calculate subtraction

void calculateMultiplication (double a, double b) {
  double multiplication = 0;

  multiplication = a * b;
  printf("The result of the multiplication is: %.2lf\n", multiplication);
} // End void calculate multiplication

void calculateDivision (double a, double b) {
  double division = 0;

  division = a / b;
  printf("The result of the division is: %.2lf\n", division);
} // End void calculate division

void calculateRootSquare (double a) {
  double RootSquare = 0;

  RootSquare = sqrt(a);
  printf("The result of the square root is: %.2lf\n", RootSquare);
} // End void calculate square root

void calculatePotency (double a, double potency) {
  double answer = 0;

  answer = pow(a, potency);
  printf("The result of potentiation is: %.2lf\n", answer);
} // End void calculate power

void calculateSine (double a) {
  double sine = 0;

  sine = sin(a);
  printf("The sine of %.0lf is: %.2lf\n", a, sine);
} // End void calculate sine

void calculateCosine (double a) {
  double cosine = 0;

  cosine = cos(a);
  printf("The cosine of %.0lf is: %.2lf\n", a, cosine);
} // End void calculate cosine

void calculateHypotenuse (double a, double b) {
  double hypotenuse = 0;
  double answer = 0;

  hypotenuse = pow(a, 2) + pow (b, 2);
  answer = sqrt(hypotenuse);
  printf("The hypotenuse of the right triangle is: %.2lf\n", answer);
} // End void calculate hypotenuse

void calculateTangent (double a) {
  double tangent = 0;

  tangent = tan(a);
  printf("The tangent of %.0lf is: %.2lf\n", a, tangent);
} // End void calculate tangent

void calculateLogarithm (double a) {
  double logarithm = 0;
  double logarithm10 = 0;

  logarithm = log(a);
  printf("The natural logarithm of %.0lf is: %.2lf\n", a, logarithm);
  logarithm10 = log10(a);
  printf("The logarithm on base 10 of %.0lf is: %.2lf\n", a, logarithm10);
} // End void calculate logarithm

void calculateRectangleArea (double a, double b) {
  double area = 0;

  area = a * b;
  printf("The area of the rectangle is: %.2lf\n", area);
} // End void calculate triangle area

void calculateCircumferenceArea (double a) {
  double areac = 0;

  areac = 3.14 * pow(a, 2);
  printf("The area of the circumference is: %.2lf\n", areac);
} // End void calculate area circumference

void calculateFactorial (double a) {
  double factorial = 1;

  for (factorial = 1; a > 1; a--) {
    factorial = factorial * a;
  } // End for to calculate the factorial
  printf("The factorial is: %.2lf\n", factorial);
} // End void calculate factorial

  /************************
  **** INT MAIN START **** 
  ************************/
int main(void) {
  /************************
  ****PROGRAM VARIABLES**** 
  ************************/
  int code;            // Code reading
  double  a = 0;       // Reading numbers for calculations (input)
  double  b = 0;       // Reading numbers for calculations (input)
  int potency = 0;     // Potency reading 

  /************************
  **** INTERACTIVE MENU ***
  ************************/
  printf("CHOOSE THE CALCULATION YOU WISH TO PERFORM\n");
  printf("CODE\t\tCALCULATION TO BE MADE\n");
  printf("  1\t\t\t Sum\n");
  printf("  2\t\t\t Subtraction\n");
  printf("  3\t\t\t Multiplication\n");
  printf("  4\t\t\t Division\n");
  printf("  5\t\t\t Square root\n");
  printf("  6\t\t\t Potency\n");
  printf("  7\t\t\t Sine\n");
  printf("  8\t\t\t Cosine\n");
  printf("  9\t\t\t Right triangle hypotenuse\n");
  printf("  10\t\t Tangent\n");
  printf("  11\t\t Logarithm\n");
  printf("  12\t\t Area of a rectangle\n");
  printf("  13\t\t Area of a circle\n");
  printf("  14\t\t Factorial\n");
  printf("_____________________________________________________\n\n"); // Partition
  
  /***************************************************
  *****Reading the code entered within a do-while*****
  ***************************************************/
  do {
  printf("\nEnter the code of the calculation you want to perform: ");
  scanf("%i", &code);
    switch (code) {
      case 0: // End the program
      printf("The program has ended.");
      
      break;
      case 1: // sum
      printf("Enter the first number: ");
      scanf("%lf", &a);
      printf("Enter the second number: ");
      scanf("%lf", &b);
      
      calculateSum (a, b); // Calculate the sum -> pulling the created void
      
      break;
      case 2: // subtraction
      printf("Enter the first number: ");
      scanf("%lf", &a);
      printf("Enter the second number: ");
      scanf("%lf", &b);
      
      calculateSubtraction (a, b); // Calculate subtraction -> pulling the created void

      break;
      case 3: // multiplication
      printf("Enter the first number: ");
      scanf("%lf", &a);
      printf("Enter the second number: ");
      scanf("%lf", &b);

      calculateMultiplication (a, b); // Calculate multiplication -> pulling the created void
      
      break;
      case 4: // division
      printf("Enter the first number: ");
      scanf("%lf", &a);
      printf("Enter the second number: ");
      scanf("%lf", &b);

      calculateDivision (a, b); // Calculate the division -> pulling the created void
      
      break;
      case 5: // square root
      printf("Enter the number: ");
      scanf("%lf", &a);
      
      calculateRootSquare (a); // Calculate the square root -> pulling the created void

      break;
      case 6: // potency
      printf("Enter the number: ");
      scanf("%lf", &a);
      printf("Digite a potência: ");
      scanf("%i", &potency);

      calculatePotency (a, potency); // Calculate the potency -> pulling the created void
      
      break;
      case 7: // sine
      printf("Enter the number: ");
      scanf("%lf", &a);
      
      calculateSine (a); // Calculate the sine -> pulling the created void

      break;
      case 8: // cosine
      printf("Enter the number: ");
      scanf("%lf", &a);
      
      calculateCosine (a); // Calculate the cosine -> pulling the created void

      break;
      case 9: // hypotenuse
      printf("Enter the largest leg: ");
      scanf("%lf", &a);
      printf("Enter the smallest leg: ");
      scanf("%lf", &b);

      calculateHypotenuse (a, b); // Calculate the hypotenuse -> pulling the created void
      
      break;
      case 10: // tangent
      printf("Enter the number: ");
      scanf("%lf", &a);
      
      calculateTangent (a); // Calculate the tangent -> pulling the created void

      break;
      case 11: // logarithm
      printf("Enter the number: ");
      scanf("%lf", &a);
      
      calculateLogarithm (a); // Calculate the logarithm -> pulling the created void

      break;
      case 12: // rectangle area
      printf("Enter height: ");
      scanf("%lf", &a);
      printf("Enter the base: ");
      scanf("%lf", &b);
      
      calculateRectangleArea (a, b); // Calculate rectangle area -> pulling the created void

      break;
      case 13: // circumference area
      printf("Enter the radius: ");
      scanf("%lf", &a);
      
      calculateCircumferenceArea (a); // Calculate circumference area -> pulling the created void

      break;
      case 14: // factorial
      printf("Enter the number: ");
      scanf("%lf", &a);
      
      calculateFactorial (a); // Calculate factorial -> pulling the created void

      break;
      default:
      printf("The code entered is invalid.\n"); // If you enter a non-existent code

    } // End switch case
  } while (code != 0); // End of while receiving codes

  
  return 0;
} // End int main
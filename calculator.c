/* 

Which Facilities I need to implement => 
add, sub, mul, div, square, sqrt, factorial, to the power, sin, cos, tan, log, ln, exit

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h> // for exit function

int main()
{
    int op, opAnother, nCal = 0;
    float n1, n2;
    float res;
    do
    {
        printf(" What you wanna do: ");
        printf(" \n 1. Addition  \t \t 2. Subtraction \n 3. Multiplication \t 4. Division \n 5. Square \t \t 6. Square Root \n 7. Factorial \t \t 8. x^y \n 9. Deg To Rad \t \t 10. Rad To Deg \n 11. Sin(x) \t \t 12. ln(x) \n 13. log10(x) \t \t 14. Tan(x) \n 15. Cos(x) \t \t 16. Exit \n");
        printf(" **** Chose One **** : ");

        scanf("%d", &op);

        switch (op)
        {
        case 1:
            // Add two numbers
            printf(" Chosen operation is: Addition");
            printf("\n Enter First Number: ");
            scanf(" %f", &n1);
            printf(" Enter Second Number: ");
            scanf(" %f", &n2);
            res = n1 + n2;
            printf(" Addition of %f and %f is: %.2f", n1, n2, res);
            break;

        case 2:
            printf(" Chosen operation is: Subtraction");
            printf("\n Enter First Number: ");
            scanf(" %f", &n1);
            printf(" Enter Second Number: ");
            scanf(" %f", &n2);
            res = n1 - n2;
            printf(" Subtraction of %f and %f is: %.2f", n1, n2, res);
            break;

        case 3:
            printf(" Chosen operation is: Multiplication");
            printf("\n Enter First Number: ");
            scanf(" %f", &n1);
            printf(" Enter Second Number: ");
            scanf(" %f", &n2);
            res = n1 * n2;
            printf(" Multiplication of two numbers is: %.2f", res);
            break;

        case 4:
            printf(" Chosen operation is: Division");
            printf("\n Enter First Number: ");
            scanf(" %f", &n1);
            printf(" Enter Second Number: ");
            scanf(" %f", &n2);
            if (n2 == 0)
            {
                printf(" \n You have put the value of divisor is zero. Please enter another value ");
                scanf("%f", &n2);
            }
            res = n1 / n2;
            printf(" Division of %f and %f is: %.2f", n1, n2, res);
            break;

        case 5:
            printf(" Chosen operation is: Square");
            printf("\n Enter The Number: ");
            scanf(" %f", &n1);

            res = n1 * n1;
            printf(" Square of %f number is: %.2f", n1, res);
            break;

        case 6:
            printf(" Chosen operation is: Square Root");
            printf("\n Enter The Number: ");
            scanf(" %f", &n1);

            res = sqrt(n1);
            printf(" Square Root of %f numbers is: %.2f", n1, res);
            break;

        case 7:
            printf(" Chosen operation is: Factorial");
            printf("\n Enter The Number: ");
            scanf("%f", &n1);

            if (!n1){
                res = 1;
                printf(" Factorial of %.2f is %.2f", n1, res);
            }else if(n1 < 0) {
                printf("Factorials of negative real numbers are complex numbers.");
            }else{
                int mul = 1;
                for (int i = n1; i; i--)
                {
                    mul *= i;
                }
                res = mul;
                printf(" Factorial of %.2f is %.2f", n1, res);
            }
            break;

        case 8:
            printf(" Chosen operation is: x^y");
            printf("\n Enter The Base: ");
            scanf("%f", &n1);
            printf(" Enter The Power: ");
            scanf("%f", &n2);

            res = pow(n1, n2);

            printf(" %f^%f is %.2f", n1, n2, res);
            break;

        case 9:
            printf(" Chosen operation is: Deg to Rad");
            printf("\n Enter The angle in degrees: ");
            scanf("%f", &n1);

            // pi / 180 = 0.0174532925

            res = 0.0174532925 * n1;
            printf("%.2f degrees = %f radians", n1, res);
            break;

        case 10:
            printf(" Chosen operation is: Rad to Deg");
            printf("\n Enter The angle in radians: ");
            scanf("%f", &n1);

            // 180 / pi = 57.2957795

            res = 57.2957795 * n1;
            printf("%f radians = %.2f degrees", n1, res);
            break;

        case 11:

            printf(" Chosen operation is: Sin(x)");

            printf("\n Which form of measurement do you wanna do?");
            printf("\n 1. Radian \t \t 2. Degree");
            printf("\n **** Chose One **** : ");

            scanf("%d", &opAnother);
            printf("\n Enter The angle: ");
            scanf("%f", &n1);

            if (opAnother == 1)
            {
                res = sin(n1);
                printf("sin(%f rad) is %f", n1, res);
            }
            else if (opAnother == 2)
            {
                // printf("\n Enter The angle: ");
                // scanf("%f", &n1);
                float valInRad = 0.0174532925 * n1;
                res = sin(valInRad);
                printf("sin(%f deg) is %f", n1, res);
            }
            else
            {
                printf("Please Enter a valid option.");
            }
            break;

        case 12:
            printf(" Chosen operation is: Natural Log->(ln(x))");
            printf("\n Enter The Value: ");
            scanf("%f", &n1);

            res = log(n1);

            printf("ln(%f) is %f", n1, res);
            break;

        case 13:
            printf(" Chosen operation is: Common Log->(log10(x))");
            printf("\n Enter The Value: ");
            scanf("%f", &n1);

            res = log10(n1);

            printf("log(%f) is %f", n1, res);
            break; 

        case 14:

            printf(" Chosen operation is: Tan(x)");

            printf("\n Which form of measurement do you wanna do?");
            printf("\n 1. Radian \t \t 2. Degree");
            printf("\n **** Chose One **** : ");

            scanf("%d", &opAnother);
            printf("\n Enter The angle: ");
            scanf("%f", &n1);

            if (opAnother == 1)
            {
                res = tan(n1);
                printf("tan(%f rad) is %f", n1, res);
            }
            else if (opAnother == 2)
            {
                // printf("\n Enter The angle: ");
                // scanf("%f", &n1);
                float valInRad = 0.0174532925 * n1;
                res = tan(valInRad);
                printf("tan(%f deg) is %f", n1, res);
            }
            else
            {
                printf("Please Enter a valid option.");
            }
            break;

        case 15:

            printf(" Chosen operation is: Cos(x)");

            printf("\n Which form of measurement do you wanna do?");
            printf("\n 1. Radian \t \t 2. Degree");
            printf("\n **** Chose One **** : ");

            scanf("%d", &opAnother);
            printf("\n Enter The angle: ");
            scanf("%f", &n1);

            if (opAnother == 1)
            {
                res = cos(n1);
                printf("cos(%f rad) is %f", n1, res);
            }
            else if (opAnother == 2)
            {
                float valInRad = 0.0174532925 * n1;
                res = cos(valInRad);
                printf("cos(%f deg) is %f", n1, res);
            }
            else
            {
                printf("Please Enter a valid option.");
            }
            break;           
        case 16:
            printf(" Chosen operation is: Exit.Thanks for using.");
            exit(0);
            // break; we don't need to use break as we r using exit(0) which forces a unconditional and immediate termination of the program.

        default:
            printf(" You have put a value out of the given option.Please Try Again! ");
            break;
        }
        nCal++;
        printf(" \n \n ****End Of %d Calculation**** \n ", nCal);
    } while (op != 16);

    return 0;
}
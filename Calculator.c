#include <stdio.h>
#include <math.h>
#include <string.h>

long int Bin_to_Dec(long int); //1:BINARY TO DECIMAL
long int Bin_to_Oct(long int); //2:BINARY TO OCTAL
long int Bin_to_Hex(long int); //3:BINARY TO HEXA-DECIMAL
long int Dec_to_Bin(long int); //4:DECIMAL TO BINARY
long int Dec_to_Oct(long int); //5:DECIMAL TO OCTAL
long int Dec_to_Hex(long int); //6:DECIMAL TO HEXA-DECIMAL
long int Oct_to_Bin(long int); //7:OCTAL TO BINARY
long int Oct_to_Dec(long int); //8:OCTAL TO DECIMAL
long int Oct_to_Hex(long int); //9:OCTAL TO HEXA-DECIMAL
void Hex_to_Bin(char[]);       //10:HEXA-DECIMAL TO BINARY
void Hex_to_Dec(char[]);       //11:HEXA-DECIMAL TO DECIMAL
void Hex_to_Oct(char[]);       //12:HEXA-DECIMAL TO OCTAL
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main()
{
    int op, num = 1, check;
    long int bin, oct, dec;
    char hex[100];
    int i, j, space; //  FOR PATTERN

    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");

    while (num != 0)
    {
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");
        printf("=> BINARY <=                    => DECIMAL <=\n");
        printf("1: Binary to Decimal.           4: Decimal to Binary.\n");
        printf("2: Binary to Octal.             5: Decimal to Octal.\n");
        printf("3: Binary to Hexa-Decimal.      6: Decimal to Hexa-Decimal.\n\n");
        printf("=> OCTAL <=                     => HEXA-DECIMAL <=\n");
        printf("7: Octal to Binary.             10: Hexa-Decimal to Binary.\n");
        printf("8: Octal to Decimal.            11: Hexa-Decimal to Decimal.\n");
        printf("9: Octal to Hexa-Decimal.       12: Hexa-Decimal to Octal.\n");

        /*printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");

        printf("\n=> DECIMAL <=\n");
        printf("4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");

        printf("\n=> OCTAL <=\n");
        printf("7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");

        printf("\n=> HEXA-DECIMAL <=\n");
        printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");*/

        printf("\n=>  SIMPLE CALCULATIONS  <=\n");
        printf("Enter 13 for Addition \n");
        printf("Enter 14 for Subtraction \n");
        printf("Enter 15 for Multiplication \n");
        printf("Enter 16 for Division \n");
        printf("Enter 17 for Modulus\n");
        printf("Enter 18 for Power \n");
        printf("Enter 19 for Factorial \n");
        printf("Enter 20  for square \n");
        printf("Enter 21  for cube \n");
        printf("Enter 22 for squareroot\n\n");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\n***BINARY TO DECIMAL***\n");
        D:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf("%ld", &bin);
            // CHECKING INPUT IS IN BINARY FORM
            check = bin;

            while (check != 0)
            {
                num = check % 10;
                if (num > 1)
                {
                    printf("\n%ld IS NOT BINARY NUMBER.\n", bin);
                    printf("***TRY AGAIN****\n");
                    goto D;
                }
                else
                    check = check / 10;
            }

            Bin_to_Dec(bin);
            break;

        case 2:
            printf("\n***BINARY TO OCTAL***\n");
        E:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf("%ld", &bin);
            // CHECKING INPUT IS IN BINARY FORM
            check = bin;

            while (check != 0)
            {
                num = check % 10;
                if (num > 1)
                {
                    printf("\n%ld IS NOT BINARY NUMBER.\n", bin);
                    printf("***TRY AGAIN****\n");
                    goto E;
                }
                else
                    check = check / 10;
            }

            Bin_to_Oct(bin);
            break;

        case 3:
            printf("\n***BINARY TO HEXA-DECIMAL***\n");
        F:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf("%ld", &bin);
            // CHECKING INPUT IS IN BINARY FORM
            check = bin;

            while (check != 0)
            {
                num = check % 10;
                if (num > 1)
                {
                    printf("\n%ld IS NOT BINARY NUMBER.\n", bin);
                    printf("***TRY AGAIN****\n");
                    goto F;
                }
                else
                    check = check / 10;
            }

            Bin_to_Hex(bin);
            break;

        case 4:
            printf("\n***DECIMAL TO BINARY***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf("%ld", &dec);
            Dec_to_Bin(dec);
            break;

        case 5:
            printf("\n***DECIMAL TO OCTAL***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf("%ld", &dec);
            Dec_to_Oct(dec);
            break;

        case 6:
            printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf("%ld", &dec);
            Dec_to_Hex(dec);
            break;

        case 7:
            printf("\n***OCTAL TO BINARY***\n");
        A:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf("%ld", &oct);
            // CHECKING INPUT IS IN OCTAL FORM
            check = oct;

            while (check != 0)
            {
                num = check % 10;
                if (num > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", num);
                    goto A;
                }
                else
                {
                    check = check / 10;
                    i++;
                }
            }
            Oct_to_Bin(oct);
            break;

        case 8:
            printf("\n***OCTAL TO DECIMAL***\n");
        B:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf("%ld", &oct);
            // CHECKING INPUT IS IN OCTAL FORM
            check = oct;

            while (check != 0)
            {
                num = check % 10;
                if (num > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", num);
                    goto B;
                }
                else
                {
                    check = check / 10;
                    i++;
                }
            }
            Oct_to_Dec(oct);
            break;

        case 9:
            printf("\n***OCTAL TO HEXA-DECIMAL***\n");
        C:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf("%ld", &oct);
            // CHECKING INPUT IS IN OCTAL FORM
            check = oct;

            while (check != 0)
            {
                num = check % 10;
                if (num > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", num);
                    goto C;
                }
                else
                {
                    check = check / 10;
                    i++;
                }
            }
            Oct_to_Hex(oct);
            break;

        case 10:
            printf("\n***HEXA-DECIMAL TO BINARY***\n");
        X:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", hex);
            //check
            for (i = strlen(hex) - 1; i >= 0; i--)
            {
                if (hex[i] > 'f' && hex[i] <= 'z' || hex[i] > 'F' && hex[i] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", hex[i]);
                    goto X;
                }
            }
            Hex_to_Bin(hex);
            break;

        case 11:
            printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
        Y:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", hex);
            //check
            for (i = strlen(hex) - 1; i >= 0; i--)
            {
                if (hex[i] > 'f' && hex[i] <= 'z' || hex[i] > 'F' && hex[i] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", hex[i]);
                    goto Y;
                }
            }
            Hex_to_Dec(hex);
            break;

        case 12:
            printf("\n***HEXA-DECIMAL TO OCTAL***\n");
        Z:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", hex);
            //check
            for (i = strlen(hex) - 1; i >= 0; i--)
            {
                if (hex[i] > 'f' && hex[i] <= 'z' || hex[i] > 'F' && hex[i] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", hex[i]);
                    goto Z;
                }
            }
            Hex_to_Oct(hex);
            break;

        case 13:
            addition();
            break;
        case 14:
            subtraction();
            break;
        case 15:
            multiplication();
            break;
        case 16:
            division();
            break;
        case 17:
            modulus();
            break;
        case 18:
            power();
            break;
        case 19:
            factorial();
            break;
        case 20:
            square();
            break;
        case 21:
            cube();
            break;
        case 22:
            squareroot();
            break;

        default:
            printf("\n***INVALID NUMBER***\n");
            break;
        }
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");
        scanf("%d", &num);
    }

    space = 3 + 35;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    space = 37;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;
        for (j = 1; j <= 2 * (3 - i) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

long int Bin_to_Dec(long int bin)
{
    int rem, sum = 0, i = 0;
    while (bin != 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        sum = sum + rem * pow(2, i);
        i++;
    }

    printf("\nEquivalent Decimal Number : %d", sum);
    return 0;
}

long int Bin_to_Oct(long int bin)
{
    int i = 0, rem, sum = 0, remain[100], len = 0;

    while (bin != 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        sum = sum + rem * pow(2, i);
        i++;
    }
    i = 0;
    while (sum != 0)
    {
        remain[i] = sum % 8;
        sum = sum / 8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%d", remain[i]);
    }
    return 0;
}

long int Bin_to_Hex(long int bin)
{
    int rem, i = 0, sum = 0, remain[100], len = 0;

    while (bin != 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        sum = sum + rem * pow(2, i);
        i++;
    }
    i = 0;
    while (sum != 0)
    {
        remain[i] = sum % 16;
        sum = sum / 16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        switch (remain[i])
        {
        case 10:
            printf("A");
            break;

        case 11:
            printf("B");
            break;

        case 12:
            printf("C");
            break;

        case 13:
            printf("D");
            break;

        case 14:
            printf("E");
            break;

        case 15:
            printf("F");
            break;

        default:
            printf("%d", remain[i]);
        }
    }
    return 0;
}

long int Dec_to_Bin(long int dec)
{
    int i,a[50];
    for(i=0;dec>0;i++)    
    {    
        a[i]=dec%2;    
        dec=dec/2;    
    }    
    printf("\nBinary of Given Number is=");    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",a[i]);    
    }    
    return 0;
}

long int Dec_to_Oct(long int dec)
{
    int octalNumber = 0, i = 1;

    while (dec != 0)
    {
        octalNumber += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    printf("The no. in octal is %d", octalNumber);
    return 0;
}

long int Dec_to_Hex(long int dec)
{
    char hexadecimalNumber[100];

    int i=1,j,temp;
    while(dec!=0) {
		temp = dec % 16;
		//To convert integer into character
		if( temp < 10)
		           temp =temp + 48; else
		         temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		dec = dec / 16;
	}
	for (j = i -1 ;j> 0;j--){
	printf("%c",hexadecimalNumber[j]);}

    return 0;
}

long int Oct_to_Bin(long int oct)
{
    int rem[50], len = 0, decimal = 0, i = 0, num, ans;

    while (oct != 0)
    {
        ans = oct % 10;
        decimal = decimal + ans * pow(8, i);
        i++;
        oct = oct / 10;
    }

    i = 0;
    do
    {
        rem[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
        len++;
    } while (decimal != 0);

    printf("\nEquivalent Binary Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%d", rem[i]);
    }
    return 0;
}

long int Oct_to_Dec(long int oct)
{
    int decimal = 0, i = 0, num, ans;

    while (oct != 0)
    {
        ans = oct % 10;
        decimal = decimal + ans * pow(8, i);
        i++;
        oct = oct / 10;
    }
    printf("\nEquivalent Decimal Number : %d", decimal);
    return 0;
}

long int Oct_to_Hex(long int oct)
{
    int rem[50], len = 0, decimal = 0, i = 0, num, ans = 0;
    while (oct != 0)
    {
        ans = oct % 10;
        decimal = decimal + ans * pow(8, i);
        i++;
        oct = oct / 10;
    }
    i = 0;
    while (decimal != 0)
    {
        rem[i] = decimal % 16;
        decimal = decimal / 16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        switch (rem[i])
        {
        case 10:
            printf("A");
            break;

        case 11:
            printf("B");
            break;

        case 12:
            printf("C");
            break;

        case 13:
            printf("D");
            break;

        case 14:
            printf("E");
            break;

        case 15:
            printf("F");
            break;

        default:
            printf("%d", rem[i]);
        }
    }
    return 0;
}

void Hex_to_Bin(char hex[])
{
    int i = 0;
    printf("\nEquivalent Binary Number : ");
    for (i = 0; i < strlen(hex); i++)
    {
        switch (hex[i])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;

        default:
            printf("\n Invalid hexa digit %c ", hex[i]);
        }
    }
}

void Hex_to_Dec(char hex[])
{
    int i, num = 0, power = 0, decimal = 0;

    for (i = strlen(hex) - 1; i >= 0; i--)
    {
        if (hex[i] == 'A' || hex[i] == 'a')
        {
            num = 10;
        }
        else if (hex[i] == 'B' || hex[i] == 'b')
        {
            num = 11;
        }
        else if (hex[i] == 'C' || hex[i] == 'c')
        {
            num = 12;
        }
        else if (hex[i] == 'D' || hex[i] == 'd')
        {
            num = 13;
        }
        else if (hex[i] == 'E' || hex[i] == 'e')
        {
            num = 14;
        }
        else if (hex[i] == 'F' || hex[i] == 'f')
        {
            num = 15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num = hex[i] - 48;
        }

        decimal = decimal + num * pow(16, power);
        power++;
    }
    printf("\nEquivalent Decimal Number : %d", decimal);
}

void Hex_to_Oct(char hex[])
{
    int i, len, num = 0, power = 0, decimal = 0, rem[100];

    for (i = strlen(hex) - 1; i >= 0; i--)
    {
        if (hex[i] == 'A' || hex[i] == 'a')
        {
	    num = 10;
        }
        else if (hex[i] == 'B' || hex[i] == 'b')
        {
            num = 11;
        }
        else if (hex[i] == 'C' || hex[i] == 'c')
        {
            num = 12;
        }
        else if (hex[i] == 'D' || hex[i] == 'd')
        {
            num = 13;
        }
        else if (hex[i] == 'E' || hex[i] == 'e')
        {
            num = 14;
        }
        else if (hex[i] == 'F' || hex[i] == 'f')
        {
            num = 15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num = hex[i] - 48;
        }

        decimal = decimal + num * pow(16, power);
        power++;
    }

    i = 0, len = 0;
    while (decimal != 0)
    {
        rem[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
	printf("%d", rem[i]);
    }
}

void addition()
{
    int a,b;
    printf("Enter FIRST number : ");
    scanf("%d", &a);
    printf("Enter SECOND number : ");
    scanf("%d", &b);
    printf("The sum of a and b is %d\n", a + b);
}
void subtraction()
{
    int a,b;
    printf("Enter FIRST number : ");
    scanf("%d", &a);
    printf("Enter SECOND number : ");
    scanf("%d", &b);
    printf("The subtraction of a and b is %d\n", a - b);
}
void multiplication()
{
    int a, b;
    printf("Enter FIRST number : ");
    scanf("%d", &a);
    printf("Enter SECOND number : ");
    scanf("%d", &b);
    printf("The multiplication of a and b is %d\n", a * b);
}
void division()
{
    int a, b;
    printf("Enter FIRST number : ");
    scanf("%d", &a);
    printf("Enter SECOND number : ");
    scanf("%d", &b);
    printf("The division of a and b is %f\n", (float)a / (float)b);
}
void modulus()
{
    int a,b;
    printf("Enter FIRST number : ");
    scanf("%d", &a);
    printf("Enter SECOND number : ");
    scanf("%d", &b);
    printf("The modulus of a and b is %d\n", a % b);
}
void factorial()
{
    int i,n, factorial=1;
    printf("Enter the number you want the factorial of: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
	factorial = factorial * i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d", n, factorial);
}
void power()
{
    double b;
    double p;
    printf("Enter the base : ");
    scanf("%lf", &b);
    printf("Enter the power : ");
    scanf("%lf",&p);
    printf("%f to the power %lf is %lf",b,p,pow(b,p));
}
void square()
{
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf", &b);
    printf("The square of %lf is %lf", b,b*b);
}
void cube()
{
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf", &b);
    printf("The cube of %lf is %lf", b, b*b*b);
}
void squareroot()
{
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf", &b);
    printf("The square root of %lf is %lf", b, sqrt(b));
}

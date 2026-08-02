#include <stdio.h>      // Standard Input Output Library
#include <stdlib.h>     // Standard Utility Functions
#include <string.h>     // String Functions
#include <math.h>       // Mathematical Functions

//MACRO (#define) Used to create constants
#define PI 3.14159

// GLOBAL VARIABLE Accessible by every function
int globalVariable = 100;

// FUNCTION DECLARATION (Prototype) Tells compiler that function exists
void greet();
int add(int a, int b);

// STRUCTURE Used to store multiple related data
struct Student
{
    int roll;
    char name[30];
    float marks;
};

// MAIN FUNCTION Program execution starts here
int main()
{

// LOCAL VARIABLES
    int age = 19;
    float height = 174.5;
    char grade = 'A';
    double salary = 25000.50;

// PRINTING OUTPUT
    printf("===== BASIC OUTPUT =====\n");
    printf("Age = %d\n", age);          // %d -> Integer
    printf("Height = %.2f\n", height);  // %.2f -> Float
    printf("Grade = %c\n", grade);      // %c -> Character
    printf("Salary = %.2lf\n", salary); // %lf -> Double

// CONSTANT
    const int MAX = 100;
    printf("Constant = %d\n", MAX);

// ARITHMETIC OPERATORS
    int a = 20;
    int b = 10;
    printf("\nArithmetic Operations\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

// RELATIONAL OPERATORS
    printf("\nRelational Operators\n");
    printf("%d\n", a > b);
    printf("%d\n", a < b);
    printf("%d\n", a == b);
    printf("%d\n", a != b);

// LOGICAL OPERATOR
    printf("\nLogical Operators\n");
    printf("%d\n", (a > b && b > 5));
    printf("%d\n", (a > b || b < 5));
    printf("%d\n", !(a == b));

// IF ELSE
    if (age >= 18)
    {
        printf("\nAdult\n");
    }
    else
    {
        printf("Minor\n");
    }

// SWITCH CASE    
    switch (grade)
    {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        default:
            printf("Average\n");
    }

// FOR LOOP    
    printf("\nFor Loop\n");
    for(int i=1;i<=5;i++)
    {
        printf("%d ",i);
    }

// WHILE LOOP    
    printf("\n\nWhile Loop\n");
    int i=1;
    while(i<=5)
    {
        printf("%d ",i);
        i++;
    }

// DO WHILE LOOP
printf("\n\nDo While Loop\n");
    i=1;
    do
    {
        printf("%d ",i);
        i++;
    }
    while(i<=5);

// ARRAY
    int numbers[5]={10,20,30,40,50};
    printf("\n\nArray Elements\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",numbers[i]);
    }

// STRING    
    char city[]="Mumbai";
    printf("\n\nString = %s\n",city);

// POINTER    
    int num=50;
    int *ptr=&num;
    printf("\nPointer Value = %d\n",*ptr);
    printf("Pointer Address = %p\n",ptr);

// STRUCTURE    
    struct Student s1;
    s1.roll=1;
    strcpy(s1.name,"Rahul");
    s1.marks=89.5;
    printf("\nStudent Details\n");
    printf("%d\n",s1.roll);
    printf("%s\n",s1.name);
    printf("%.2f\n",s1.marks);

// FUNCTION CALL    
    greet();
    int result=add(5,8);
    printf("Addition by Function = %d\n",result);

// MATH FUNCTION
    printf("\nSquare Root = %.2f\n",sqrt(64));
    printf("Power = %.2f\n",pow(2,5));

// GLOBAL VARIABLE    
    printf("\nGlobal Variable = %d\n",globalVariable); 
// Indicates successful execution    
    return 0;
}

// Function with no return value
void greet()
{
    printf("\nHello from Function!\n");
}

// Function returning an integer
int add(int a,int b)
{
    return a+b;
}

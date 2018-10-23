#include <stdio.h>

int add(int a, int b)     { return a+b; }
int sub(int a, int b)     { return a-b; }
int mul(int a, int b)     { return a*b; }
int divide(int a, int b)  { return b==0 ? 0 : a/b; }

int (*p[4])(int, int) = { add, sub, mul, divide };

int main()
{
    int a = 10;
    int b = 2;
    
    int opr;
    int res;
    
    printf("0: addition, 1: subtraction, 2: multiplication, 3: division\nInput: ");
    scanf("%d", &opr);
    
    if(opr >= 0 && opr <= 3)
    {
        res = (*p[opr])(a, b);                              // == p[opr](a,b) in C; good practice because of C++ functions in classes
        printf("Result for %d and %d = %d", a, b, res);
    }
    
    return 0;
}

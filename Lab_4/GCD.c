//4. Implement GCD (Greatest Commom Divisor) Computation using recursion.//

#include <stdio.h>
long gcd(int x, int y);
int main()
{
    int Num1, Num2;

    printf("Please Enter two integer Values \n");
    scanf("%d %d", &Num1, &Num2);

    printf("GCD of %d and %d is %d.", Num1, Num2, gcd(Num1, Num2));
    return 0;
}
long gcd(int x, int y) 
{
  if (y == 0) {
  	return x;
  }
  else {
    return gcd(y, x % y);
  }
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
// Returns sum of first
// n natural numbers
int recurSum(int n)
{
    if (n <= 1)
        return n;
    return n + recurSum(n - 1);
}
 
// Driver code
int main()
{
    int n = 5;

    printf("Write me n: ");
    scanf("%d", &n);
    printf("%d", recurSum(n));
    return 0;
}
















//              ***************************factorial using recursion*********************************

// #include <stdio.h>

// int factorial(int x)
// {
//     if (x == 1 || x == 0)
//         return 1;
//     int fact = x * factorial(x - 1);
//     return fact;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int fact = factorial(n);
//     printf("%d", fact);

//     return 0;
// }

//       **************************************print n to 1 using recursion****************************************

// #include <stdio.h>

// void increase(int x)
// {
//     if (x == 0)
//         return;
//     printf("%d\n", x);
//     increase(x - 1);
//     return;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     increase(n);

//     return 0;
// }

//         **********************************************print 1 to n using recursion***********************************

// #include <stdio.h>

// void increase(int x)
// {
//     if (x == 0)
//         return;
//     increase(x - 1);
//     printf("%d\n", x);
//     return;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     increase(n);

//     return 0;
// }

//  ********************************************print sum of 1 to n******************************************

// #include <stdio.h>

// int sum(int n)
// {
//     int x;
//     if (n == 0)
//         return 0;
//     x = n + sum(n - 1);
//     return x;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", sum(n));

//     return 0;
// }

//***************************************** a rised to the power b***************************************

// #include <stdio.h>

// int power(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     return a * power(a, b - 1);
// }

// int main()
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     int x = power(a, b);
//     printf("%d", x);

//     return 0;
// }

//**************************************** nth fibonacci number**********************************************

// #include <stdio.h>

// int fibo(int n)
// {
//     if (n == 2 || n == 1)
//         return 1;
//     return fibo(n - 1) + fibo(n - 2);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", fibo(n));
//     return 0;
// }

//  ****************************************stair path*************************************************

// #include <stdio.h>

// int way(int stair)
// {
//     if (stair <= 2)
//         return stair;
//     return way(stair - 1) + way(stair - 2);
// }

// int main()
// {
//     int stair;
//     scanf("%d", &stair);
//     printf("Total ways : %d", way(stair));
//     return 0;
// }

//  ****************************************maze path ***************************************************

// #include <stdio.h>

// int way(int x, int y, int r, int c)
// {
//     int rightways = 0, downways = 0;
//     if (x == r && y == c)
//         return 1;
//     if (x == r)
//         rightways += way(x, y + 1, r, c);
//     if (y == c)
//         downways += way(x + 1, y, r, c);
//     if (x < r && y < c)
//     {
//         rightways += way(x, y + 1, r, c);
//         downways += way(x + 1, y, r, c);
//     }
//     int totalways = rightways + downways;
//     return totalways;
// }

// int main()
// {
//     int row, col;
//     printf("Enter row number: ");
//     scanf("%d", &row);
//     printf("Enter column number: ");
//     scanf("%d", &col);
//     printf("Total ways: %d", way(1, 1, row, col));
//     return 0;
// }

// ************************************* maze path another process ************************

// #include <stdio.h>

// int way(int r, int c)
// {
//     int rightways = 0, downways = 0;
//     if (r == 1 && c == 1)
//         return 1;
//     if (r == 1)
//         rightways += way(r, c - 1);
//     if (c == 1)
//         downways += way(r - 1, c);
//     if (r > 1 && c > 1)
//     {
//         rightways += way(r, c - 1);
//         downways += way(r - 1, c);
//     }
//     int totalways = rightways + downways;
//     return totalways;
// }

// int main()
// {
//     int row, col;
//     printf("Enter row number: ");
//     scanf("%d", &row);
//     printf("Enter column number: ");
//     scanf("%d", &col);
//     printf("Total ways: %d", way(row, col));
//     return 0;
// }

// ********************************** Pre In Post ****************************************************

// #include <stdio.h>

// void PreInPost(int n)
// {
//     if (n == 0)
//         return;
//     printf("Pre %d\n", n);
//     PreInPost(n - 1);
//     printf("In %d\n", n);
//     PreInPost(n - 1);
//     printf("Post %d\n", n);
// }

// int main()
// {
//     printf("Enter number: ");
//     int n;
//     scanf("%d", &n);
//     PreInPost(n);
//     return 0;
// }

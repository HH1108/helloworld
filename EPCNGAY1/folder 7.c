#include<stdio.h>
//7.2
//int main()
//{
//  int x,y;
//  char a = 'y';
//  x = y = 0;
//  if (a == 'y')
//  {
//   x += 5;
//   printf("The numbers are %d and \t%d", x, y);
//  }
// }
 
 //7.3
// int main()
// {
//   int year;
//   printf("\nPlease enter a year:");
//   scanf("%d", &year);
//
//   if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//    printf("\n%d is a leap year!", year);
// }

//7.4
//int main()
// {
//   int num, res;
// 
//   printf("Enter a number: ");
//   scanf("%d", &num);
//
//   res = num % 2;
//
//   if (res == 0)
//    printf("The number is Even");
//   else
//    printf("The number is Odd");
// }

//7.5
//int main()
// {
//   char c;
//   printf("Please enter a character: ");
//   scanf("%c", &c);
// 
//   if (c >= 'A' && c <= 'Z')
//    printf("Lowercase character = %c", c + 'a' - 'A');
//   else
//    printf("Character Entered is = %c", c);
//}
//
//7.6
//  main()
// {
//  int x;
//  x = 0;
//
//  printf("Enter Choice (1 - 3): ");
//  scanf("%d", &x);
//
//  if (x == 1)
//   printf("\nChoice is 1");
//  else if ( x == 2)
//   printf("\nChoice is 2");
//  else if ( x == 3)
//   printf("\nChoice is 3");
//  else 
//   printf("\nInvalid Choice: Invalid Choice");
// }
// 
// 7.7
// int main()
//{
//  int x, y;
//  x = y = 0;
//  printf("Enter Choice (1 - 3): " );
//  scanf("%d", &x);
//  if(x == 1)
//  {
//   printf("\nEnter value for y (1 - 5): ");
//   scanf ("%d", &y);
//   if (y <= 5)
//    printf("\nThe value for y is: %d", y);
//   else
//    printf("\nThe value of y exceeds 5");
//  }
//  else
//   printf ("\nChoice entered was not 1");
// }
// 
//7.8
//int main()
//{
//
//  int productcode;
//  float orderamount, rate = 0.0;
//  printf("\nPlease enter the product code: " );
// 
//  scanf("%d", &productcode);
//  printf("Please enter the order amount: ");
//  scanf("%f", &orderamount);
//
//  if (productcode == 1)
//  {
//   if (orderamount >= 500)
//
//    rate = 0.12;
//
//   else if (orderamount >= 300)
//
//    rate = 0.08;
//
//   else
// 
//    rate = 0.02;
//  }
//
//  else if (productcode == 2)
//  {
//  
//   if (orderamount >= 2000)
//   
//    rate = 0.10;
//
//   else if (orderamount >= 1500)
//   
//    rate = 0.05;
//  } 
// 
//   else if (productcode == 3)
//  {
//  
//   if (orderamount >= 5000)
//  
//    rate = 0.10;
//
//   else if (orderamount >= 2500)
//   
//    rate = 0.05;
//  }     
//  
//  orderamount -= orderamount * rate;
//
//  printf( "The net order amount is % .2f \n", orderamount);
//}
//
//7.9
//  main ()
// {
//  char ch;
//  
//  printf("\nEnter a lower cased alphabet (a - z): ");
//  scanf("%c", &ch);
//  
//  if (ch < 'a' || ch > 'z')
//   printf("\nCharacter not a lower cased alphabet");
//  else
//   switch (ch)
//   {
//   case 'a':
//   case 'e':
//   case 'i':
//   case 'o':
//   case 'u':
//    printf("\nCharacter is a vowel");
//    break;
//
//   case 'z':
//    printf ("\nLast Alphabet (z) was entered");
//    break;
//
//   default:
//    printf("\nCharacter is a consonant");
//    break;
//   }
//}
//
//7.10
//int main()
// {
//   int basic;
//
//   printf("\n Please enter your basic: ");
//
//   scanf("%d", &basic);
//   switch (basic)
//   {
//    case 200: 
//     printf("\n Bonus is dollar %d\n", 50);
//         break;
//  
//    case 300:
//     printf("\n Bonus is dollar %d\n", 125);
//         break;
//
//    case 400:
//     printf("\n Bonus is dollar %d\n", 140);
//         break;
//
//    case 500:
//     printf("\n Bonus is dollar %d\n", 175);
//         break;
//
//    default:
//     printf("\n Invalid entry");
//     break;
//   }
// }
 



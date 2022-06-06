#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//argc(Argument count) is int and stores number of command-line arguments passed by user.
//argv is array of character pointers

int main(int argc, char *argv[])
{
  float num1;
  float num2;
  char O;                                           //variable O is operator.
  float Answer;

  printf("Welcome  to simple calculator \n\n");
  
  scanf("%f %c %f", &num1, &O, & num2);

  switch(O)
    {
    case '/': Answer = num1/num2;
      break;
    case '*': Answer = num1*num2;
      break;
    case '+': Answer = num1+num2;
      break;
    case '-': Answer = num1-num2;
      break;
    case '^': Answer = pow(num1,num2);
      break;
    default: printf("Invalid Operator");
    }
  printf("%.8g %c %.8g =  %.7g \n\n",num1,O, num2, Answer);
  
  return 0;
}
//B.Sreeteja

#include "holberton.h"

int print_integrer(va_list number)
{
	long num = va_arg(number, int);
    int condition = 1;
    long num_print = 0;
    long digit = 1;
    long divider10 = 10;
    long divider = 10;
	int cont = 0;

    if(num < 0)
    {
      num = -1 * num;
      write(1, "-", 1);
	  cont++;
    }
    if (num > 10)
    {
      while(condition)
      {
          while((num /divider) > 10)
          {
              divider10 *= 10;
              divider = divider10;
          }
          if(digit == 1)
          {
              num_print = (num / divider10);
              digit = 0;
          }
          else
          {
              num_print = (num /divider10);
              num_print %= 10;
          }

          num_print = num_print + '0';
          write(1, &num_print, 1);
		  cont++;
          divider10 /= 10;
        if(divider10 == 0)
            break;
      }  
    }
    else
    {
      num = num + '0';
      write(1, &num, 1);
	  cont++;
    }
    return(cont);
}

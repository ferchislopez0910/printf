<p align="center"><img src='https://marketing4ecommerce.net/wp-content/uploads/2018/06/GitHub-logo-2-imagen.jpg' alt='Banner' width=40%></p>

# Project Printf

## _printf 
The **_printf** function prints a message to the screen using a "format string" that includes instructions to mix multiple strings into the final string to be displayed on the screen using the files described below:

<p align="center"><img src='https://github.com/felipevargas-bz/printf_pruebas/blob/main/PrintF%20(2).jpg' alt='Banner' width=50%></p>

To use _printf you must download the files contained in this repository done this you must create a main.c containing the characters you want to print naming the function as follows
**_printf("This is what I want to print");** 
 - compile your program like this
_gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c_
 - done this you can print using

**./a.out** 
and there you go!.

This is an example on how to use _printf:

     main()
	{
	int a,b;
	float c,d;
	a = 15;	
	b = a / 2;

	_printf("%d\n",b);
	_printf("%3d\n",b);
	_printf("%03d\n",b);

	c = 15.3;
	d = c / 3;
	_printf("%3.2f\n",d);	
	}	

Output:

	7	
	___7
	007
	5.10

You can also get more information and see some examples by consulting the **man_3_printf** page, using this command:

**man ./man_3_printf**

### Authors :black_nib:

* __Marcela Areiza__

* __Maria Fernanda Lopez__

* __Christian Martinez__

#### Software Academy 👨‍💻

<p aling="center">
<a href="https://www.holbertonschool.com" target="_blank">
<img src="http://www.holbertonschool.com/holberton-logo.png" alt="Holberton School"  /></a>
</p>


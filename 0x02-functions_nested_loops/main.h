/**
  * _putchar - it writes the character c to stdout
  * @c: The character itself to print
  *
  * Return: ON success 1.
  * On error, -1 is returned, and errno is set appropriately
  */

int _putchar(char c);

/**
  * print_alphabet - print alphabet in lowercase
  */

void print_alphabet(void);

/**
  * print_alphabet_x10 - print aphabet in lowercase 10 times
  */

void print_alphabet_x10(void);

/**
  * _islower - checks for lowercase scenerio
  * @c: the character to check
  * Return: 1 if lowercase
  */

int _islower(int c);

/**
  * _isalpha - checks for alphabetic character
  * @c: the character to check
  * Return: 1 if lower or upper, 0 if otherwise
  */

int _isalpha(int c);

/**
  * print_sign - prints the sign of a number
  * @n: number to check
  * Return: 1 if > 0, 0 if = 0, -1 if < 0
  */

int print_sign(int n);

/**
 * _abs - computer absolute value of integer
 * @int: integer
 * Return: absolute value
 */

int _abs(int);

/**
 * print_last_digit - print last digit of integer
 * @int: integer
 * Return: last digit of number
 */

int print_last_digit(int);

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void);

/**
 * times_table - print multiplication table
 */

void times_table(void);

/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum
 */

int add(int a, int b);

/**
 * print_to_98 - print numbers n to 98
 * @n: integer parameter
 */

void print_to_98(int n);

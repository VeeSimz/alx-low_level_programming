#include "main.h"
#include <unistd.h>
/**
* putchar - outputs the code requested
*
*Return: always 0 on success
*/
int _putchar(char c)
{
return (write(1,&c,1));
}

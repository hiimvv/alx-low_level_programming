#include <unistd.h>
/**
* main - a script for a qoute
* Return: Always 1 
*/
int main(void)
{
write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
return (1);
}

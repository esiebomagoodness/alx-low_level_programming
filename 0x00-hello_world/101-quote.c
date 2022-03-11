#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return:1
 */
int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2915-10-19\n";
write(2, ch, sizeof(ch));
return(1);
}


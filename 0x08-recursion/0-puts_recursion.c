#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s:string
 * Return:void
 */
void _puts_recursion(char *s)
{
  if(*s)
  {
    putchar("%c", *s)
    _puts_recursion(s + 1)
  }
  else
    putchar("\n");
}

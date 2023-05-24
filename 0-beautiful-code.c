#include <stdio.h>
/**
* print_message - Prints a message
*
* Description: This function takes a string as input
* and prints it to the standard output.
*
* @message: The message to be printed
*/
void print_message(const char *message)
{
if (message != NULL)
{
int i = 0;
while (message[i] != '\0')
{
putchar(message[i]);
i++;
}
putchar('\n');
}
}
/**
* main - Entry point
*
* Description: This is the main function that
* calls the print_message function.
*
* Return: Always 0 (Success)
*/
int main(void)
{
const char *message = "Hello, World!";
print_message(message);
return (0);
}

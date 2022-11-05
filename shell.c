#include "shell.h"
/**
 * _isatty - verif terminal is in interactive mode
 */
void _isatty(void)
{
  if (isatty(STDIN_FILENO)) /*return 1 if the file in the argument refers to a terminal*/
    {
    _puts("#cisfun$ ");
    }
}



/**
 * main - Shell entry point
 * Return: 0 on success
 * @ac: number of arguments passed
 * @arv: Argument values 
*/

int main(int ac __attribute__((unused)), char **arv __attribute__((unused)))
{
  char *buffer = NULL; /*this will be used to get the first character in the user entered string and stores the total string entered*/
  size_t bufsize = 0; /*holds the size of the input buffer*/
  ssize_t characters; /*returns the number of characters in the user entered string*/
  while (characters != EOF)
  {
    _isatty(); /*enter interactive terminal mode*/
    characters = getline(&buffer, &bufsize, stdin); /*store the user input, stdin reads the standard input*/
  }
_puts(buffer);
return (0);
}

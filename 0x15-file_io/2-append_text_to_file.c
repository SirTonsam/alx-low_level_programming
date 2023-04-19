#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: the name of the file to append to
* @text_content: the text to append to the file
*
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
        int d, p, c = 0;

        if (filename == NULL) /*verify that d is there*/
                return (-1);
        {

        /*open d, opt only to write*/
        d = open(filename, O_APPEND | O_WRONLY);
        if (d == -1) /*verify whether d is there*/
                return (-1);
        {
        if (text_content) /*consider list to d if its not NULL*/
        {
                while (text_content[c] != '\0') /*check number of c*/
                        c++;

                /*consider to d*/
                p = write(d, text_content, c);
                if (p == -1) /*verify if all went well/
                        return (-1);
                        }
                }
        }
        close(d); "/"*close d*/
        return (1);
                }
}
        }
return 0;

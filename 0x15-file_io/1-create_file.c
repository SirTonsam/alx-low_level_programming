#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * a function that creates a file
 *where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
 *Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
 *The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
 *if the file already exists, truncate it
 *if filename is NULL return -1
 *if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
    int d, len, ret;

    if (!filename)
        return (-1);

    d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (d == -1)
        return (-1);

    if (!text_content)
    {
        close(d);
        return (1);
    }

    for (len = 0; text_content[len]; len++)
        ;

    ret = write(d, text_content, len);
    if (ret == -1 || ret != len)
    {
        close(d);
        return (-1);
    }

    close(d);
    return (1);
}

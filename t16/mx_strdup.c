#include <stddef.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str)
{
    if (str == NULL)
    {
        return NULL;
    }

    char *dup = mx_strnew(mx_strlen(str));

    if (dup == NULL)
    {
        return NULL;
    }

    dup = mx_strcpy(dup, str);

    return dup;
}

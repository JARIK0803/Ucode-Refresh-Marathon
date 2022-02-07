#include <stdbool.h>

bool mx_isdigit(int c)
{
    if (c >= 48 && c <= 57)
    {
        return true;
    }
    return false;
}

bool mx_islower(int c)
{
    if (c >= 97 && c <= 122)
    {
        return true;
    }
    return false;
}

bool mx_isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return true;
    }
    return false;
}

unsigned long mx_hex_to_nbr(const char *hex)
{
    unsigned long value = 0;

    for (int i = 0; hex[i] != '\0'; i++)
    {
        char ch = hex[i];

        if (mx_isdigit(ch))
        {
            ch = ch - 48;
        }
        else if (mx_islower(ch))
        {
            ch = ch - 97 + 10;
        }
        else if (mx_isupper(ch))
        {
            ch = ch - 65 + 10;
        }

        value = (value << 4) | (ch & 0xF);
    }
    return value;
}

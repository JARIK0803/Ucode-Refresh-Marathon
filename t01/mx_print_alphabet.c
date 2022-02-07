void mx_printchar(char c);

void mx_print_alphabet()
{
    for (int i = 65, j = 98; i <= 90; i += 2, j += 2)
    {
        mx_printchar(i);
        mx_printchar(j);
    }

    mx_printchar('\n');
}

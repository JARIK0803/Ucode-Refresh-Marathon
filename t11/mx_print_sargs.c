void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[])
{

    if (argc <= 1)
    {
        return 0;
    }

    int noSwap;

    for (int i = 1; i < argc; i++)
    {
        noSwap = 1;

        for (int j = 1; j < argc - i; j++)
        {
            if (mx_strcmp(argv[j], argv[j + 1]) > 0)
            {
                char *tmp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = tmp;
                noSwap = 0;
            }
        }

        if (noSwap == 1)
        {
            break;
        }
    }

    for (int i = 1; i < argc; i++)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }

    return 0;
}


int check_args(int argc, char **argv)
{
    if (!check_argc(argc, argv) || !check_argv(argv))
    {
        perror_printargv();
        return (-1);
    }
    return (0);
}

int check_argc(int argc, char **argv)
{
    if (argc <= 1)
    {
        perror_printargc();
        return(-1);
    }
    if (argc >= 2)
        check_argv(argv);
    return (0);
}

check_isdigit(char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (argv[i][j] != '\0')
    {
        if (argv[i][j] == '-' || argv[i][j] == '+')
        if (argv[i][j] == ' ' || argv[i][j] == '\t')
        if (argv[i][j] >= '0' && argv[i][j] <= '9')
        j++;
    }
    i++;
    return (0);
}

check_ischar(char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (argv[i][j])
    {
        if (argv[i][j] <= '0' && argv[i][j] >= '9')
        {
            perror_printchar();
            return (-1);
        }
        j++;
    }
    i++;
}

int check_argv(char **argv)
{
    int i;
    int j;

    while (argv[i][j])
    {
        i = 1;
        j = 0;
        //write(1, &argv[i][j], 1);
        if (check_isdigit(argv))
            return (0);
        else if (check_ischar(argv))
        {
            perror_printer();
            return (-1);
        }
        j++;
    }
    i++;
    return (0);
}


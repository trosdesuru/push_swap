
int check_args(int argc, char **argv)
{
    if (argc <= 1)
    {
        perror_printargc();
        return(0);
    }
    else if (argc >= 2)
        check_argv(argv);
    return (1);
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
            return (1);
        else if (check_ischar(argv))
        {
            perror_printer();
            return (0);
        }
        j++;
    }
    i++;
    return (1);
}

check_isdigit(char **argv) /*   FIX RETURN VALUES */

{
    int i;
    int j;

    i = 1;
    j = 0;
    while (argv[i][j])
    {
        if (argv[i][j] >= '0' && argv[i][j] <= '9')
            //write(1, &argv[i][j], 1);
            return (0);
        else if (check_dup(argv))
        {
            perror_printdup();
            return (1);
        }
        j++;
    }
    i++;
    return (0);
}

check_ischar(char **argv) /*FIX CHAR DECLARATION AND SYMBOLS*/
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
            return (0);
        }
        j++;
    }
    i++;
}
/* FIX CHECK DUPLICATE FUNCTION

int check_dup(int argc, char **argv)
{
    int     i;
    int     j;
    size_t  n;
    
    i = 1;
    j = 0;
    while (argv[i][j])
    {
        n = 0;
        argv[i][n] = argv[i][j];
        if (nbr == argv[i][j])
        {
            perror_printer();
            return (0);
        }
        j++;
    }
    n++;
}*/
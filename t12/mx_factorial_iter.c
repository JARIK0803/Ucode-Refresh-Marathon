int mx_factorial_iter(int n) {

    if (n < 0)
    {
        return 0;
    }
    
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        if (factorial > (2147483647 - factorial))
        {
            return 0;
        }
    }
    
    return factorial;
}

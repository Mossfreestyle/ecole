int ft_atoi(const char *str)
{
    int sign;
    int result;
    int i;

    i = 0;
    result = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] == ' \n' || str[i] == '\f' || str[i] == '\r'
    || str[i] == '\t' || str[i] == '\v')
        i++;
    if(str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
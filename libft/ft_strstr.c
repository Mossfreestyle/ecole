/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:41:01 by marvin            #+#    #+#             */
/*   Updated: 2025/03/25 23:41:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *s1, const char *s2)
{
    int i;
    int j;
    int len_s2;

    if (*s2 == '\0')
        return ((char *)s1);
    while (s1[i])
    {
        if (s1[i] == s2[0])
        {
            j = 0;
            while (j < len_s2 && s1[i + j] == s2[j])
                j++;
            if (j == len_s2)
                return ((char *)&s1[i]);
        }
        i++;
    }
    return (NULL);
}

/*int main(int argc, char **argv)
{
    char    *result;

    if (argc == 3)
    {
        result = ft_strstr(argv[1], argv[2]);
        if (result)
            printf("chaine trouvee: %s\n", result);
        else
            printf("introuvable\n");
    }
    return (0);
}*/

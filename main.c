/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:42:27 by allanganoun       #+#    #+#             */
/*   Updated: 2021/01/15 10:47:32 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int     main()
{
    char *str = "coucou est ce que ca va";
    char *str2 = "coucou";
    //printf("str = %lu\n", strlen(str));
    //printf("my str = %zu\n", ft_strlen(str));
    printf("cmp = %d\n", strcmp(str, str2));
    printf("my cmp = %d\n", ft_strcmp(str, str2));
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 07:35:52 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 09:31:35 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	get_struct_str(char *str)
{
	struct s_stock_str	res;
	int					i;

	res.size = 0;
	res.str = str;
	while (str[res.size])
		res.size++;
	res.copy = malloc(sizeof(char) * (res.size + 1));
	i = 0;
	while (i < res.size)
	{
		res.copy[i] = res.str[i];
		i++;
	}
	res.copy[res.size] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					res_end;

	res_end = 0;
	res = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (res == NULL)
		return (NULL);
	while (res_end < ac)
	{
		res[res_end] = get_struct_str(av[res_end]);
		if (res[res_end].copy == NULL)
		{
			res_end = 0;
			while (res[res_end].copy != NULL)
			{
				free(res[res_end].copy);
				res_end++;
			}
			free(res);
			return (NULL);
		}
		res_end++;
	}
	res[res_end].str = NULL;
	return (res);
}

/*
extern void	ft_show_tab(t_stock_str *tab);

int	main(int argc, char **argv)
{
	t_stock_str *tab = ft_strs_to_tab(argc, argv);
	ft_show_tab(tab);
	return (0);
}
*/
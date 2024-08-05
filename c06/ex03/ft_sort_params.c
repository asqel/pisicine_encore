/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:39:25 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/02 15:44:20 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strcmp_for_argv(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort_argv_args(int argc, char **argv)
{
	int		i;
	int		k;
	int		min_idx;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		k = i + 1;
		min_idx = i;
		while (k < argc)
		{
			if (strcmp_for_argv(argv[k], argv[min_idx]) < 0)
				min_idx = k;
			k++;
		}
		tmp = argv[i];
		argv[i] = argv[min_idx];
		argv[min_idx] = tmp;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	sort_argv_args(argc, argv);
	i = 1;
	while (i < argc)
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			write(1, &(argv[i][k]), 1);
			k++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:30:51 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/01 09:40:27 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	res = malloc(sizeof(char) * (i + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*copy;

	if (argc < 2)
		return (0);
	copy = ft_strdup(argv[1]);
	printf("%p: %s\n", argv[1], argv[1]);
	printf("%p: %s\n", copy, copy);
	free(copy);
	return (0);
}
*/
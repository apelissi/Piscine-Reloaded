/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:28:38 by apelissi          #+#    #+#             */
/*   Updated: 2017/11/29 10:18:40 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		ft_strlen(char *str)
{
	int taille;

	taille = 0;
	while (str[taille])
		taille++;
	return (taille);
}

char	*ft_strdup(char *src)
{
	int		taille;
	char	*cp;
	int		i;

	i = 0;
	taille = ft_strlen(src);
	cp = malloc(taille);
	while (i <= taille)
	{
		cp[i] = src[i];
		i++;
	}
	return (cp);
}

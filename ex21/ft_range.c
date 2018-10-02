/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:40:13 by apelissi          #+#    #+#             */
/*   Updated: 2017/11/29 15:26:07 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	*ft_range(int min, int max)
{
	int	*tab;
	int i;

	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

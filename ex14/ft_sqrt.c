/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:22:57 by apelissi          #+#    #+#             */
/*   Updated: 2017/11/16 15:26:01 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int racine;

	racine = 1;
	if (nb <= 0)
		return (0);
	while (racine * racine <= nb)
	{
		if (racine * racine == nb)
			return (racine);
		else
			racine++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:45:44 by apelissi          #+#    #+#             */
/*   Updated: 2017/11/29 11:48:40 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int compteur;

	compteur = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			compteur++;
		i++;
	}
	return (compteur);
}

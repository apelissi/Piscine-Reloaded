/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:06:40 by apelissi          #+#    #+#             */
/*   Updated: 2017/11/16 15:16:10 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else
		while (nb > 0)
		{
			fact = fact * nb;
			nb--;
		}
	return (fact);
}

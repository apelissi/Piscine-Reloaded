/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:56:00 by apelissi          #+#    #+#             */
/*   Updated: 2017/11/29 14:56:05 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char lettre;

	lettre = 'a';
	while (lettre <= 'z')
	{
		ft_putchar(lettre);
		lettre++;
	}
}

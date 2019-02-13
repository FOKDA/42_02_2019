/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arousse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 17:21:35 by arousse           #+#    #+#             */
/*   Updated: 2019/02/11 17:27:15 by arousse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int nb2;

	nb2 = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb2 = -nb;
	}
	if (nb2 > 9)
	{
		ft_putnbr(nb2 / 10);
		ft_putchar((nb2 % 10) + '0');
	}
	else
	{
		ft_putchar(nb2 + '0');
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkorniie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 13:29:59 by vkorniie          #+#    #+#             */
/*   Updated: 2018/10/01 13:30:04 by vkorniie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int i;
	int j;
	int character;

	i = 1;
	j = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		while (j < ac)
		{
			character = 0;
			while (av[i][character])
			{
				if (av[i][character] >= 97 && av[i][character] <= 122)
					av[i][character] -= 32;	
				character++;
			}
			i++;
			j++;
		}
	}
	j = 1;
	i = 1;
	while (j < ac)
	{
		std::cout << av[i];
		i++;
		j++;
	}
	std::cout << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:53:40 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/16 14:53:41 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"
int main (int ac, char **av)
{
	if (ac == 2)
		ScalarConverter::convert(std::string(av[1]));
}

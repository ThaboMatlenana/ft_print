/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:16:37 by tmatlena          #+#    #+#             */
/*   Updated: 2018/08/14 10:16:42 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

wchar_t			*to_str_p(char c)
{
	wchar_t *str;

	str = (wchar_t *)malloc(2 * sizeof(wchar_t));
	if (!str)
		exit(0);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

wchar_t			*to_str(char c)
{
	wchar_t *str;

	str = (wchar_t *)malloc(2 * sizeof(wchar_t));
	if (!str)
		exit(0);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

wchar_t			*to_str_w(wchar_t c, int *count)
{
	wchar_t *str;

	if (c < 0)
		return (NULL);
	if (!c)
		++*count;
	str = (wchar_t *)malloc(2 * sizeof(wchar_t));
	if (!str)
		exit(0);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

wchar_t			*to_str_c(char c, int *count)
{
	wchar_t *str;

	if (!c)
		++*count;
	str = (wchar_t *)malloc(2 * sizeof(wchar_t));
	if (!str)
		exit(0);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

void			initialize_three(int *a, int *b, int *c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

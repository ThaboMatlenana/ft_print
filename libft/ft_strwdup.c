/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:45:39 by tmatlena          #+#    #+#             */
/*   Updated: 2018/08/14 10:45:51 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

wchar_t	*ft_strdup_wchar(const char *str)
{
	int		i;
	wchar_t	*cpy;

	i = 0;
	if (!str)
		return (ft_strdup_wchar("(null)"));
	cpy = (wchar_t *)malloc((ft_strlen(str) + 1) * sizeof(wchar_t));
	if (!cpy)
		exit(0);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

wchar_t	*ft_strdup_wchar_to_wchar(wchar_t *str)
{
	int		i;
	wchar_t	*cpy;

	i = 0;
	if (!str)
		return (ft_strdup_wchar("(null)"));
	cpy = (wchar_t *)malloc((ft_strlen_null(str, 0) + 1) * sizeof(wchar_t));
	if (!cpy)
		exit(0);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

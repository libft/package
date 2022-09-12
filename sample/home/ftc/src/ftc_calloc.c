/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftc_stdlib.h"
#include "ftc_string.h"

#include <stddef.h>

#include "ftc_internal_memory.h"

void	*ftc_calloc(size_t count, size_t size)
{
	const size_t	total_size = count * size;
	void *const		result = ftc_malloc(total_size);

	if (result)
		return (ftc_memset(result, 0, total_size));
	return (NULL);
}

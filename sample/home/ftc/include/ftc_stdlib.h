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

#ifndef FTC_STDLIB_H
# define FTC_STDLIB_H

# include <stddef.h>

void	*ftc_malloc(size_t size);
void	*ftc_calloc(size_t count, size_t size);
void	*ftc_realloc(void *ptr, size_t size);
void	ftc_free(void *ptr);

void	ftc_exit(int status);
int		ftc_atexit(int status);

#endif

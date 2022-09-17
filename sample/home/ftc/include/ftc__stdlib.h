/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftc__stdlib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 2022/09/17 13:07:27 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTC__STDLIB_H
# define FTC__STDLIB_H

# include <stddef.h>

void	*ftc__malloc(size_t size);
void	*ftc__calloc(size_t count, size_t size);
void	*ftc__realloc(void *ptr, size_t size);
void	ftc__free(void *ptr);

void	ftc__exit(int status);
int		ftc__atexit(int status);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl_main.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 16:29:26 by kmira             #+#    #+#             */
/*   Updated: 2019/10/10 22:49:35 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_MAIN_H
# define FT_SSL_MAIN_H

# include "debug.h"

# include "color.h"
# include "libft.h"
# include "ft_ssl_structs.h"

void			get_command(char *key, t_string *(**result)(t_output_handler *, char *));

void			flag_loop(t_output_handler *output_handler, char **args, t_string *(*crypto_function)(t_output_handler *, char *));

struct s_string *crypto_algo_md5   (struct s_output_handler *output_handle, char *args);
struct s_string *crypto_algo_sha256(struct s_output_handler *output_handle, char *args);

void			print_output(t_output_handler *output_handler, t_string *digest, char *args);

void			ft_strnrev(char *str, size_t n);

void	print_chunk(t_512_chunk *chunk);

# define CMD_ONLY 2
# define FLAG_START 2

# define STDIN_OPTION NULL

# define COMPUTE_FUNCTION 1
# define TRY_NEXT_ARGUEMENT 1

# define TRY_FILE_LOOP 2


#endif

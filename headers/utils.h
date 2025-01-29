/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:50:51 by root              #+#    #+#             */
/*   Updated: 2025/01/29 17:54:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

// OVER/UNDERFLOW
# define MAX_INT 2147483647
# define MIN_INT -2147483648

// Text Reset
# define RESET      "\033[0m"

// Text Attributes
# define BOLD       "\033[1m"  // Bold or increased intensity
# define DIM        "\033[2m"  // Dim/faint (reduced intensity)
# define ITALIC     "\033[3m"  // Italic (may not work in all terminals)
# define UNDERLINE  "\033[4m"  // Underlined text
# define BLINK      "\033[5m"  // Slow blink (rarely supported)
# define REVERSED   "\033[7m"  // Reverse video (swap foreground/background)
# define HIDDEN     "\033[8m"  // Concealed (hidden text)
# define STRIKETHROUGH "\033[9m"  // Strikethrough (crossed-out text)

// Regular Colors
# define BLACK   "\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"

// Background Colors
# define BGBLACK   "\033[40m"
# define BGRED     "\033[41m"
# define BGGREEN   "\033[42m"
# define BGYELLOW  "\033[43m"
# define BGBLUE    "\033[44m"
# define BGMAGENTA "\033[45m"
# define BGCYAN    "\033[46m"
# define BGWHITE   "\033[47m"


#endif
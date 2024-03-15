/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void    swap(T &first, T &second){
    T temp = first;
    first = second;
    second = temp;
    return ;
}

template <typename T>
T   min(const T &first, const T &second){
    return (first <= second ? first : second);
}

template <typename T>
T   max(const T &first, const T &second){
    return (first >= second ? first : second);
}

#endif
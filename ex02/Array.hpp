/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP


template<typename T>
class   Array{
	private:
		unsigned int    _nb;
		T               *_array;

	public:
		/* CONSTRUCTOR */
		Array() : _nb(0){
			std::cout << "Default constructor was called " << std::endl;
			this->_array = new T[_nb];
		}
		Array(unsigned int nb) : _nb(nb){
			std::cout << "Surcharged constructor was called " << std::endl;
			if (nb < 0)
				this->_array = nullptr;
			else
				this->_array = new T[_nb];
		}
		/* COPY CONSTRUCTOR */
		Array(Array const &cpy){
			std::cout << "Copy constructor was called " << std::endl;
			this->_nb = cpy._nb;
			this->_array = new T[_nb];
			for (unsigned int i = 0; i <= _nb; i++)
				this->_array[i] = cpy._array[i];
		}
		/* DESUTRCTOR */
		 ~Array(){
			std::cout << "Destructor was called " << std::endl;
			if (this->_array != nullptr)
				delete [] this->_array;
		}
		/* SURCHARGED OPERATOR */
		Array   &operator=(Array const &rhs){
			if (this->_array != nullptr)
				delete [] this->_array;
			this->_nb = rhs._nb;
			for(unsigned int i = 0; i < rhs._nb; i++){
				this->_array[i] = rhs._array[i];
			}
			return (*this);
		}
		T	&operator[](unsigned int nb) const{
			if (nb >= 0 && nb <= this->_nb)
				return (this->_array[nb]);
			else
				throw OutOfBoundsException();
		}
		/* MEMBER FUNCTIONS */
		unsigned int	size(void) const{
			return (this->_nb);
		}
		class OutOfBoundsException : public std::exception{
			public : 
				virtual const char* what() const throw(){
					return ("Index is out of bounds");
				}
		};
};

#endif

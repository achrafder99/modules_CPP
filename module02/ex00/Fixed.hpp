#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int getRawBits(void) const;
		void	setRawBits(int const raw);
		
	private:
	 	int	fixed_point;
		static const int fractional = 8;
		
};

#endif
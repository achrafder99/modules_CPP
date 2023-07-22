#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const int integer);
		Fixed(const float float_number);
		Fixed(const Fixed &copy);
		int getRawBits(void) const;
		void	 setRawBits(int const raw);
		float	 toFloat(void) const;
		int		 toInt(void) const;
		Fixed& operator=(const Fixed& other);
		~Fixed();
	private:
	 	int	fixed_point;
		static const int fractional = 8;		
};

std::ostream& operator<< (std::ostream& o,const Fixed&  c);
#endif
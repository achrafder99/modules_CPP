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
		bool operator>(const Fixed &Fixed);
		bool operator<(const Fixed &Fixed);
		bool operator>=(const Fixed &Fixed);
		bool operator<=(const Fixed &Fixed);
		bool operator==(const Fixed &Fixed);
		bool operator!=(const Fixed &Fixed);
		float operator+(const Fixed &Fixed);
		float operator-(const Fixed &Fixed);
		float operator*(const Fixed &Fixed);
		float operator/(const Fixed &Fixed);
		static Fixed& min(Fixed  &ref1,Fixed  &ref2);
		static const Fixed& min(Fixed  const &ref1,Fixed  const &ref2);
		static Fixed& max(Fixed  &ref1,Fixed  &ref2);
		static const Fixed& max(Fixed  const &ref1,Fixed  const &ref2);
		Fixed &operator++(void);
		Fixed &operator++(int);
		Fixed &operator--(void);
		Fixed &operator--(int);
		~Fixed();
	private:
	 	int	fixed_point;
		static const int fractional = 8;		
};

std::ostream& operator<< (std::ostream& o,const Fixed&  c);
#endif
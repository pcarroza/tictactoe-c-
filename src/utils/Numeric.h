#ifndef NUMERIC_H_
#define NUMERIC_H_

#include <type_traits>
using namespace std;

template<class T>
struct Number {
	static constexpr bool isNumeric = std::is_arithmetic<T>::value
			&& !std::is_same<T, char>::value && !std::is_same<T, bool>::value
			&& !std::is_same<T, wchar_t>::value
			&& !std::is_same<T, char16_t>::value
			&& !std::is_same<T, char32_t>::value;
};

#endif

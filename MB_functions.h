#pragma once

#include <vector>


namespace MB {
	template<typename T>
	T sqrt(const T& n) {
		return n * n;
	}

	template<typename T>
	std::vector<T> sqrt(const std::vector<T>& vect_n) {
		std::vector<T> tmp_vect = vect_n;

		for (auto& it : tmp_vect) {
			it *= it;
		}

		return tmp_vect;
	}
}
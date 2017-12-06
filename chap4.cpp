#include <iostream>

// [CountBits]
//
// Count the number of bits that are set to 1 in an integer
short CountBits(unsigned int x) {
	short num_bits = 0;
	while (x) {
		num_bits += x & 1;
		x >>= 1;
	}
	return num_bits;
}

int main() {
	std::cout << "# CountBits" << std::endl;
	std::cout << "1: " << CountBits(1) << std::endl;
	std::cout << "2: " << CountBits(2) << std::endl;
	std::cout << "3: " << CountBits(3) << std::endl;
	return 0;
}

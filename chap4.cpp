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
// Time complexity: O(n)
// Space complexity: O(1)


// [Parity]
//
// The parity of a binary word is 1 if the number of 1s in the word is odd; otherwise, it is 0.
// How would you compute the parity of a very large number of 64-bit words?

short Parity1(unsigned long x) {
	short result = 0;
	while (x) {
		result ^= (x & 1);
		x >>= 1;
	}
	return result;
}
// Time complexity: O(n)
// Space complexity: O(1)

short Parity2(unsigned long x) {
	short result = 0;
	while (x) {
		result ^= 1;
		x &= x - 1; // Drops the lowest set bit of x.
	}
	return result;
}
// Time complexity: O(n)
// Space complexity: O(1)
// Improved in the best- and average-cases

int main() {
	std::cout << "# CountBits" << std::endl;
	std::cout << "1: " << CountBits(1) << std::endl;
	std::cout << "2: " << CountBits(2) << std::endl;
	std::cout << "3: " << CountBits(3) << std::endl;

	std::cout << "# Parity1" << std::endl;
	std::cout << "1: " << Parity1(1) << std::endl;
	std::cout << "2: " << Parity1(2) << std::endl;
	std::cout << "3: " << Parity1(3) << std::endl;

	std::cout << "# Parity2" << std::endl;
	std::cout << "1: " << Parity2(1) << std::endl;
	std::cout << "2: " << Parity2(2) << std::endl;
	std::cout << "3: " << Parity2(3) << std::endl;
	return 0;
}

#include "Array.hpp"

int main() {
	unsigned int i = 9;
	Array<int> intNum = Array<int>(i);

	intNum[0] = 3;
	intNum[1] = 8;
	intNum[2] = 19;
	intNum[3] = 35;
	intNum[4] = 36;
	intNum[5] = 37;
	intNum[6] = 38;
	intNum[7] = 39;
	intNum[8] = 89;
	try {
		intNum[9] = 42;
	}
	catch (std::range_error e){
		std::cout << e.what() << std::endl;
	}
	std::cout << intNum[0] << ", "
			  << intNum[1] << ", "
			  << intNum[2] << ", "
			  << intNum[3] << ", "
			  << intNum[4] << ", "
			  << intNum[5] << ", "
			  << intNum[6] << ", "
			  << intNum[7] << ", "
			  << intNum[8] << "  !!! "
			  << std::endl;
	Array<int> intNumCpy = Array<int>(intNum);

	intNumCpy[0] = 8732;

	std::cout << intNum[0] << " to see if nothing has changed" << std::endl;

	std::cout << intNumCpy[0] << ", "
			  << intNumCpy[1] << ", "
			  << intNumCpy[2] << ", "
			  << intNumCpy[3] << ", "
			  << intNumCpy[4] << ", "
			  << intNumCpy[5] << ", "
			  << intNumCpy[6] << ", "
			  << intNumCpy[7] << ", "
			  << intNumCpy[8] << "  !!! "
			  << std::endl;

	intNumCpy = intNum;
	std::cout << "After intNumCpy = intNum  :" << std::endl
			  << intNumCpy[0] << ", "
			  << intNumCpy[1] << ", "
			  << intNumCpy[2] << ", "
			  << intNumCpy[3] << ", "
			  << intNumCpy[4] << ", "
			  << intNumCpy[5] << ", "
			  << intNumCpy[6] << ", "
			  << intNumCpy[7] << ", "
			  << intNumCpy[8] << "  !!! "
			  << std::endl;

	i = 7;
	Array<std::string> string = Array<std::string>(i);
	string[0] = "First string";
	string[1] = "Second string";
	string[2] = "Third string";
	string[3] = "Fourth string";
	string[4] = "Fifth string";
	string[5] = "Sixth string";
	string[6] = "Seventh string";
	try{
		string[7] = "Fail string";
	}
	catch (std::range_error e){
		std::cout << e.what() << std::endl;
	}
	std::cout << string[0] << ", "
			  << string[1] << ", "
			  << string[2] << ", "
			  << string[3] << ", "
			  << string[4] << ", "
			  << string[5] << ", "
			  << string[6] << " !!!!"
			  << std::endl;

	std::cout << "of size() : " << intNum.size() << std::endl;

	Array<int> def = Array<int>();
	std::cout << "default constructor: " << def.size() << std::endl;

	return 0;
}

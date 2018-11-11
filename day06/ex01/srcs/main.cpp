#include "../inc/serialization.hpp"

void 	*serialize()
{
	int 	i = -1;
	char	*arr = new char[20];

	char	numbers[] = { 
		"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	std::cout << "Serialized of concatenated arrays/int was created: " << std::endl;

	while (++i < 8)
		arr[i] = numbers[rand() % 62];
	i--;
	while (++i < 12)
		arr[i] = rand() % 256 - 128;
	i--;
	while (++i < 20)
		arr[i] = numbers[rand() % 62];
	arr[i] = '\0';
	i = -1;
	std::cout << "Random Array 1: ";
	while (++i < 8)
		std::cout << arr[i];
	std::cout << std::endl << "Random integer: " << static_cast<int>(arr[8]);
	i = 11;
	std::cout << std::endl << "Random array 2: ";
	while (++i < 20)
		std::cout << arr[i];
	std::cout << std::endl;
	return (reinterpret_cast<void*>(arr));
}

Data 	*deserialize(void	*raw)
{
	Data 		*data = new Data;

	data->n = 0;
	char		*input = reinterpret_cast<char*>(raw);
	int i = -1;

	while (++i < 8)
		data->str1 = data->str1 + input[i];
	data->n = input[8];
	i = 11;
	while (++i < 20)
		data->str2 = data->str2 + input[i];
	return (data);
}

int	main()
{
	void	*serial;
	Data	*deserial;

	srand(time(NULL));
	serial = serialize();
	std::cout << "Address of serialized data" << std::endl << serial << std::endl << std::endl;
	deserial = deserialize(serial);
	std::cout << "Results of deserializing the serialized data using the address" << std::endl <<
		"Array 1: " << deserial->str1 << std::endl << 
		"Integer: " << deserial->n << std::endl << 
		"Array 2: " << deserial->str2 << std::endl;

	delete deserial;

	return (0);
}
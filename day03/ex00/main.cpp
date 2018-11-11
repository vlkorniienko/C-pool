#include "FragTrap.hpp"

int main(void)
{
	srand((unsigned int)time(NULL));

	FragTrap first("Avanesyan");

	std::string const & str = "Boris Nikolayevich";

	std::cout << first.getName() << " energy points: " << first.getEnergyPoints() << std::endl;
	first.vaulthunter_dot_exe(str);
	std::cout << first.getName() << " energy points: " << first.getEnergyPoints() << std::endl;
	first.vaulthunter_dot_exe(str);
	first.vaulthunter_dot_exe(str);
	first.vaulthunter_dot_exe(str);
	std::cout << first.getName() << " energy points: " << first.getEnergyPoints() << std::endl;
	first.vaulthunter_dot_exe(str);
	std::cout << first.getName() << " energy points: " << first.getEnergyPoints() << std::endl;
	first.rangedAttack(str);
	first.meleeAttack(str);
	std::cout << first.getName() << " hit points: " << first.getHitPoints() << std::endl;
	first.takeDamage(20);
	std::cout << first.getName() << " hit points: " << first.getHitPoints() << std::endl;
	first.takeDamage(95);
	std::cout << first.getName() << " hit points: " << first.getHitPoints() << std::endl;
	first.beRepaired(40);
	std::cout << first.getName() << " hit points: " << first.getHitPoints() << std::endl;
	first.beRepaired(70);
	std::cout << first.getName() << " hit points: " << first.getHitPoints() << std::endl;
	return (0);
}
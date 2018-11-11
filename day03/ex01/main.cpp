#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	std::cout << first.getName() << " hit points: " << first.getHitPoints() << std::endl << std::endl << std::endl;

ScavTrap second("Borat");
	second.rangedAttack(str);
	second.meleeAttack(str);
	std::cout << second.getName() << " hit points: " << second.getHitPoints() << std::endl;
	second.takeDamage(20);
	std::cout << second.getName() << " hit points: " << second.getHitPoints() << std::endl;
	second.takeDamage(95);
	std::cout << second.getName() << " hit points: " << second.getHitPoints() << std::endl;
	second.beRepaired(40);
	std::cout << second.getName() << " hit points: " << second.getHitPoints() << std::endl;
	second.beRepaired(70);
	std::cout << second.getName() << " hit points: " << second.getHitPoints() << std::endl;
	second.challengeNewcomer();
	second.challengeNewcomer();
	second.challengeNewcomer();
	second.challengeNewcomer();

	return (0);
}
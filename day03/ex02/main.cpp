#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int
main(void)
{
    // Start!
    std::cout << "BATTLE CRY"<< std::endl;
    ScavTrap    mr_popo("Mr. Popo");
    FragTrap    goku("Goku");

    // Mr. Popo vs Goku
    std::cout << std::endl << "ROUND 1" << std::endl;
    mr_popo.meleeAttack(goku.getName());
    goku.takeDamage(mr_popo.getMeleeAttackDamage());

    // Goku vs Mr. Popo
    std::cout << std::endl << "ROUND 2" << std::endl;
    goku.rangedAttack(mr_popo.getName());
    mr_popo.takeDamage(goku.getrangedAttackDamagePoints());

    return (0);
}
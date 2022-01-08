#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap clock("Clockwerk");
	FragTrap tinker("Tinker");

	tinker.attack(clock.getName());
	clock.takeDamage(tinker.getAttackDamage());
	clock.beRepaired(7);
	clock.attack(tinker.getName());
	tinker.takeDamage(clock.getAttackDamage());
	clock.attack(tinker.getName());
	tinker.takeDamage(clock.getAttackDamage());
	clock.highFivesGuys();
}

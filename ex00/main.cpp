#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clock("Clockwerk");
	ClapTrap tinker("Tinker");

	tinker.attack(clock.getName());
	clock.takeDamage(tinker.getAttackDamage());
	clock.beRepaired(7);
	clock.attack(tinker.getName());
	tinker.takeDamage(clock.getAttackDamage());
	clock.attack(tinker.getName());
	tinker.takeDamage(clock.getAttackDamage());
}

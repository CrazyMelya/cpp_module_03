#include "ScavTrap.hpp"


int	main(void)
{
	ScavTrap clock("Clockwerk");
	ScavTrap tinker("Tinker");

	tinker.attack(clock.getName());
	clock.takeDamage(tinker.getAttackDamage());
	clock.beRepaired(7);
	clock.attack(tinker.getName());
	tinker.takeDamage(clock.getAttackDamage());
	clock.attack(tinker.getName());
	tinker.takeDamage(clock.getAttackDamage());
	clock.guardGate();
	clock.guardGate();
}

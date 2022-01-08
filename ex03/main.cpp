#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap diamond;

	diamond.whoAmI();
	diamond.guardGate();
	diamond.attack("Your zopa!");
}

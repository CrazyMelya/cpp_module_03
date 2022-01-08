#include "FragTrap.hpp"
#include "ScavTrap.hpp" 

#ifndef DIAMOND_HPP
# define DIAMOND_HPP

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string name;
	unsigned int const maxHitpoints = 100;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	void	attack(std::string const & target) override;
	void	takeDamage(unsigned int amount) override;
	void	beRepaired(unsigned int amount) override;
	void	whoAmI(void);
};

#endif

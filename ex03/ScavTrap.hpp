#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : public virtual ClapTrap
{
private:
	static const unsigned int maxHitpoints = 100;
	bool guard;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &other);
	void	guardGate();
	void	attack(std::string const & target) override;
	void	takeDamage(unsigned int amount)	override;
	void	beRepaired(unsigned int amount) override;
};

#endif

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iomanip> 
#include <iostream>

class ClapTrap
{
private:
	static const unsigned int maxHitpoints = 10;
	std::string name;
	unsigned int hitpoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
public:
	ClapTrap();
	ClapTrap(ClapTrap const &other);
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap		&operator=(ClapTrap const &other);
	
	virtual void	attack(std::string const & target);
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);
	unsigned int getHitpoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;
	std::string	getName() const;
	void	setHitpoints(unsigned int hitpoints);
	void	setEnergyPoints(unsigned int EnergyPoints);
	void	setAttackDamage(unsigned int attackDamage);
	void	setName(std::string name);
};

#endif

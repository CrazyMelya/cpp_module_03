#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "Standart DiamondTrap constructor was called" << std::endl;
	this->name = "Noname";
	this->setName("Noname_clap_name");
	this->setHitpoints(FragTrap::getHitpoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor " + name + " was called" << std::endl;
	this->name = name;
	this->setName(name + "_clap_name");
	this->setHitpoints(FragTrap::getHitpoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor " + this->name + " was called" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (this->getHitpoints() < amount)
		this->setHitpoints(0);
	else
		this->setHitpoints(this->getHitpoints() - amount);
	std::cout << "DiamondTrap " + this->getName() + " takes " << amount << " point of damage and now his hitpoints = " << this->getHitpoints() << std::endl; 
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->getHitpoints() + amount > maxHitpoints)
		this->setHitpoints(maxHitpoints);
	else
		this->setHitpoints(this->getHitpoints() + amount);
	std::cout << "DiamondTrap " + this->getName() + " was repaired by " << amount << " points and now his hitpoints = " << this->getHitpoints() << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Say my name!" << std::endl;
	std::cout << this->name << std::endl;
	std::cout << "Say my ClapTrap name!" << std::endl;
	std::cout << this->getName() << std::endl;
	std::cout << "You're goddamn right!" << std::endl;
}

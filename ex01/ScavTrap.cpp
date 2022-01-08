#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Standart ScavTrap constructor was called" << std::endl;
	this->getHitpoints();
	this->setEnergyPoints(50);
	this->setAttackDamage(10);
	this->guard = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor ScavTrap " + name + " was called" << std::endl;
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(10);
	this->guard = false;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "Copy constructor " + other.getName() + " was called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap " + this->getName() + " was called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	this->setName(other.getName());
	this->setHitpoints(other.getHitpoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	return (*this);
}

void	ScavTrap::guardGate()
{
	if (this->guard)
	{
		this->guard = false;
		std::cout << "ScavTrap " + this->getName() + " have got out of Gate keeper mode" << std::endl;
	}
	else
	{
		this->guard = true;
		std::cout << "ScavTrap " + this->getName() + " have entered in Gate keeper mode" << std::endl;
	}
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " + this->getName() + " attack " + target + ",causing " << this->getAttackDamage() << " point of damage" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->getHitpoints() < amount)
		this->setHitpoints(0);
	else
		this->setHitpoints(this->getHitpoints() - amount);
	std::cout << "ScavTrap " + this->getName() + " takes " << amount << " point of damage and now his hitpoints = " << this->getHitpoints() << std::endl; 
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->getHitpoints() + amount > maxHitpoints)
		this->setHitpoints(maxHitpoints);
	else
		this->setHitpoints(this->getHitpoints() + amount);
	std::cout << "ScavTrap " + this->getName() + " was repaired by " << amount << " points and now his hitpoints = " << this->getHitpoints() << std::endl;
}

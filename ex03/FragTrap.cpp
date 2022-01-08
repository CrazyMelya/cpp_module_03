#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "Standart FragTrap constructor was called" << std::endl;
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor " + name + " was called" << std::endl;
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "Copy FragTrap constructor " + other.getName() + " was called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" + this->getName() + " was called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	this->setName(other.getName());
	this->setHitpoints(other.getHitpoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << ": \"Hey, high fives?\"" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " + this->getName() + " attack " + target + ",causing " << this->getAttackDamage() << " point of damage" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->getHitpoints() < amount)
		this->setHitpoints(0);
	else
		this->setHitpoints(this->getHitpoints() - amount);
	std::cout << "FragTrap " + this->getName() + " takes " << amount << " point of damage and now his hitpoints = " << this->getHitpoints() << std::endl; 
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->getHitpoints() + amount > maxHitpoints)
		this->setHitpoints(maxHitpoints);
	else
		this->setHitpoints(this->getHitpoints() + amount);
	std::cout << "FragTrap " + this->getName() + " was repaired by " << amount << " points and now his hitpoints = " << this->getHitpoints() << std::endl;
}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Standart constructor was called" << std::endl;
	this->name = "Noname";
	this->hitpoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor " + name + " was called" << std::endl;
	this->name = name;
	this->hitpoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy constructor " + name + " was called" << std::endl;
	this->name = other.getName();
	this->hitpoints = other.getHitpoints();
	this->energyPoints = other.getEnergyPoints();
	this->attackDamage = other.getAttackDamage();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor " + this->name + " was called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->name = other.getName();
	this->hitpoints = other.getHitpoints();
	this->energyPoints = other.getEnergyPoints();
	this->attackDamage = other.getAttackDamage();
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " + this->name + " attack " + target + ",causing " << this->getAttackDamage() << " point of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitpoints < amount)
		this->hitpoints = 0;
	else
		this->hitpoints -= amount;
	std::cout << "ClapTrap " + this->name + " takes " << amount << " point of damage and now his hitpoints = " << this->hitpoints << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints + amount > 10)
		this->hitpoints = 10;
	else
		this->hitpoints += amount;
	std::cout << "ClapTrap " + this->name + " was repaired by " << amount << " points and now his hitpoints = " << this->hitpoints << std::endl;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}

unsigned int ClapTrap::getHitpoints() const
{
	return (this->hitpoints);
}

std::string	ClapTrap::getName() const
{
	return (this->name);
}

void	ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->attackDamage = attackDamage;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->energyPoints = energyPoints;
}

void ClapTrap::setHitpoints(unsigned int hitpoints)
{
	this->hitpoints = hitpoints;
}

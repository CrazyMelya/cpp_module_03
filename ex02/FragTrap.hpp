#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	static const unsigned int maxHitpoints = 100;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &other);
	~FragTrap();
	FragTrap &operator=(FragTrap const &other);
	void	highFivesGuys(void);
	void	attack(std::string const &target) override;
	void	takeDamage(unsigned int amount) override;
	void	beRepaired(unsigned int amount) override;
};

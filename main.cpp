#include <iostream>
#include <vector>
#include <list>

unsigned int hash(const std::string & s)
{
	unsigned int h = 0;
	unsigned int power = 1;
	for (unsigned int i = 0; i < s.length(); ++i)
	{
		h += int(s[i]) * power;
		power += 10;
	}
	return h;
}

class HTRow
{
public:
	std::string get_key() { return key_; }
	void set_value(double v) { value_ = v; }
private:
	std::string key_;
	double value_;

};

class KeyError
{};

class HT
{
public:
	HT(int size=10, double threshold=0.75)
		: num_gets_(0), num_get_collisions_(0)
	{}

	void set(std::string key, double value)
	{ 
		for (int i = 0; i < table_.size(); ++i)
		{
			std::list < HTRow >::iterator iterator;
			for (iterator = table_[i].begin(); iterator != table_[i].end(); ++iterator)
			{
				if (*iterator->get_key() == key)
				{	
					*iterator->set_value(value);
					return;
				}	
			}
		}
		throw KeyError();
	}

	double get(const std::string & key)
	{}

	void remove(const std::string & key)
	{}

	void clear()
	{}

	std::vector<std::string> keys()
	{}

	void resize(int size)
	{}

private:
	std::vector< std::list< HTRow > > table_;
	
	int num_get_collisions_;
	int num_gets_;
	double threshold_;
};

std::ostream & operator<<(std::ostream & cout, const HT &d)
{
	
	return cout;
}

int main()
{
	HT d0;
	HT d1(20);	
	return 0;
}


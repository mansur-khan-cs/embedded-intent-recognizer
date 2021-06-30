#include <string>
#include <vector>
#include <iostream>

class Intent{
private:
	std::vector<std::string> input;
	std::vector<std::string> noun = {"weather", "fact"};
	std::vector<std::string> nounCity = {"Paris", "Frankfurt", "Berlin"};
public:
	Intent();
	Intent(std::vector<std::string>);
	void setIntent(std::vector<std::string>);
	virtual std::string recognize();
};
#include <Intent.h>

using namespace std;

Intent::Intent(){}

Intent::Intent(vector<string> in):input(in){}

void Intent::setIntent(std::vector<std::string> in){
	this->input = in;
}

string Intent::recognize(){

	vector<string> output;
	for(auto x:this->input){
		for(auto y:this->noun){
			if(x == y) output.push_back(x);
		}
		for(auto z:this->nounCity){
			if(x == z) output.push_back("city");
		}
	}
	string result = "Intent: Get";
	for(auto x:output){
		result += " ";
		result += static_cast<char>(x[0]-'a'+'A') + x.substr(1);
	}
	return result;
}
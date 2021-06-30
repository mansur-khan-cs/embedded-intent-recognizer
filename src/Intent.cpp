#include <Intent.h>

using namespace std;

Intent::Intent(vector<string> in):input(in){}



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
		result += x;
	}
	return result;
}

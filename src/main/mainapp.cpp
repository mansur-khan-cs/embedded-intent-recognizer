#include "Intent.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]){
	vector<string> in;
	for(int i=1; i<argc; i++){
		in.push_back(argv[i]); 
	}
	Intent intent(in);
	cout<< intent.recognize()<<endl;

	return 0;
}

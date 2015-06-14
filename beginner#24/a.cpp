#include <iostream>
#include <stdio.h>

int main( int argv, char *argc[] ){

	int a,b,c,k,s,t;
	
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> k;
	std::cin >> s;
	std::cin >> t;

	int total = a*s + b*t;
	if ( (s+t)>=k) {
		total = total - c*(s+t);	
	}

	std::cout << total << std::endl;

	return 0;
}


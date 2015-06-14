#include <vector>
#include <iostream>
#include <stdio.h>

int main( int argv, char *argc[] ){

	int a,b,c;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	int ru = c-a;
	int lu = c-b;

	bool bchange = false;
	if ( ru>lu ) {
		bchange = true;
		int tmp=c;
		c=b; b=tmp;
		tmp=ru;
		ru=lu;lu=tmp;
	}


	std::vector<int> rstack(0);
	rstack.push_back(ru);
	int snap=ru;
	while(true){
		int tmp;
		if ( snap % 2 == 0) {
			tmp = (snap / 2) - 1;
		} else {
			tmp = (snap-1)/2;
		}
		rstack.push_back(tmp);
		if (tmp==1) break;
		snap = tmp;
	}

	while(true) {
		
	}







	return 0;
}

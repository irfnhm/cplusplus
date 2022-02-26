#include <iostream>

int main(){
	int x1 , v1 , x2 , v2;
	std::cin >> x1 >> v1 >> x2 >> v2;

	if(( (x2 >= x1 && v2 >= v1) ) || (x1 >= x2 && v1 >= v2)){
		std::cout << "NO";
	}
    else{
		if((x2 - x1) % (v2 - v1) == 0){
			std::cout << "YES";
		}
        else{
			std::cout << "NO";
		}
	}
    return 0;
}

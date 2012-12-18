
#include <algorithm>
#include <iostream>

void print(int b){

	std::cout<<b<<std::endl;
}
int main(){

	int a[10]={1,2,3,4,5,6,7,8,9,10};
	std::for_each(a,a+10,print);
	return 0;
}

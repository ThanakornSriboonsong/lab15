#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}


//Do not modify source code above this line
void shuffle(int &a,int &b,int &c,int &d){
	int num[4] = { 50 ,100 , 500 , 1000 } ; 
	for(int i = 3 ; i > 0 ; i--){
		int j = rand()%(i+1) ;
		swap(num[i],num[j]) ;

		a = num[0] ;
		b = num[1] ;
		c = num[2] ;
		d = num[3] ;

	}








}


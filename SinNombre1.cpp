#include <iostream>
using namespace std;

int talkG(int *c, int *d){
	*c=(*c+7)%5;
	*d= *d/3;
	}
	
void suppV(int *dato, int factor){
	*dato*=factor;
}	

int main(){
	int x=1;
	int y=92;
	int *k=&x;
	
	 for(int i=0;i<10;i++){
	 	talkG(k,&y);
	 	suppV(&i,2);
	 	cout<<i<<" "<<x<<" ";
	 	cout<<*k<<" "<<y<<endl;
	 }
}

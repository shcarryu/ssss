#include<cstdlib>
#include<iostream>
#include <math.h>
using namespace std;
int main(){
	int s,k=0;
	char num[100];
	int c;
	cin.get(num,100);
	for(int i=0;i<8;i++){
		s+=(int(num[i])-48)*(8-i);
	}
	for(int i=0;i<8;i++){
		c=(s+1+9*i)%10;
		if(c==0){
			c=10;
		}
		if((10-c)==(int(num[8])-48)){
			cout<<char(i+65);
		}
   }
	c=(s+39)%10;
	if(c==0){
		c=10;
	}
	if(10-c==(int(num[8])-48)){
		cout<<'I';
	}
	for(int i=18;i<23;i++){
		if(i<20){
			c=(s+1+9*(i-10))%10;
			if(c==0){
				c=10;
			}
			if(10-c==(int(num[8])-48)){
				cout<<char(i+56);
			}
		}
		if(i>=20){
			c=(s+2+9*(i-20))%10;
			if(c==0){
				c=10;
			}
			if(10-c==(int(num[8])-48)){
				cout<<char(i+56);
			}	
		}	
	}
	c=(s+48)%10;
	if(c==0){
			c=10;
		}
	if(10-c==(int(num[8])-48)){
		cout<<'O';
	}
	for(int i=23;i<30;i++){
		c=(s+2+9*(i-20))%10;
		if(c==0){
			c=10;
		}
		if(10-c==(int(num[8])-48)){
			cout<<char(i+57);
		}
    }
    c=(s+21)%10;
    if(c==0){
    	c=10;
	}
	if(10-c==(int(num[8])-48)){
		cout<<'W';
	}
	c=(s+3)%10;
    if(c==0){
    	c=10;
	}
	if(10-c==(int(num[8])-48)){
		cout<<'X';
	}
	
	c=(s+12)%10;
    if(c==0){
    	c=10;
	}
	if(10-c==(int(num[8])-48)){
		cout<<'Y';
	}
	c=(s+30)%10;
    if(c==0){
    	c=10;
	}
	if(10-c==(int(num[8])-48)){
		cout<<'Z';
	}
	return 0;	
}

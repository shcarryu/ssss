#include<cstdlib>
#include<iostream>
using namespace std;
int main(){
	int a,b,N;
	while(cin>>a>>b>>N and a!=EOF){
		int ans[N+1];
		int Z=a/b;
		cout<<Z<<'.';  //��X��� 
		int left=a%b;
		int x=0;
		int y=0;
		for(int i=0;i<N;i++){  //��l�� 
			if(left*10>=b){    
				ans[i]=left*10/b;
				left=(left*10)%b;
				x+=1;            
			}else if(left*10<b){
				ans[i]=0;
				left*=10;
				x+=1;           //x�O�ݦ��X�줣�O0 
			}
			if(left==0){       //�l���ܦ�0 
				y=1;
				break;	
			}
		}
		if(y==0){             //�l�ƨS��0 (�٨S���� 
			for(int i=0;i<N;i++){
				cout<<ans[i];
			}
		}
		if(y==1){            //���� 
			for(int i=0;i<N;i++){
				if(i<x){
					cout<<ans[i];
				}else {      //�ѤU��0 
					cout<<0;
				}
			}
		}
	    cout<<endl;
	} 
	return 0;
}


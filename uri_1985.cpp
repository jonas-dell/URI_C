#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int p,q,i=0,cod;
	double preco=0.0;
	
	
	scanf("%d",&p);
	while(i<p){
		scanf("%d%d",&cod,&q);
			
			
		if(cod==1001){
			preco = preco + 1.5*q;
		}else if(cod==1002){
			preco = preco + 2.5*q;
		}else if(cod==1003){
			preco = preco + 3.5*q;
		}else if(cod==1004){
			preco = preco + 4.5*q;
		}else{
			preco = preco + 5.5*q;
		}
		i++;
	}
	printf("%.2lf\n",preco);
	
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;
void inicializar(int v[],int n);
void llenarconceros(int v[], int n);
void mostrar(int v[],int n);

int main(){
	int v[1000];
	inicializar(v,1000);
	llenarconceros(v,1000);
	mostrar(v,1000);
		
}
void inicializar(int v[],int n){
	for(int i=2;i<n;i++)
	  v[i]=1;
}
void llenarconceros(int v[], int n)
{
	for(int i=2;i<n;i++)
	  if(v[i]==1)
		{
		   for(int j=i+1;j<n;j++)
			{
				if(j%i==0)
			  v[j]=0;
			}
		}	     			
}
void mostrar(int v[], int n){
	for(int i=0;i<n;i++){
		if(v[i]==1)
		{
	      cout<<i<<"\n";
		}
	}
	   
}

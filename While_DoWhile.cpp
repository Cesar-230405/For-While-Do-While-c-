#include<iostream>
using namespace std;
main(){
	int i=0;
	while(i<5){
		i++;
		cout<<i<<endl;
	}
	cout<<"-------------------"<<endl;
	while(i>0){
		i--;
		cout<<i<<endl;
	}
	cout<<"-------------------"<<endl;
do {
	i++;
		cout<<i<<endl;
}	while(i<5);
	cout<<"-------------------"<<endl;
	char respuesta;
do {
	cout<<"Desea ingresar otro valor (s/n): "<<endl;
	cin>>respuesta;
		
}	while(respuesta=='s');
	
	system("pause");
}
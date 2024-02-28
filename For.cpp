#include<iostream>
using namespace std;
main(){
	int contar=0, i=0, tam=5;
	
	
	for (int i=0; i<=10; i+=2){
		cout<<i<<endl;
		contar++;
	}
	cout<<"i fuera: "<<i<<endl;
	cout<<"Ciclos: "<<contar<<endl;
	cout<<"------------------------------------------"<<endl;
	for (int i=10; i>0;i--){
		if(i==5){
			cout<<"if"<<endl;
			break;
		}
		
		cout<<i<<endl;
	}
	cout<<"------------------------------------------------"<<endl;
	for (int i=10; i>0;i--){
		if(i==5){
			cout<<"if"<<endl;
			continue;
		}
		
		cout<<i<<endl;
	}
		cout<<"------------------------------------------------"<<endl;
	for (float i=0; i<=10;i+=0.1	){
		
		cout<<i<<endl;
	}
		cout<<"------------------------------------------------"<<endl;
    int datos[tam]= {10,20,30,40,50};
     for (int i=0; i<tam; i++){
     	cout<<datos[i]<<endl;
	 }
        cout<<"------------------------------------------------"<<endl;
	 int dato[]= {10,20,30,40,50};
     for (int i : dato){
     	cout<<i<<endl;
	 }
        cout<<"------------------------------------------------"<<endl;
     int tabla=0, res=0;
     cout<<"ingrese tabla: ";
     cin>>tabla;
     for (int i=1; i<=10; i++){
     	res = tabla * i;
     	cout<<tabla<<" * "<<i<<" = "<<res<<endl;
	 }
        cout<<"------------------------------------------------"<<endl;
      
	cout<<"fuera del for"<<endl;
	system("pause");
	
	
}
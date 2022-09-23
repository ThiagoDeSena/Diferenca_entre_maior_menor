/*5. Escreva um programa em C que leia 10 números e
escreva a diferença entre o maior e o menor valor lido.*/
#include <iostream>

using namespace std;

int main(){
	int vetor[10],i=0,maior=0,menor=0;
	menor=vetor[i];
	do{
		cout<<"Digite o "<<i+1<<" numero: ";
		cin>>vetor[i];
		
		if(vetor[i]>maior)
		  maior=vetor[i];
		if(vetor[i]<menor)
		  menor=vetor[i];
		i++;
	}while(i<10);
	
	cout<<"O maior valor digitado foi o numero "<<maior<<endl;
	cout<<"O menor valor digitado foi o numero "<<menor<<endl;
	cout<<"A diferenca entre o maior e menor numero e "<<maior-menor<<endl;
	
	return 0;

}

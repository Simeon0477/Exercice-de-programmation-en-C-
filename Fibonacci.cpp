#include<iostream>

unsigned int nbr, elt = 0;
unsigned int fibonacci(unsigned int n);

int main(int argc, char** args){
	//Entrée de la valeur
	std::cout <<"Entrer la valeur du dernier element de la suite que vous desirez"<<std::endl;
	std::cin  >> nbr;
	
	//Calcul de la suite
	std::cout <<"La suite de Fibonacci de "<< nbr <<" est:"<<std::endl;
	for(int i=0;i<=nbr;i++){
		elt = fibonacci(i);
		//Affichage des éléments de la suite
		std::cout<<elt<<std::endl;
	}
	return 0;
}

unsigned int fibonacci(unsigned int n){
	
	if(n == 0 || n == 1)
		//Retourner 1 pour les valeurs 0 et 1
		return 1;
	else
		//Calcul de la valeur à retourner pour n > 1
		return fibonacci(n-1) + fibonacci(n-2);

}
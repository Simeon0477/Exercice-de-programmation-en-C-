#include<iostream>

//Déclaration des variables
unsigned int nbr = 0;
unsigned int fibonacci(unsigned int n);

int main(int argc, char** args){
	//Entrée des valeurs par l'utilisateur
	std::cout <<"Entrer la valeur du dernier element de la suite que vous desirez"<<std::endl;
	std::cin  >> nbr;
	
	//Début de l'exécution
	std::cout <<"La suite de Fibonacci pour la valeur "<< nbr <<" est:"<<std::endl;
	for(int i=0;i<=nbr;i++){
		//Affichage des éléments de la suite
		std::cout<<"F("<<i<<") = "<<fibonacci(i)<<std::endl;
	}
	return 0;
}

unsigned int fibonacci(unsigned int n){
	
	if(n == 0 || n == 1)
		//Retourner 1 pour les valeurs 1 et 0
		return 1;
	else
		//Valeur retourner dans le cas de n > 1
		return fibonacci(n-1) + fibonacci(n-2);

}

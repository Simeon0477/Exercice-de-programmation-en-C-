#include<iostream>

double part_reel, part_img;
const int DIM = 1000;

int mandelbrot(double reel,double img);

int main(int argc, char** args){
	//récupération des valeurs
	std::cout<<"Entrez la valeur de la partie reelle du nombre"<<std::endl;
	std::cin >> part_reel;
	std::cout<<"Entrez la valeur de la partie imaginaire du nombre"<<std::endl;
	std::cin >> part_img;
	
	std::cout<<"\nDébut de l'exécution \n"<<std::endl;
	//Appel de la fonction
	int it = mandelbrot(part_reel, part_img);

	//Conclusion
	if(it < DIM)
		std::cout<<"le nombre n'appartient pas a l'ensemble de Mandelbrot\n"
				 <<"Il diverge a partir de l'iteration "<<it<<std::endl;	
	else
		std::cout<<"le nombre "<<part_reel<<" + "<<part_img<<"i appartenient a l'ensemble de Mandelbrot"<<std::endl;
	
	return 0;
}

int mandelbrot(double reel,double img){
	double z_rl, z_img = 0;
	int i = 0;
	//Initialisation
	std::cout<<"Z(0) = 0"<<std::endl;
	i += 1;

	double new_z_rl, new_z_img;
	
	while((z_rl*z_rl + z_img*z_img) <= 4 && i <= DIM){
		//Calcul de la nouvelle valeur de Z
		new_z_rl = z_rl*z_rl - z_img*z_img + reel;
		new_z_img = 2*z_rl*z_img + img;
		//Affectation aux variables de base
		z_rl = new_z_rl;
		z_img = new_z_img;
		//Affichage du résultat
		std::cout<<"Z("<<i<<") = "<<z_rl<<" + "<<z_img<<"i"<<std::endl;
		//Incrémentation du compteur d'itération
		i += 1;
	}

	return i;
}


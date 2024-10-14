#include<iostream>

float a,b,c,d,e,f,x,y;

int main(int argc, char** args){
    //Saisie des valeurs
    std::cout<<"Entrez les valeurs du premier point"<<std::endl;
    std::cin >> a >> b;
    std::cout<<"Entrez les valeurs du deuxieme point"<<std::endl;
    std::cin >> c >> d;
    std::cout<<"Entrez les valeurs du troisieme point"<<std::endl;
    std::cin >> e >> f;

    //Calcul des coordonnées du bandit
    x = (a + c + e) / 3;
    y = (b + d + f) / 3;

    //Affichage du résultat
    std::cout<<"Les coordonnées du bandit sont: sur les abscisses "<< x <<" et sur les ordonnées "<< y <<std::endl;

    return 0;
}
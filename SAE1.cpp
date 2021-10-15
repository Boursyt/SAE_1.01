#include<stdio.h> 
#include<iostream>          
#include <string.h> // importation des bibliothèques neccessaires
#include<time.h> 
using namespace std;
//compile:g++ -o main.exe SAE1.cpp

/*Probleme a resoudre
    fonction

*/
void parametre(int *nb_allumette,char joueur[],char *ordi,char start[])//fonction pour le parametrage de la partie
{
    cout<<"\t\t\t\tLe Jeu commence !"<<endl<<endl<<endl;


    cout<<"entrez votre pseudo"<<endl;
    cin>>joueur;

    cout<<"Voulez-vous commencer la partie ? ";
    do{
        cin>>start;
        if(strcmp(start,"Oui") == 0 ||strcmp(start,"oui") == 0)
        {
            strcpy(start,"Oui");
        }
        else if(strcmp(start,"Non") == 0 ||strcmp(start,"non") == 0)
        {
            strcpy(start,"Non");
        }
        else
        {
            cout<<"Je n'ai pas compris votre reponse "<<endl;
        }
    }while(strcmp(start,"Oui") == 0 && strcmp(start,"oui") == 0 && strcmp(start,"Non") == 0 && strcmp(start,"non") == 0);

    cout << "entrez le nombre d'allumette souhaté entre 1 et 30" << endl;
    cin >> *nb_allumette;
    while (*nb_allumette < 1 || *nb_allumette > 30)  
    {
        cin >> *nb_allumette;
        if (!cin >> *nb_allumette || *nb_allumette < 1 || *nb_allumette > 30)
        {
            cout << "Valeur incorrect, choisissez un nombre entre 1 et 30 " << endl;
            cin.clear(); 
            cin.ignore(100, '\n');
        }
    } 
    


    cout << "entrez le niveau de l'ordinateur avec N pour naif ou E pour expert" << endl;
    cin>>*ordi;
    if (*ordi!='e' && *ordi!='E' && *ordi !='n' && *ordi !='N')
    {
        while(*ordi!= 'e' && *ordi!= 'E' && *ordi !='n' && *ordi != 'N')
        {
            cout<<"Valeur incorrect, merci de choisir entre E et N"<<endl;
            cin>>*ordi;
        }
    }
    cout<<"nombre allumettes: "<<*nb_allumette<<" pseudo: "<<joueur<<" difficulte: "<<*ordi<<" Joueur commence: "<<start<<endl;
}
void affiche_Allumettes(int *nb_allumettes)
{
    char allumettes = '!';
    cout<<"\t\t\tVoici le nombre d'allumette"<<endl<<endl<<"\t\t\t\t";
    for(int i = 1; i <= *nb_allumettes; i++)
    {
        cout<<allumettes;
        if(i%5 == 0)
        {
            cout<<endl<<"\t\t\t\t";
        }
    }
    cout<<"\n\nFIN";
}
int ordiJoue(int *nb_allumette, char *ordi)
{
    if(*ordi == 'N')
    {
        *nb_allumette = *nb_allumette - (rand() % 2 + 1);
    }
    else 
    {
        *nb_allumette;
    }
}
int main()
{

    int nb_allumette;
    char joueur[50], start[10]; 
    char ordi;
    parametre(&nb_allumette,joueur,&ordi,start);
    affiche_Allumettes(&nb_allumette);
    return 0; 
}

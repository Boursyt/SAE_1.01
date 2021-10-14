#include<stdio.h> 
#include<iostream>          
#include <string> // importation des bibliothèques neccessaires
using namespace std;


/*Probleme a resoudre
    fonctions 

*/
void parametre(int *nb_allumette,char joueur[],char *ordi,char start[])//fonction pour le parametrage de la partie
{
    cout<<"entrez votre pseudo"<<endl;
    cin>>joueur;
    cout<<"Voulez vous commencer? marquez oui, sinon, marquez non"<<endl;
    cin>>start;
    if(start != "Oui" & start != "Non") //verification de la valeur start, valable ou non
        {
            while (start != "Oui" && start != "Non")// tant que la valeur n'est pas bonne, on redemande de choisir qui commence
            {
                cout<<"Je n'ai pas compris, veuillez reesayer"<<endl;
                cin>>start;
            }
        }
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
    
}
void affiche_Allumettes(int *nb_allumettes)
{
    char allumettes = '!';
    for(int i = 1; i <= *nb_allumettes; i++)
    {
        cout<<allumettes;
        if(i%5 == 0)
        {
            cout<<endl;
        }
    }
    cout<<endl<<endl;
}

int main()
{

    int nb_allumette, nb_allumette_rest;
    char joueur[50], start[10]; 
    char ordi;
    // parametre(&nb_allumette,joueur,&ordi,start);
    // cout<<"nombre allumettes: "<<nb_allumette<<" pseudo: "<<joueur<<" difficulte: "<<ordi<<endl;
    for(int i = 0; i < 20; i++)
    {
        cin >> nb_allumette;
        affiche_Allumettes(&nb_allumette);
    }
    return 0;
}

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
void jeualterne(int tour, char* start)
{
    if(strcmp(start,"Oui") == 0)
    {
        if(tour%2 != 0) //joueur joue, toure impaire
        {
                //fonction joueurJoue
        }
        else //ordi joueu , tour paire/
        {
             //joueOrdi();             
        }
    }
    else
    {
       if(tour%2 != 0) //ordi joue, toure impaire
        {
            
        }
        else //joueur joueu , tour paire
        {

        }
    }
    
}
int miseAjour(int nb_allumettes, int nb)
{
    nb_allumettes = nb_allumettes - nb;
    return nb_allumettes;
}
void joueOrdi(int *nb_allumette, char *ordi)
{
    if(*ordi == 'N' || *ordi == 'n') //mode naif
    {
        *nb_allumette = *nb_allumette - (rand() % 2 + 1);
    }
    else //mode expert
    {
        
    }
}

int main()
{

    int nb_allumette = 28, tour = 1;
    char joueur[50], start[10]; 
    char ordi;
    parametre(&nb_allumette,joueur,&ordi,start);
    affiche_Allumettes(&nb_allumette);
    return 0; 




    
}


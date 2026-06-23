#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

// -------------------------------------------------------------
// Exercice 1 - Premier programme (cout)
// -------------------------------------------------------------
void ex1() {
    std::cout << "Bonjour !" << std::endl;
    std::cout << "Je m'appelle Nathan." << std::endl;
    std::cout << "J'apprends le c++." << std::endl;
}

// -------------------------------------------------------------
// Exercice 2 - Variables et types
// -------------------------------------------------------------
void ex2() {
    int age = 21;
    float taille = 1.73;
    char initiale = 'N';
    bool etudiant = true;
    std::string ville = "Bordeaux";

    std::cout << "Age : " << age << std::endl;
    std::cout << "Taille : " << taille << std::endl;
    std::cout << "Initiale : " << initiale << std::endl;
    std::cout << "Etudiant : " << etudiant << std::endl;
    std::cout << "Ville : " << ville << std::endl;


}

// -------------------------------------------------------------
// Exercice 3 - Lecture clavier (cin)
// -------------------------------------------------------------
void ex3() {
    int first;
    int second;

    std::cout << "Entrez un premier nombre : " << std::endl;
    std::cin >> first;

    std::cout << "Entrez un second nombre : " << std::endl;
    std::cin >> second;

    int add = first + second;
    int dif = first - second;
    int mult = first * second;

    std::cout << "Somme : " << add << std::endl;
    std::cout << "Difference : " << dif << std::endl;
    std::cout << "Produit : " << mult << std::endl;

}

// -------------------------------------------------------------
// Exercice 4 - Conditions (if / else)
// -------------------------------------------------------------
void ex4() {

}

// -------------------------------------------------------------
// Exercice 5 - Le plus grand des trois (sans fonction toute faite)
// -------------------------------------------------------------
void ex5() {

}

// -------------------------------------------------------------
// Exercice 6 - Boucle for (table de multiplication)
// -------------------------------------------------------------
void ex6() {

}

// -------------------------------------------------------------
// Exercice 7 - Boucle while (somme de 1 a N)
// -------------------------------------------------------------
void ex7() {

}

// -------------------------------------------------------------
// Exercice 8 - Boucle avec validation (mot de passe)
// -------------------------------------------------------------
void ex8() {

}

// -------------------------------------------------------------
// Exercice 9 - Premiere fonction
// -------------------------------------------------------------

void ex9() {

}

// -------------------------------------------------------------
// Exercice 10 - Fonction qui renvoie un bool
// -------------------------------------------------------------


void ex10() {

}

// -------------------------------------------------------------
// Exercice 11 - Tableau / vector
// -------------------------------------------------------------
void ex11() {

}

// -------------------------------------------------------------
// Exercice 12 - Chaines de caracteres
// -------------------------------------------------------------
void ex12() {

}

// -------------------------------------------------------------
// Exercice 13 - struct
// -------------------------------------------------------------


void ex13() {

}

// -------------------------------------------------------------
// Exercice 14 - Menu avec switch
// -------------------------------------------------------------
void ex14() {

}

// =============================================================
//  BONUS
// =============================================================

// B1 - Factorielle (version boucle + version recursive)
int factorielle(int n) {

}

int factorielleRec(int n) {

}

void bonus1() {

}

// B2 - Saisir 5 notes et les trier
void bonus2() {

}

struct EtudiantMethode {
    std::string nom;
    int age;
    double moyenne;

    void afficher() const {
        std::cout << nom << " | " << age << " ans | moyenne : " << moyenne << "\n";
    }
};

void bonus3() {
    EtudiantMethode e = { "Aria", 21, 14.5 };
    e.afficher();
}

int main() {
    int choix = -1;
    while (choix != 0) {
        std::cout << "Exercice a lancer : ";
        std::cin >> choix;
        std::cout << "--------------------------\n";

        switch (choix) {
        case 1:  ex1();  break;
        case 2:  ex2();  break;
        case 3:  ex3();  break;
        case 4:  ex4();  break;
        case 5:  ex5();  break;
        case 6:  ex6();  break;
        case 7:  ex7();  break;
        case 8:  ex8();  break;
        case 9:  ex9();  break;
        case 10: ex10(); break;
        case 11: ex11(); break;
        case 12: ex12(); break;
        case 13: ex13(); break;
        case 14: ex14(); break;
        case 15: bonus1(); break;
        case 16: bonus2(); break;
        case 17: bonus3(); break;
        case 0:  std::cout << "Fin.\n"; break;
        default: std::cout << "Choix inconnu.\n"; break;
        }
    }
    return 0;
}
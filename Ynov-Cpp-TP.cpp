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
    int to_test;

    std::cout << "entrez un nombre entier :" << std::endl;
    std::cin >> to_test;

    if (to_test > 0) {
        std::cout << "votre nombre est positif, ";
    } else {
        std::cout << "votre nombre est negatif, ";
    }
    std::cout << "et ";
    if (to_test % 2 == 0) {
        std::cout << "il est est pair." << std::endl;
    } else {
        std::cout << "il est est impair." << std::endl;
    }
}

// -------------------------------------------------------------
// Exercice 5 - Le plus grand des trois (sans fonction toute faite)
// -------------------------------------------------------------
void ex5() {
    int first;
    int second;
    int third;
    int biggest;

    std::cout << "Entrez un premier nombre : " << std::endl;
    std::cin >> first;

    std::cout << "Entrez un second nombre : " << std::endl;
    std::cin >> second;

    std::cout << "Entrez un troisieme nombre : " << std::endl;
    std::cin >> third;

    if (first > second && first > third) {
        biggest = first;
    } else if (second > third) {
        biggest = second;
    } else {
        biggest = third;
    }

    std::cout << "L'entree la plus grande est : " << biggest << std::endl;
}

// -------------------------------------------------------------
// Exercice 6 - Boucle for (table de multiplication)
// -------------------------------------------------------------
void ex6() {
    int entry;
    int i;

    std::cout << "Entrez un nombre : " << std::endl;
    std::cin >> entry;

    for (i = 1; i <= 10; ++i) {
        std::cout << entry <<  " x " << i << " = "<< entry * i << std::endl;
    }
}

// -------------------------------------------------------------
// Exercice 7 - Boucle while (somme de 1 a N)
// -------------------------------------------------------------
void ex7() {

    int entry;
    int counter = 1;
    int result;

    std::cout << "Entrez un nombre : " << std::endl;
    std::cin >> entry;
    std::cout << "n : " << entry << std::endl;

    while (counter <= entry) {
        result = result + counter;
        counter++;
    }
    std::cout << "somme : " << result << std::endl;

}

// -------------------------------------------------------------
// Exercice 8 - Boucle avec validation (mot de passe)
// -------------------------------------------------------------
void ex8() { //NLEM -> a changer en sting
    std::string passowrd;
    int tries;
    bool passwordFound = false;
    std::string actual;

    std::cout << "Entrez un mot de passe : " << std::endl;
    std::cin >> passowrd;

    while (!passwordFound) {
        std::cout << "Entrez votre mot de passe : " << std::endl;
        std::cin >> actual;

        if (actual == passowrd) {
            std::cout << "Mot de passe valide. (" << tries << " essais)"  << std::endl;
            passwordFound = true;

            break;
        } else {
            std::cout << "Mot de passe incorrect, reessayez." << std::endl;
            tries++;
        }
    }
}

// -------------------------------------------------------------
// Exercice 9 - Premiere fonction
// -------------------------------------------------------------

int carre(int n) {
    return n * n;
}

void ex9() {
    for (int i = 1; i <= 5; ++i) {
        std::cout << carre(i) << std::endl;
    }
}

// -------------------------------------------------------------
// Exercice 10 - Fonction qui renvoie un bool
// -------------------------------------------------------------

bool isEven(int n) {
    return n % 2 == 0;
}
void ex10() {

    for (int i = 0; i <= 20; ++i) {
        if (isEven(i)) {
            std::cout << i << " est pair." << std::endl;
        }
        else {
            std::cout << i << " n'est pas pair." << std::endl;
        }
    }
}

// -------------------------------------------------------------
// Exercice 11 - Tableau / vector
// -------------------------------------------------------------
void ex11() {
    std::vector<int> list = {12, 7, 25, 3, 18};
    int sum = 0;
    int moy;
    int max = 0;

    std::cout << "elements : ";
    for (int i = 0; i < list.size(); ++i) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "somme : ";
    for (int i = 0; i < list.size(); ++i) {
        sum = sum + list[i];
    }
    std::cout << sum << std::endl;

    moy = sum / list.size();
    std::cout << "moyenne : " << moy << std::endl;

    for (int i = 0; i < list.size(); ++i) {
        if (list[i] > max) {
            max = list[i];
        }
    }
    std::cout << "max : " << max << std::endl;
}

// -------------------------------------------------------------
// Exercice 12 - Chaines de caracteres
// -------------------------------------------------------------
void ex12() {
    std::string entry;
    std::string voyelles = "aeiou";
    int voyelleCount = 0;

    std::cout << "Entrez une string : " << std::endl;
    std::cin >> entry;

    std::string upperEntry = entry;


    std::cout << "votre entree :" << entry << std::endl;
    std::cout << "longueur :" << entry.length() << std::endl;
    std::cout << "Majuscules :";
    for (int i = 0; i < entry.length(); ++i) {
        upperEntry[i] = std::toupper(entry[i]);
    }
    std::cout << upperEntry << std::endl;
    std::cout << "Voyelles : ";
    for (int i = 0; i < entry.length(); ++i) {
        if (voyelles.find(std::tolower(entry[i])) != std::string::npos) {
            voyelleCount++;
        }
    }
    std::cout << voyelleCount << std::endl;


}

// -------------------------------------------------------------
// Exercice 13 - struct
// -------------------------------------------------------------

struct Etudiant {
    std::string nom;
    int age;
    double moyenne;
};

void afficherEtudiant(Etudiant etudiant) {
    std::cout << "nom : " << etudiant.nom << std::endl;
    std::cout << "age : " << etudiant.age << std::endl;
    std::cout << "moyenne : " << etudiant.moyenne << std::endl;
    std::cout << std::endl;
}

void ex13() {
    Etudiant John;
    John.nom = "John";
    John.age = 21;
    John.moyenne = 13.8;

    Etudiant Anais;
    Anais.nom = "Anais";
    Anais.age = 21;
    Anais.moyenne = 15.4;

    Etudiant betterStudent;

    if (John.moyenne > Anais.moyenne) {
        betterStudent = John;
    }
    else {
        betterStudent = Anais;
    }

    std::cout << "Premier etudiant : " << std::endl;
    afficherEtudiant(John);

    std::cout << "Second etudiant : " << std::endl;
    afficherEtudiant(Anais);

    std::cout << "l'etudiant avec la meilleur moyenne est  : " << std::endl;
    afficherEtudiant(betterStudent);

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
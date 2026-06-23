#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

// -------------------------------------------------------------
// Exercice 1 - Premier programme (cout)
// -------------------------------------------------------------
void ex1()
{
    std::string name;
    std::cin >> name;
    std::cout << "Bonjour !\nJe m'appelle " << name << ".\nJ'apprends le C++.\n";
}
// -------------------------------------------------------------
// Exercice 2 - Variables et types
// -------------------------------------------------------------
void ex2()
{
    int age = 21;
    double high = 1.78;
    char initiale = 'H';
    bool student = true;
    std::string city = "Bordeaux";

    std::cout << "Age : " << age << '\n'
        << "high : " << high << '\n'
        << "initiale : " << initiale << '\n'
        << "Student : " << student << '\n'
        << "City : " << city << '\n';
}

// -------------------------------------------------------------
// Exercice 3 - Lecture clavier (cin)
// -------------------------------------------------------------
void ex3()
{
    int a, b;

    std::cout << "first number : ";
    std::cin >> a;

    std::cout << "second number : ";
    std::cin >> b;

    std::cout << "sum : " << (a + b) << '\n'
        << "difference : " << (a - b) << '\n'
        << "Product : " << (a * b) << '\n';
}

// -------------------------------------------------------------
// Exercice 4 - Conditions (if / else)
// -------------------------------------------------------------
void ex4()
{
    int number;

    std::cout << "Entrez un nombre : ";
    std::cin >> number;

    if (number > 0)
        std::cout << "Le nombre est positif.\n";
    else if (number < 0)
        std::cout << "Le nombre est negatif.\n";
    else
        std::cout << "Le nombre est nul.\n";

    if (number % 2 == 0)
        std::cout << "Le nombre est pair.\n";
    else
        std::cout << "Le nombre est impair.\n";
}

// -------------------------------------------------------------
// Exercice 5 - Le plus grand des trois (sans fonction toute faite)
// -------------------------------------------------------------
void ex5()
{
    int a, b, c;
    int max;

    std::cout << "a : ";
    std::cin >> a;

    std::cout << "b : ";
    std::cin >> b;

    std::cout << "c : ";
    std::cin >> c;

    max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    std::cout << "Le plus grand est : " << max << '\n';
}

// -------------------------------------------------------------
// Exercice 6 - Boucle for (table de multiplication)
// -------------------------------------------------------------
void ex6()
{
    int number;

    std::cout << "Table de : ";
    std::cin >> number;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << number << " x " << i << " = " << (number * i) << '\n';
    }
}

// -------------------------------------------------------------
// Exercice 7 - Boucle while (somme de 1 a N)
// -------------------------------------------------------------
void ex7()
{
    int n;
    int i = 1;
    int sum = 0;

    std::cout << "N : ";
    std::cin >> n;

    while (i <= n)
    {
        sum += i;
        i++;
    }

    std::cout << "Somme = " << sum << '\n';
}

// -------------------------------------------------------------
// Exercice 8 - Boucle avec validation (mot de passe)
// -------------------------------------------------------------
void ex8()
{
    std::string password;
    std::string input;
    int attempt = 0;

    std::cout << "Definissez le mot de passe : ";
    std::cin >> password;

    do
    {
        std::cout << "Mot de passe : ";
        std::cin >> input;
        attempt++;

        if (input != password)
            std::cout << "Mauvais.\n";

    } while (input != password);

    std::cout << "Acces autorise (" << attempt << " essais).\n";
}

// -------------------------------------------------------------
// Exercice 9 - Premiere fonction
// -------------------------------------------------------------

void ex9()
{
    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << " -> " << carre(i) << '\n';
    }
}



// -------------------------------------------------------------
// Exercice 10 - Fonction qui renvoie un bool
// -------------------------------------------------------------


void ex10()
{
    for (int i = 1; i <= 20; i++)
    {
        if (estPair(i))
            std::cout << i << '\n';
    }
}

// -------------------------------------------------------------
// Exercice 11 - Tableau / vector
// -------------------------------------------------------------
void ex11()
{
    std::vector<int> numbers = { 12, 7, 25, 3, 18 };

    int sum = 0;
    int max = numbers[0];

    std::cout << "Elements : ";

    for (int n : numbers)
    {
        std::cout << n << " ";
        sum += n;

        if (n > max)
            max = n;
    }

    std::cout << "\nSomme : " << sum;

    std::cout << "\nMoyenne : " << (sum / numbers.size());

    std::cout << "\nMax : " << max << '\n';
}

// -------------------------------------------------------------
// Exercice 12 - Chaines de caracteres
// -------------------------------------------------------------
void ex12()
{
    std::string word;

    std::cout << "Mot : ";
    std::cin >> word;

    int longueur = word.length();
    int voyelle = 0;

    std::string majuscule = word;

    for (int i = 0; i < majuscule.length(); i++)
    {
        majuscule[i] = toupper(majuscule[i]);
    }

    for (int i = 0; i < word.length(); i++)
    {
        char c = tolower(word[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
            voyelle++;
    }

    std::cout << "Longueur : " << longueur << '\n';
    std::cout << "Majuscule : " << majuscule << '\n';
    std::cout << "Voyelle : " << voyelle << '\n';
}

// -------------------------------------------------------------
// Exercice 13 - struct
// -------------------------------------------------------------


void ex13()
{
    Etudiant e1, e2;

    std::cout << "Nom etudiant 1 : ";
    std::cin >> e1.nom;

    std::cout << "Age etudiant 1 : ";
    std::cin >> e1.age;

    std::cout << "Moyenne etudiant 1 : ";
    std::cin >> e1.moyenne;

    std::cout << "\nNom etudiant 2 : ";
    std::cin >> e2.nom;

    std::cout << "Age etudiant 2 : ";
    std::cin >> e2.age;

    std::cout << "Moyenne etudiant 2 : ";
    std::cin >> e2.moyenne;

    std::cout << "Etudiant 1 : " << e1.nom
        << ", Age : " << e1.age
        << ", Moyenne : " << e1.moyenne << '\n';

    std::cout << "Etudiant 2 : " << e2.nom
        << ", Age : " << e2.age
        << ", Moyenne : " << e2.moyenne << '\n';

    if (e1.moyenne > e2.moyenne)
        std::cout << "Meilleure moyenne : " << e1.nom << '\n';
    else if (e2.moyenne > e1.moyenne)
        std::cout << "Meilleure moyenne : " << e2.nom << '\n';
    else
        std::cout << "Egalite de moyenne.\n";
}

// -------------------------------------------------------------
// Exercice 14 - Menu avec switch
// -------------------------------------------------------------
void ex14()
{
    int choice = 0;

    while (choice != 3)
    {
        std::cout << "\n1) Dire bonjour\n";
        std::cout << "2) Donner l'heure\n";
        std::cout << "3) Quitter\n";
        std::cout << "Choix : ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Bonjour\n";
            break;

        case 2:
            std::cout << "Si tu veux l'heure regarde ton téléphone\n";
            break;

        case 3:
            std::cout << "bye\n";
            break;

        default:
            std::cout << "Choix non gérer.\n";
            break;
        }
    }
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

struct Etudiant
{
    std::string nom;
    int age;
    double moyenne;
};


void bonus3() {
    EtudiantMethode e = { "Aria", 21, 14.5 };
    e.afficher();
}

int carre(int n)
{
    return n * n;
}

bool estPair(int n)
{
    return n % 2 == 0;
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
# TP C++ — Les bases en exercices

**Public :** B3 · **Durée :** 1h30 · **Modalité :** individuel ou binôme · **Langage :** C++

---

## Consignes

- Chaque exercice est **indépendant** : faites-les dans l'ordre, mais si vous bloquez, passez au suivant.
- Un fichier `.cpp` par exercice (`ex1.cpp`, `ex2.cpp`…) **ou** un seul fichier avec une fonction par exercice, comme vous préférez.
- Compilez avec : `g++ -std=c++?? -Wall ex1.cpp -o ex1`
- Testez chaque programme avant de passer au suivant.

---

## Exercice 1 — Premier programme (`cout`)

Affichez sur trois lignes :

```
Bonjour !
Je m'appelle <votre prenom>.
J'apprends le C++.
```

---

## Exercice 2 — Variables et types

Déclarez une variable de chaque type : un `int`, un `double`, un `char`, un `bool`, une `std::string`.
Affichez chacune avec un message clair, par exemple :

```
Age : 21
Taille : 1.78
Initiale : H
Etudiant : 1
Ville : Bordeaux
```

---

## Exercice 3 — Lecture clavier (`cin`)

Demandez deux nombres entiers à l'utilisateur, puis affichez leur **somme**, leur **différence** et leur **produit**.

```
Nombre 1 : 6
Nombre 2 : 4
Somme : 10
Difference : 2
Produit : 24
```

---

## Exercice 4 — Conditions (`if / else`)

Demandez un entier et indiquez s'il est **positif**, **négatif** ou **nul**, puis s'il est **pair** ou **impair**.

```
Entrez un nombre : -8
Le nombre est negatif.
Le nombre est pair.
```

---

## Exercice 5 — Le plus grand des trois

Demandez trois nombres et affichez le plus grand, **sans** utiliser de fonction toute faite (juste des `if`).

```
a : 5
b : 12
c : 9
Le plus grand est : 12
```

---

## Exercice 6 — Boucle `for`

Affichez la **table de multiplication** d'un nombre saisi par l'utilisateur, de 1 à 10.

```
Table de : 7
7 x 1 = 7
7 x 2 = 14
...
7 x 10 = 70
```

---

## Exercice 7 — Boucle `while`

Demandez un nombre `N`, puis affichez la **somme de tous les entiers de 1 à N** à l'aide d'une boucle `while`.

```
N : 5
Somme = 15
```

---

## Exercice 8 — Boucle avec validation

Demandez un mot de passe (un nombre, par ex. `1234`) **en boucle** tant que l'utilisateur ne saisit pas le bon. Affichez le nombre d'essais.

```
Mot de passe : 11
Mauvais.
Mot de passe : 1234
Acces autorise (2 essais).
```

---

## Exercice 9 — Première fonction

Écrivez une fonction `int carre(int n)` qui renvoie le carré d'un nombre, puis utilisez-la pour afficher les carrés de 1 à 5.

```
1 -> 1
2 -> 4
3 -> 9
4 -> 16
5 -> 25
```

---

## Exercice 10 — Fonction qui renvoie un `bool`

Écrivez `bool estPair(int n)` qui renvoie `true` si `n` est pair.
Utilisez-la dans une boucle pour afficher tous les nombres pairs de 1 à 20.

---

## Exercice 11 — Tableau / `vector`

Créez un `std::vector<int>` contenant `{12, 7, 25, 3, 18}`.
Affichez :
- tous les éléments ;
- leur **somme** ;
- leur **moyenne** ;
- le **maximum**.

```
Elements : 12 7 25 3 18
Somme : 65
Moyenne : 13
Max : 25
```

---

## Exercice 12 — Chaînes de caractères

Demandez un mot à l'utilisateur, puis affichez :
- sa **longueur** ;
- le mot **en majuscules** ;
- le **nombre de voyelles** qu'il contient.

```
Mot : Bordeaux
Longueur : 8
Majuscules : BORDEAUX
Voyelles : 4
```

---

## Exercice 13 — `struct`

Définissez une structure `Etudiant` avec un `nom` (string), un `age` (int) et une `moyenne` (double).
Créez deux étudiants, remplissez-les, et affichez leur fiche. Indiquez lequel a la meilleure moyenne.

---

## Exercice 14 — Menu avec `switch`

Faites un petit programme qui affiche un menu en boucle :

```
1) Dire bonjour
2) Donner l'heure (affichez n'importe quoi)
3) Quitter
Choix :
```

Utilisez un `switch`. Le programme ne s'arrête que sur le choix `3`.

---

## Bonus — Pour aller plus loin

- **B1.** Fonction `int factorielle(int n)` (boucle puis, si vous voulez, version récursive).
- **B2.** Demandez 5 notes, stockez-les dans un `vector`, puis triez-les avec `std::sort`.
- **B3.** Dans l'exercice `Etudiant`, ajoutez une **méthode** `afficher()` à la structure (premier pas vers les classes).

---

## Récapitulatif des notions

| Exercices | Notions |
|---|---|
| 1–3 | `cout`, variables, types, `cin` |
| 4–5 | conditions `if / else` |
| 6–8 | boucles `for` et `while` |
| 9–10 | fonctions, paramètres, valeur de retour |
| 11 | `vector`, parcours, calculs |
| 12 | `std::string` |
| 13 | `struct` |
| 14 | `switch` |
| Bonus | récursivité, `sort`, méthode |

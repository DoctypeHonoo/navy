<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174816828-c5691fd3-d53f-4f20-ba17-8c670976f20e.png"/>
</p>
<h1 align="center">
   Navy
</h1>

---

## Motivation : 

Le **navy** est un projet de début d'année à Epitech, il s'effectue en groupe de deux. Le but est de recréer un jeu de bataille navale dans le terminal, ou les deux joueurs ne peuvent communiquer qu'avec SIGUSER1 et SIGUSER2 et jouent sur une map de taille 8x8.

---

## Description :

Le deux joueurs doivent se connecter grâce au PID du premier joueur puis le jeu se lance, entre chaque tour, les joueurs doivent avoir le terrain affiché 2 fois, avec d'un côté leurs bâteaux et les coups râtés ou réussis de leur adversaire, et de l'autre côté, un terrain sans bâteau avec leurs propres coups râtés et réussis.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174827702-54f12637-4eb7-49fc-8d1d-730814a30b71.png">
  <img src="https://user-images.githubusercontent.com/91092610/174829629-1b7d3370-e161-4767-b703-3f96de20b1b4.png">
</p>


---

## Fonctions Autorisées : 

- open, close, read, write, lseek, malloc, free
- getpid, kill, signal, sigaction, sigemptyset
- setcontext, getcontext, usleep, nanosleep
- pause, getline, fopen, fclose

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/navy.git
$ cd navy
$ make
```
Joueur 1 :
```bash
$ ./navy fichier_position
```
<img src="https://user-images.githubusercontent.com/91092610/174832174-558e3cbe-f660-4988-8336-827b6394e9c1.png">

Joueur 2 :
```bash
$ ./navy PID_Joueur_1 fichier_position
```
<img src="https://user-images.githubusercontent.com/91092610/174832311-ed529100-feb5-4526-b947-bbf7510257ec.png">

---

## Comment l'utiliser ? : 

Le premier joueur doit lancer le programme en indiquant son fichier de position de bateau dans la ligne de l'execution du binaire, quand au second joueur, il doit inscrire avant ses positions, le PID du premier joueur, donné lors du lancement de la commande.
![image](https://user-images.githubusercontent.com/91092610/174833486-a7b48464-fda2-405f-912c-8fd53e112580.png)
![image](https://user-images.githubusercontent.com/91092610/174833586-2d946769-497f-4655-96a4-f39091ce527b.png)


<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174810019-f510ca1e-60b4-404c-990a-56407b5a6cfc.png"/>
</p>
<h1 align="center">
   My_Printf
</h1>

---

## Motivation : 

Le **my_printf** est le tout premier vrai projet à réaliser en solo à Epitech. Il consiste très simplement à recoder la fonction printf de la libC.

---

## Description :

Le but du projet est donc de recodé entièrement la fonction printf à ces quelques exceptions près : 
- Il n'est pas nécessaire de gérer les float, ou les doubles types
- Il n'est pas nécessaire d'implémenter le flag %n
- Il n'est pas nécessaire d'implémenter les "\*", les "'" et les "I"

Cependant, doivent être ajouté :
- Un flag %b qui doit afficher des nombres indéfinis au format binaire
- Un flag %S qui doit afficher une chaîne de caractère comme le %s, mais qui remplace les caractères non affichable par un "\" suivi de la valeur du caractère en base octale.

---

## Fonctions Autorisées : 

- write
- malloc
- free

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/my_printf.git
$ cd my_printf
$ make
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174813458-53586f82-45c6-4b07-a6d8-f908227c5d98.png">
</p>

---

## Comment l'utiliser ? : 

Le make créera alors un libmy.a que vous pourrez réutiliser lors de votre compilation et ensuite utiliser my_printf() dans vos programmes. Il s'utilise exactement comme l'originale.

<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174815047-3078ab97-4244-4831-a426-3a32813c3d1f.png">
</p>

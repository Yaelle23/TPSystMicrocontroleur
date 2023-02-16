# TPSystMicrocontroleur

test
#1.2 Le Microcontrôleur sur Kicad
13- PB9 est relié à la masse pour inhiber l'état reset du uC.
14- Leur rôle est d'éviter la chute de tension


#1.3 Le reste du schéma
3- C'est la première page qui indique les valeurs des condensateurs dans la datasheet
5- C'est la page 6 qui indique les condensateurs du DAC
6- La broche CS permet d'autoriser le fonctionnement
7- La broche LDAC permet d'avoir des sorties en simultanée
8- MISO n'est pas utilisé car le DAC n'envoie pas de data au uC
10- On le retrouve dans la datasheet de la sonde stlink v3


#1.4 Affectation des empreintes
3- Ces valeurs font référence aux tailles des composants
4- LQFP, SOT-223, SOIC représentent les références des types de boitiers

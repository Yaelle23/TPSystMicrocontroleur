# TPSystMicrocontroleur

# THOMAS Farima
# NOYON Yaëlle


# 1.2 Le Microcontrôleur sur Kicad
13- PB9 est relié à la masse pour inhiber l'état reset du uC.
14- Leur rôle est d'éviter la chute de tension


# 1.3 Le reste du schéma
3- C'est la première page qui indique les valeurs des condensateurs dans la datasheet
5- C'est la page 6 qui indique les condensateurs du DAC
6- La broche CS permet d'autoriser le fonctionnement
7- La broche LDAC permet d'avoir des sorties en simultanée
8- MISO n'est pas utilisé car le DAC n'envoie pas de data au uC
10- On le retrouve dans la datasheet de la sonde stlink v3


# 1.4 Affectation des empreintes
3- Ces valeurs font référence aux tailles des composants
4- LQFP, SOT-223, SOIC représentent les références des types de boitiers

#LQFP (Low Profile Quad Flat Pack ) :C'est un type de boîtier de circuit intégré destiné à être directement soudé sur circuit
imprimé.
#SOT-223 : C'est un boîtier monté en surface avec dissipateur thermique accru
#SOIC (Small Outline integrated Circuit) : Un circuit intégré à petit contour est un boîtier de circuit intégré monté en surface qui occupe une surface d'environ 30 à 50% inférieure à celle d'un boîtier double en ligne équivalent, avec une épaisseur typique inférieure de 70%.

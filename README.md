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

# 3 Activation des LL drivers
2-Les fichiers générés sont liés au driver qu’on a positionné en LL :
    • main (.c et .h)
    • gpio (.c et .h)
    • adc (.c et .h)
    • spi (.c et .h)
    • stm32l0xx (.c et .h)
    • tim.c (.c et .h)
    • usart.c (.c et .h)
Ces codes nous permettent d’avoir accés à des registres différents

4-Selon la documentation de la HAL STM32L0 en plus des fonctions d’initialisation périphérique, les pilotes LL offrent un ensemble de fonctions « inline » pour un accès direct au registre. 

5-Dans le .h on définit la configuration des registres.

# 3.2 LED Simple
1-Configurer le timer de la LED pour obtenir une horloge de 16MHz et une résolution de 8bits. Ça veut dire que Counter period vaut 255.On déduis la valeur de PSC = 16000/256 = 63

# 3.2 LED avec timer
3-On veut obtenir un compteur à 1MHz ce qui signifie que la valeur de PSC doit être égal à 16. Le compteur doit reset toutes les millisecondes donc on paramètre ARR pour être égal à 1000. 

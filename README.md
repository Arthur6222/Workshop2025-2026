# Workshop – Gadgets numériques façon James Bond (POC)

Projet réalisé dans le cadre du concours Workshop. L’objectif : concevoir et coder des gadgets numériques inspirés de l’univers de l’espionnage.
Tous les objets présentés sont des proofs of concept (POC) — démonstrations fonctionnelles réalisées pour valider des idées et des intégrations électroniques. Certaines contraintes de taille et de fabrication ont conduit à des adaptations (voir section « Limitations et recommandations »).

## Briquet espion – Détection de mouvement (POC)

**Statut :** Proof of concept

**Carte utilisée :** Arduino R4 WIFI

**Capteur :** PIR (détection infrarouge passif)

**Fonctionnalité :** détection de mouvement devant le briquet ; peut servir de déclencheur pour une alarme, un enregistrement ou un signal externe.

**Intégration matérielle :** la carte, le capteur et l’alimentation sont logés dans un boîtier imprimé en 3D (modèle adapté pour faciliter l’accès aux composants). Une découpe laser a été utilisée pour ajuster des ouvertures et interfaces si nécessaire.

**Remarque POC :** pour des raisons de facilité d’assemblage et d’accès aux composants, le « briquet » est plus volumineux qu’un briquet commercial classique.

## Boîte à cigares – Laser caché (POC)

**Statut :** Proof of concept.

**Carte utilisée :** Arduino R4 WIFI

**Fonctionnalité :** émetteur laser piloté par le microcontrôleur. Utilisé comme démonstration d’un gadget à activation électronique.

**Intégration matérielle :** boîtier modifié (impression 3D) + ajustements par découpe laser pour pas de fuite optique et fixation du module laser.

**Sécurité :** le module laser doit être manipulé avec précaution ; éviter l’orientation vers les yeux et respecter la réglementation locale sur les puissances laser.

**Remarque POC :** la boîte est dimensionnée pour contenir facilement l’électronique ; elle peut être plus grande qu’une boîte à cigares réelle.

## Gadget camouflé – Webcam intégrée (POC)

**Statut :** Proof of concept.

**Carte utilisée :** Arduino R4 WIFI

**Composant :** webcam miniature / module caméra

**Fonctionnalité :** capture et (selon implémentation) transmission d’images de manière discrète.

**Intégration matérielle :** boîtier imprimé en 3D adapté au module caméra, avec passages pour câble et fixation.

**Remarque POC :** la forme et les dimensions de l’objet camouflé sont adaptées pour faciliter le montage et le refroidissement de l’électronique.

## Maraudeur Wi-Fi – Scan réseau (POC)

**Statut :** Proof of concept.

**Carte utilisée :** ESP8266

**Fonctionnalité :** scan et détection des réseaux Wi-Fi à proximité ; démonstration d’un module de reconnaissance de réseaux (usage pédagogique et expérimental uniquement).

**Remarque légale et éthique :** le scan passif de réseaux Wi-Fi est généralement légal pour la simple détection SSID, mais toute tentative d’accès ou d’interception de trafic sans autorisation est illégale. Ce POC est destiné à des fins éducatives et de démonstration en environnement contrôlé.

## Outils et technologies utilisés

**Microcontrôleurs :** Arduino R4 WIFI (briquet, webcam, CD-R, boîte à cigares), ESP8266 (maraudeur Wi-Fi)

**Capteurs :** PIR (mouvement)

**Fabrication numérique :**

- Découpeuse laser (ajustements, ouvertures, inserts).
- Imprimante 3D Creality K2 (tous les boîtiers et la majorité des pièces ont été conçus et réalisés en impression 3D).

**Remarque fabrication :** tous les « objets du quotidien » (paquets de cigarettes, boîtes, etc.) ont été recréés en impression 3D — souvent agrandis — pour pouvoir intégrer les cartes et composants. Par exemple, le paquet de cigarettes utilisé comme POC est sensiblement plus grand que la taille réelle pour loger facilement l’électronique.

## Limitations et recommandations (POC)

Les prototypes sont des POC et ne reproduisent pas toujours les dimensions réelles des objets commerciaux. Cela a été fait volontairement pour :

- faciliter l’assemblage et la maintenance des composants,
- permettre des essais rapides et les itérations mécaniques/électroniques.

Si l’objectif est d’obtenir un objet au format réel :

- prévoir des PCBs sur-mesure (ou modules plus compacts), optimisation du routage et réduction de l’alimentation.
- utiliser des capteurs et batteries de très faible profil (p.ex. LiP
# Workshop – Gadgets numériques façon James Bond (POC)

Projet réalisé dans le cadre du concours Workshop. L’objectif : concevoir et coder des gadgets numériques inspirés de l’univers de l’espionnage.
Tous les objets présentés sont des proofs of concept (POC) — démonstrations fonctionnelles réalisées pour valider des idées et des intégrations électroniques. Certaines contraintes de taille et de fabrication ont conduit à des adaptations (voir section « Limitations et recommandations »).

## Briquet espion – Détection de mouvement (POC)

**Statut :** Proof of concept.

**Carte utilisée :** Arduino R4 WIFI

**Capteur :** PIR (détection infrarouge passif)

**Fonctionnalité :** détection de mouvement devant le briquet ; peut servir de déclencheur pour une alarme, un enregistrement ou un signal externe.

**Intégration matérielle :** la carte, le capteur et l’alimentation sont logés dans un boîtier imprimé en 3D (modèle adapté pour faciliter l’accès aux composants). Une découpe laser a été utilisée pour ajuster des ouvertures et interfaces si nécessaire.

**Remarque POC :** pour des raisons de facilité d’assemblage et d’accès aux composants, le « briquet » est plus volumineux qu’un briquet commercial classique.

## Boîte à cigares – Laser caché (POC)

**Statut :** Proof of concept.

**Carte utilisée :** Arduino R4 WIFI

**Fonctionnalité :** émetteur laser piloté par le microcontrôleur. Utilisé comme démonstration d’un gadget à activation électronique.

**Intégration matérielle :** boîtier modifié (impression 3D) + ajustements par découpe laser pour pas de fuite optique et fixation du module laser.

**Sécurité :** le module laser doit être manipulé avec précaution ; éviter l’orientation vers les yeux et respecter la réglementation locale sur les puissances laser.

**Remarque POC :** la boîte est dimensionnée pour contenir facilement l’électronique ; elle peut être plus grande qu’une boîte à cigares réelle.

## Gadget camouflé – Webcam intégrée (POC)

**Statut :** Proof of concept.

**Carte utilisée :** Arduino R4 WIFI

**Composant :** webcam miniature / module caméra

**Fonctionnalité :** capture et (selon implémentation) transmission d’images de manière discrète.

**Intégration matérielle :** boîtier imprimé en 3D adapté au module caméra, avec passages pour câble et fixation.

**Remarque POC :** la forme et les dimensions de l’objet camouflé sont adaptées pour faciliter le montage et le refroidissement de l’électronique.

## CD-R espion – Module supplémentaire (POC)

**Statut :** Proof of concept.

**Carte utilisée :** Arduino R4 WIFI

**Fonctionnalité :** support d’électronique dissimulé dans un faux CD-R ; utilisé comme démonstration d’intégration.

**Intégration matérielle :** réplique imprimée en 3D et/ou modification d’un boîtier existant pour accueillir la carte.

## Maraudeur Wi-Fi – Scan réseau (POC)

**Statut :** Proof of concept.

**Carte utilisée :** ESP8266

**Fonctionnalité :** scan et détection des réseaux Wi-Fi à proximité ; démonstration d’un module de reconnaissance de réseaux (usage pédagogique et expérimental uniquement).

**Remarque légale et éthique :** le scan passif de réseaux Wi-Fi est généralement légal pour la simple détection SSID, mais toute tentative d’accès ou d’interception de trafic sans autorisation est illégale. Ce POC est destiné à des fins éducatives et de démonstration en environnement contrôlé.

## Outils et technologies utilisés

**Microcontrôleurs :** Arduino R4 WIFI (briquet, webcam, CD-R, boîte à cigares), ESP8266 (maraudeur Wi-Fi)

**Capteurs :** PIR (mouvement)

**Fabrication numérique :**

- Découpeuse laser (ajustements, ouvertures, inserts).
- Imprimante 3D Creality K2 (tous les boîtiers et la majorité des pièces ont été conçus et réalisés en impression 3D).

**Remarque fabrication :** tous les « objets du quotidien » (paquets de cigarettes, boîtes, etc.) ont été recréés en impression 3D — souvent agrandis — pour pouvoir intégrer les cartes et composants. Par exemple, le paquet de cigarettes utilisé comme POC est sensiblement plus grand que la taille réelle pour loger facilement l’électronique.

## Limitations et recommandations (POC)

Les prototypes sont des POC et ne reproduisent pas toujours les dimensions réelles des objets commerciaux. Cela a été fait volontairement pour :

- faciliter l’assemblage et la maintenance des composants,
- permettre des essais rapides et les itérations mécaniques/électroniques.

Si l’objectif est d’obtenir un objet au format réel :

- prévoir des pièces sur-mesure (ou modules plus compacts), et réduction de l’alimentation (batteries externes).
  

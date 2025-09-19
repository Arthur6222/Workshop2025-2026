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

**Fonctionnalité principale :** émetteur laser piloté par le microcontrôleur. Utilisé comme démonstration d’un gadget à activation électronique.

**Modifications ajoutées :**

* **Leurre bruiteur (leurre sonore)** — module générant des sons préenregistrés ou des tonalités (ex : buzzer ou petit haut-parleur) pour simuler une activité et détourner l’attention.
* **Maraudeur (module de détection)** — module de détection des réseaux / signaux à proximité (ex. scan passif SSID) destiné à la reconnaissance environnementale pédagogique.
* **Système de fermeture motorisé (servo)** — intégration d’un servomoteur pour actionner un loquet ou un mécanisme de fermeture de la boîte.

**Intégration matérielle :** boîtier modifié (impression 3D) + ajustements par découpe laser pour pas de fuite optique et fixation du module laser. Les nouveaux modules (leurre sonore, maraudeur, servomoteur) sont logés dans des compartiments dédiés ou sur supports imprimés pour faciliter la maintenance.

**Sécurité et conformité :**

* Le module laser doit être manipulé avec précaution ; éviter l’orientation vers les yeux et respecter la réglementation locale sur les puissances laser.
* Le leurre sonore doit respecter les règles de sécurité (volumes raisonnables) et ne pas être utilisé pour causer nuisance ou mettre en danger.
* Le maraudeur : le scan passif de réseaux Wi‑Fi (détection d’SSID) est autorisé dans de nombreuses juridictions pour des usages non intrusifs, mais toute tentative d’accès, d’interception de trafic ou d’exploitation de réseaux sans autorisation est illégale.
* Le système de fermeture motorisé doit inclure des sécurités mécaniques pour éviter coincements ou dommages ; la commande doit prévoir un arrêt d’urgence.

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

**Capteurs et modules ajoutés :** PIR (mouvement), module laser, module caméra miniature, buzzer / haut-parleur (leurre sonore), module Wi‑Fi pour scan, servomoteur (système de fermeture).

**Fabrication numérique :**

* Découpeuse laser (ajustements, ouvertures, inserts).
* Imprimante 3D Creality K2 (tous les boîtiers et la majorité des pièces ont été conçus et réalisés en impression 3D).

**Remarque fabrication :** tous les « objets du quotidien » (paquets de cigarettes, boîtes, etc.) ont été recréés en impression 3D — souvent agrandis — pour pouvoir intégrer les cartes et composants. Par exemple, le paquet de cigarettes utilisé comme POC est sensiblement plus grand que la taille réelle pour loger facilement l’électronique.

## Limitations et recommandations (POC)

Les prototypes sont des POC et ne reproduisent pas toujours les dimensions réelles des objets commerciaux. Cela a été fait volontairement pour :

* faciliter l’assemblage et la maintenance des composants,
* permettre des essais rapides et les itérations mécaniques/électroniques.

Si l’objectif est d’obtenir un objet au format réel :

* prévoir des pièces sur-mesure (ou modules plus compacts), et réduction de l’alimentation (batteries externes).
* utiliser des capteurs et batteries de très faible profil (p.ex. LiPo basse épaisseur) et concevoir des PCB sur-mesure.

**Recommandations spécifiques aux ajouts :**

* Prévoir des logements et fixations pour le servomoteur afin d’assurer un fonctionnement fiable du mécanisme de verrouillage.
* Isoler et protéger le module laser pour éviter toute fuite optique et incident oculaire.
* Concevoir le leurre sonore avec réglage de volume et temporisation pour éviter nuisance sonore prolongée.
* Pour le maraudeur Wi‑Fi, documenter clairement les limites d’usage et inclure un mode « test » qui n’essaie jamais d’accéder à des réseaux ou d’intercepter du trafic.

---

*Document modifié : ajouts — leurre bruiteur, maraudeur, et système de fermeture motorisé dans la Boîte à cigares (POC).*

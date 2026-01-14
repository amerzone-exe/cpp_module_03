
**Comportement des bases virtuelles :**

Si la classe la plus dérivée (DiamondTrap) ne spécifie pas d'initialiseur pour une base virtuelle (ClapTrap), alors ClapTrap utilise son constructeur par défaut
Les constructeurs de ScavTrap et FragTrap ignorent leurs propres initialisations de ClapTrap quand ils sont appelés depuis une classe avec héritage virtuel.

**Pourquoi cette règle existe ?**

Évite l'ambiguïté : Quelle version de ClapTrap utiliser ? Celle de ScavTrap ou celle de FragTrap ?
Contrôle explicite : La classe finale décide exactement comment initialiser l'unique sous-objet ClapTrap partagé
Cohérence : Garantit qu'il n'y a qu'une seule initialisation pour la base virtuelle

**Pourquoi on check this != &rhs ?**

La vérification if (this != &rhs) sert à éviter la destruction accidentelle des données quand on assigne un objet à lui-même (auto-affectation).
Comme les 2 on le même espace mémoire, si je decide de delete l'un pour ensuite l'assigner à l'autre je supprimerai la meme memoire donc corruption.
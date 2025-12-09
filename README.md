# Práctica 09 - Patrón Singleton

**Integrante**
1. [Cari Lipe Paul Andree]

---

## Cuestionario

### 1. ¿Qué desventajas tiene el patrón Singleton en pruebas unitarias?
El principal problema es que introducen un estado global que persiste durante toda la ejecución, lo que impide el aislamiento entre pruebas; si un test modifica el Singleton, puede afectar al resultado del siguiente. Además, al accederse mediante un método estático fijo, es muy difícil sustituir la instancia real por un "mock" o simulador, complicando la prueba de los componentes que dependen de él.

### 2. ¿Cuándo no es recomendable usar Singleton?
No se recomienda cuando se utiliza simplemente para dar acceso global a datos sin una lógica estructural que justifique la unicidad, ya que esto aumenta el acoplamiento y oculta las dependencias del código. Tampoco es ideal en sistemas que requieren escalabilidad extrema o donde el objeto debe guardar estados que varían demasiado, pues convierte a la clase en un cuello de botella difícil de depurar y mantener.

### 3. ¿Cómo se diferencia de una clase estática?
Un Singleton crea una instancia real de un objeto, lo que le permite implementar interfaces, heredar de otras clases y ser pasado como parámetro o almacenado en variables, ofreciendo polimorfismo. A diferencia de una clase estática, que se inicializa automáticamente al cargar el programa, el Singleton permite "Lazy Initialization" y controlar su ciclo de vida y destrucción de memoria manualmente.
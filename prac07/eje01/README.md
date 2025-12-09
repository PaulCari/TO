# Ejercicio 01: Implementación directa del Singleton

## Descripción
Este ejercicio implementa el patrón de diseño **Singleton** en su forma más básica para una clase llamada `Configuracion`. El objetivo es simular un almacén de configuraciones globales del sistema asegurando que **solo exista una única instancia** de esta clase en todo el ciclo de vida del programa.

## Implementación
Se ha creado la clase `Configuracion` con las siguientes características del patrón:
1.  **Constructor Privado:** `Configuracion()` es privado para evitar que se creen objetos con `new` desde fuera de la clase.
2.  **Instancia Estática:** Se mantiene un puntero estático `static Configuracion* instancia` que almacena la única referencia.
3.  **Método de Acceso:** El método `getInstancia()` verifica si la instancia ya existe; si no, la crea. Si ya existe, devuelve la misma.

En el `main`, se solicitan tres punteros (`c1`, `c2`, `c3`) a la configuración. Se imprime la dirección de memoria de cada uno para demostrar que **todos apuntan a la misma ubicación**, confirmando que no se han duplicado objetos.
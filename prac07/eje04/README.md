# Ejercicio 04: Singleton en un Juego (Estado Global)

## Explicación
Este ejercicio aplica el patrón **Singleton** para manejar el estado global de un juego mediante la clase `ControlJuego`.

El patrón permite centralizar atributos críticos como el nivel actual, el puntaje y las vidas en una única instancia. De esta forma, distintos módulos del programa (el jugador, los enemigos y la interfaz) pueden modificar y consultar el mismo estado compartido sin necesidad de pasar referencias complejas entre objetos.
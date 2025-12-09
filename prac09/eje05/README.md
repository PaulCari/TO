# Ejercicio 05: Singleton Thread-Safe (Desafío)

## Explicación
Este ejercicio modifica la implementación del Logger para hacerlo seguro en entornos multihilo (**thread-safe**).

Se utiliza la biblioteca `<mutex>` para proteger la creación de la instancia y la escritura en el archivo.
1.  **Double-Checked Locking:** En el método `getInstancia()`, se verifica dos veces si la instancia es nula. La segunda verificación ocurre dentro de un bloqueo (`lock_guard`), garantizando que si dos hilos entran al mismo tiempo, solo uno cree el objeto.
2.  **Escritura Atómica:** El método `log()` también está protegido por un mutex para evitar que los mensajes de distintos hilos se entremezclen al escribir en el archivo.
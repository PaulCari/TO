# Ejercicio 02: Singleton con Recursos Compartidos

## Explicación
En este ejercicio se implementa una clase `Logger` que gestiona un recurso compartido: la escritura en un archivo de texto (`bitacora.log`).

El patrón **Singleton** asegura que solo exista una instancia del Logger activa en todo el programa. Esto permite que diferentes partes del código registren mensajes en el mismo archivo de forma centralizada, agregando la hora exacta del evento, sin generar conflictos por múltiples accesos al archivo.

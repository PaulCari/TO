# Ejercicio 03: Conexión simulada a Base de Datos

## Explicación
Este ejercicio simula una clase de conexión a base de datos llamada `ConexionBD`. Mediante el patrón **Singleton**, se garantiza que solo pueda existir una única "conexión" activa en el sistema.

Si se intenta crear una nueva instancia desde otro punto del programa, se devuelve la conexión ya existente. Esto permite controlar el acceso al recurso y evita errores lógicos, como intentar conectar una base de datos que ya está en uso, tal como se demuestra al verificar el estado compartido entre las variables `c1` y `c2`.
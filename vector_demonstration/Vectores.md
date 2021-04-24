# Vectores

- ### Capacidad

  Cuantos elementos puedo meter al vector sin redimensionarlo. O podriamos llamarlo el **Tamaño teórico del vector**.

- ### Tamaño 
  
  Cuantos elementos existen en el vector, aunque estos esten indefinidos.

- ### Redimensionar
  
  Declarar un espacio de memoria nuevo, donde podamos agregar más o menos elementos que en el espacio de memoria original.

  - Redimensionar implica copiar todos los elementos que actualmente contiene el vector. 

## Inefectivo 1

Consideremos una implementación de vector, que cada vez que necesitemos espacio al insertar un elemento, redimensionamos el vector para no desperdiciar posiciones de memoria. 

- **Esto es ineficiente**: Para agregar N elementos necesitamos hacer N redimensiones, y por ende tenemos que hacer *(N^2)/2* operaciones.

- **No desperdicia espacio**: Es efectivo en espacio, no desperdicia nada sin embargo, el costo en tiempo es tanto que no compensa ahorrar espacio.

## Inefectivo 2

Consideremos una implementación del vector, que cada vez que necesitemos espacio al insertar un elemento, redimensionamos el vector desperdiciando *k* posiciones de memoria.

  - **Esto sigue siendo ineficiente**: Si es cierto que es menos ineficiente que ```inefectivo 1``` también tenemos una ineficiencia al tomarnos para insertar N *(N^2)/2k*

  - **Desperdicia espacio**: En este caso desperdiciamos espacio, sin embargo, es solo k elementos. 

## Efectivo: STD

Consideremos una implementación del vector, que cada vez que necesitemos espacio, **duplique** el tamaño del arreglo. Esta es la implementación de push_back en un vector ***STD***

  - **Esto es eficiente**: Solo hace las redimensiones cuando se acaba el espacio, estas toman poco tiempo y se dan con cada vez menor frecuencia. 

  - **Mayor desperdicio de memoria**: Cada vez que redimensionamos al insertar n elementos desperdiciamos n-1 espacios en memorial.

  - ***PODEMOS EVITAR EL DESPERDICIO***: Si dimensionamos el arreglo de antemano y tomamos medidas para evitar redimensionar el arreglo.
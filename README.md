#Autor: Luis Gerardo Manrique Cardona                Universidad del Valle

Este programa recibe como entrada n vectores de tamaños distintos o iguales, y imprime por pantalla el resultado
de el producto cartesiano entre ellos, para ejecutar el programa compile y ejecute el programa sin argumentos 
y siga las instrucciones dadas, vale decir que no tiene soporte de errores, esto es, hay casos en los que si los datos 
ingresados son erroneos, o si se ingresa un numero de vecores menor a 2, el programa puede dar resultados inesperados.

Cada conjunto es visto por la aplicacion como un vector de strings y esta implementado para el caso 
en el que cada elemento del conjunto es un dato individual,si se quiere que un elemento sea un conjunto de datos,se debe
realizar con el siguiente formato:

A = {a,b,{a,b,c}} //ejemplo de vector de entrada valido, siempre y cuando se ingrese literalmente {a,b,c} como
tercer dato de entrada en el conjunto A.
B = {a,b,1,#} //ejemplo de vector de entrada correcto

Por el tipo de dato de los vectores de entrada, siempre y cuando cada elemento del conjunto un dato y no un conjunto
este puede ser un entero un caracter o incluso un caracter especial.

El programa funciona de la siguiente forma:

      1) Para compilar el archivo:  g++ -o <nombre_programa> producto_cartesiano.cpp 
         por ejemplo  g++ -o producto producto_cartesiano.cpp 
      2) Luego de compilar el archivo, se ejecuta este tipeando en la terminal ./producto en el caso de que se halla 
         utilizado el ejemplo dado para compilar. El programa no utiliza argumentos.
      3) Al ejecutar el programa lo primero que aparece es lo siguiente:
         "Ingrese el numero de conjuntos que desea ingresar (dos o más):" usted debera digitar un valor numerico
         que puede ser de 2 hasta mas de 1000000 si lo desea, pero debe ser de este formato, de lo contrario la aplicacion
         no tendra un comportamiento correcto.
      4) Se procede a ingresar el tamaño del primer conjunto:
         sale un mensaje como el siguiente:
         "Ingrese el tamaño del conjunto n :" // Debe ingresar unicamente un dato numerico del 0 al 100000, en caso que el resultado
         del producto cartesiano sea el conjunto vacio se imprimira "{}".
      5) Luego de ingresar el tamaño de el conjunto se procede a ingresar cada elemento, aqui un ejemplo:
          Ingrese el tamaño del conjunto 1 :3
          Ingrese el valor [0]: a
          Ingrese el valor [1]: b
          Ingrese el valor [2]: {c,d,e}
       6) El proceso 4 y 5 se repiten tantas veces como se halla indicado en el numero de conjuntos 
       7) Una vez se halla ingresado la totalidad de los datos de entrada y si estos no fueron erroneos finalmente se imprime 
          el producto potencia de los conjuntos ingresados, aqui un ejemplo completo de los resultados de la ejecucion del
          programa:
          
          user@name_host:~/mat_discretas_lab2$ g++ -o producto_cartesiano producto_cartesiano.cpp
          user@name_host:~/mat_discretas_lab2$ ./producto_cartesiano Ingrese el numero de conjuntos que desea ingresar (dos o más): 2
          Ingrese el tamaño del conjunto 1 :3
          Ingrese el valor [0]: a
          Ingrese el valor [1]: {b,c}
          Ingrese el valor [2]: d
          Ingrese el tamaño del conjunto 2 :3
          Ingrese el valor [0]: 1
          Ingrese el valor [1]: {0,1,2}
          Ingrese el valor [2]: 18
          El 
          {a,1}
          {a,{0,1,2}}
          {a,18}
          {{b,c},1}
          {{b,c},{0,1,2}}
          {{b,c},18}
          {d,1}
          {d,{0,1,2}}
          {d,18}

          


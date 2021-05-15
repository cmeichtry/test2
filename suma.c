#include <stdio.h>

int suma_digitos(int n1);

int main(void){
    
    printf("%d\n", suma_digitos(1234));

    return 0;
}  
/*funcion original*/
int suma_digitos(int n1){
    return ((n1 % 10) + digitos(n1 / 10)); //caso recursivo
}
/*
suma lo digitos del entero que paso por argumento
no funciona porque falta el caso base y cuando ocurre el caso recursivo lo llama con un nombre que no es el de la funcion
*/
/*
int suma_digitos(int n1){
    if(n1<1){
        return 0;
    }
    else{
        return ((n1 % 10) + suma_digitos(n1 / 10));
    }
}
*/
/*Para subirlo a github
Crear un repositorio de GitHub y subir un main utilizando la
función tal cual está escrita. Luego, corregir la función,
realizar un commit y pushearlo al repositorio.

Para subir el archivo la primera vez:

1) crear un nuevo repositorio en GitHub y copiar el link para clonarlo
2) en consola escribir git clone linkdelrepositorio.git. Con esto creamos un "workspace"
3) cuando guardemos o creemos algun archivo en esa area. Hay que escribir git add suma.c,
   con esto nuestro archivo pasara a una "staging area".
4) luego con el comando git commit el archivo pasara a un "local repository". Es opcional 
   utilizar el flag -m para poner un mensaje para la version
5) finalmente para subirlo a nuestro GitHub habra que usar el comando git push, luego de esto
   se nos pedira user y password, al introducirlas nuestro archivo quedara guardado en un 
   "remote repository"

Para subirlo corregido:

1) editar el archivo y guardarlo.
2) con el comando git diff podremos ver los cambios que sufrio el archivo. Luego de esto 
   podemos utilizar el comando git add . para pasar al "staging area" a todos los archivo que 
   hayan sufrido cambios
3) utilizar git commit
4) utilizar git push, poner user y password y se sube la version corregido a GitHub
*/
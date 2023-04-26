#include <iostream>
#include "estructura.h"
#include <string.h>

#define MAX 100

using namespace std;

categoria categorias[MAX];

int pos=0;
/*CRUD*/
/*  C - Crear
    R - Leer
    U - Actualizar
    D - Eliminar*/

void agregarCategoria(int id, char nombre[]);
void mostarCategoria(int i);
void mostarCategorias();
bool existeCategoria(int id);
void eliminarCategoria(int id);
void editarCategoria(int id, char nombre[]);
void reorenar(int i);


void agregarCategoria(int id, char nombre[]){
    categorias[pos].idCat = id; 
    strcpy(categorias[pos].nombre, nombre);
    pos ++;
}
void mostarCategoria(int i){
    cout << "ID: " << categorias[i].idCat<< endl;
    cout << "Nombre: " << categorias[i].nombre<<endl;
}

void mostarCategorias(){
    for(int i; i<pos;i++){
        cout << "ID: " << categorias[i].idCat<< endl;
        cout << "Nombre: " << categorias[i].nombre<<endl;

    }
}

bool existeCategoria(int id){
    bool existe = false;
    int i = 0;
    while(i < pos)
    {
        if(categorias[i].idCat == id)
        {
            existe=true;
            break;
        } 
      i++;
    }
    return existe;
}

void eliminarCategoria(int id){
    if(existeCategoria(id))
    { 
    


    }
    else
    {
        cout << "Error: NO EXISTE EL CODIGO INDICADO \n";
    }
}

void reordenar(int i)
{
    for(int i=0; i<pos; i++)
    {
        

    }

}

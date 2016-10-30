/*
 * =====================================================================================
 *
 *       Filename:  listas.h
 *
 *    Description:  Fichero h que implementa el tipo de datos lista
 *
 *        Version:  1.0
 *        Created:  14/09/16 15:44:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aitor Alkorta (), oficial.barbrady@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#pragma once

//Definimos el tipo de nodo

typedef struct tipo_lista  {
	void *value;
	struct tipo_lista *next;
}tipo_lista;


tipo_lista *_iniciar_lista();
int insertar_en_lista(tipo_lista *lista, void *elemento);
int obtener_tamanio_lista(tipo_lista *lista);
int imprimir_lista(tipo_lista *lista);
int eliminar_primer_elemento(tipo_lista *lista);
void * obtener_elemento(tipo_lista *lista);

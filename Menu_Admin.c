#include "Admin.h"
#include "imprimir_listas.h"
#include "clientes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void perfil_admin(){
    printf("Indique que desea realizar \n\n");
            printf("1.  Consultar perfil \n");
            printf("2.  Modificar perfil \n");
            printf("0.  Volver atras \n");
            int opc;
            scanf("%i",&opc);
            while(opc<0 || opc>2){
                printf("Introduzca un numero valido \n");
                scanf("%i",&opc);
            }
            system("cls");
            switch(opc){
                case 0:
                    return menu_Admin();
                    break;
                case 1:
                    printf("Datos perfil \n");  // AQUI SE CARGARIA EL FICHERO CON TODOS LOS  DATOS DEL ADMIN
                    break;
                case 2:
                    printf("Modificar perfil \n");  // CARGAR EL FICHERO PARA MODIFICARLO
                    break;
            }
            // Consultar y modificaar perfil
}

void clientes_admin(){
    printf("Indique que desea realizar \n");
            printf("1.  Ver lista de clientes \n");
            printf("2.  Nuevo cliente \n");
            printf("3.  Eliminar Cliente \n");
            printf("4.  Modificar cliente \n");
            printf("5.  Buscar cliente \n");
            printf("0.  Volver atras \n");
            int opc;
            scanf("%i",&opc);
            while(opc<0 || opc>5){
                printf("Introduzca un numero valido \n");
                scanf("%i",&opc);
            }
            system("cls");
            switch(opc){
                case 0:
                    return menu_Admin();
                    break;
                case 1:
                    printf("Lista de clientes:  \n");  // CARGAR EL FICHERO DE CLIENTES
                    impclientes();
                    break;
                case 2:
                    printf("Nuevo cliente:  \n");  // BUSCADOR DE CLIENTE. SI NO EXISTE DECIRLO. ELEGIR QUE MODIFICAR. al terminar: se han realizado los cambios reutrn clientes
                    nuevocliente();
                    break;
                case 3:
                    printf("Que cliente desea eliminar? \n");
                    borrarcliente();
                    break;
                case 4:
                    printf("Que cliente desea modificar? \n"),
                    modificarcliente();
                    break;
                case 5:
                    printf("Indique el parametro de busqueda \n");
                    buscarcliente();
                    break;
            }
}

void prov_admin(){
    printf("Indique que desea realizar \n \n");
            printf("1.  Ver lista de proveedores \n");
            printf("2.  Nuevo proveedor \n");
            printf("3.  Eliminar proveedor \n");
            printf("4.  Modificar proveedor \n");
            printf("5.  Buscar proveedor \n");
            printf("0.  Volver atras \n");
            int opc;
            scanf("%i",&opc);
            while(opc<0 || opc>5){
                printf("Introduzca un numero valido \n");
                scanf("%i",&opc);
            }
            system("cls");
            switch(opc){
                case 0:
                    return menu_Admin();
                    break;
                case 1:
                    printf("Lista de proveedores:  \n");  // CARGAR EL FICHERO DE PROVEEDORES
                    impprov();
                    break;
                case 2:
                    printf("Nuevo proveedor:  \n");  // BUSCADOR DE PROVEEDOR. SI NO EXISTE DECIRLO. ELEGIR QUE MODIFICAR.
                    nuevoprov();
                    break;
                case 3:
                    printf("Que proveedor desea eliminar? \n");
                    borrarprov();
                    break;
                case 4:
                    printf("Que proveedor desea modificar? \n"),
                    modificarprov();
                    break;
                case 5:
                    printf("Indique el parametro de busqueda \n");
                    //buscarprov();
                    break;
            }
}

void prod_admin(){
    printf("Lista de Productos: \n");
            printf("1.  Ver lista de productos \n");
            printf("2.  Nuevo producto \n");
            printf("3.  Eliminar producto \n");
            printf("4.  Modificar producto \n");
            printf("5.  Buscar producto \n");
            printf("0.  Volver atras \n");
            int opc;
            scanf("%i",&opc);
            while(opc<0 || opc>5){
                printf("Introduzca un numero valido \n");
                scanf("%i",&opc);
            }
            system("cls");
            switch(opc){
                case 0:
                    return menu_Admin();
                    break;
                case 1:
                    printf("Lista de productos:  \n");  // CARGAR EL FICHERO DE PRODUCTOS
                    impprod();
                    break;
                case 2:
                    printf("Nuevo producto:  \n");  // BUSCADOR DE PRODUCTO. SI NO EXISTE DECIRLO. ELEGIR QUE MODIFICAR.
                    nuevoprod();
                    break;
                case 3:
                    printf("Que producto desea eliminar? \n");
                    borrarprod();
                    break;
                case 4:
                    printf("Que producto desea modificar? \n"),
                    modificarprod();
                    break;
                case 5:
                    printf("Indique el parametro de busqueda \n");
                    //buscarprod();
                    break;
            }
}

void cat_admin(){
    printf("Lista de Categorias: \n");
            printf("1.  Ver lista de categorias \n");
            printf("2.  Nueva categoria \n");
            printf("3.  Eliminar categoria \n");
            printf("4.  Modificar categoria \n");
            printf("5.  Buscar categoria \n");
            printf("0.  Volver atras \n");
            int opc;
            scanf("%i",&opc);
            while(opc<0 || opc>5){
                printf("Introduzca un numero valido \n");
                scanf("%i",&opc);
            }
            system("cls");
            switch(opc){
                case 0:
                    return menu_Admin();
                    break;
                case 1:
                    printf("Lista de categorias:  \n");  // CARGAR EL FICHERO DE CATEGORIAS
                    impcat();
                    break;
                case 2:
                    printf("Nueva categoria:  \n");  // BUSCADOR DE CATEGORIA. SI NO EXISTE DECIRLO. ELEGIR QUE MODIFICAR.
                    nuevacat();
                    break;
                case 3:
                    printf("Que categoria desea eliminar? \n");
                    borrarcat();
                    break;
                case 4:
                    printf("Que categoria desea modificar? \n"),
                    modificarcat();
                    break;
                case 5:
                    printf("Indique el parametro de busqueda \n");
                    //buscarcliente();
                    break;
            }
}

void ped_admin(){
    printf("Lista de Pedidos: \n");
            printf("1.  Ver lista de pedidos \n");
            printf("2.  Modificar pedido \n");
            printf("3.  Asignar transportista \n");
            printf("0.  Volver atras \n");
            int opc;
            scanf("%i",&opc);
            while(opc<0 || opc>3){
                printf("Introduzca un numero valido \n");
                scanf("%i",&opc);
            }
            system("cls");
            switch(opc){
                case 0:
                    return menu_Admin();
                    break;
                case 1:
                    printf("Lista de clientes:  \n");  // CARGAR EL FICHERO DE PEDIDOS
                    break;
                case 2:
                    printf("Modificar cliente:  \n");  // BUSCADOR DE PEDDIDO. SI NO EXISTE DECIRLO. ELEGIR QUE MODIFICAR.
                    break;
                case 3:
                    printf("Indicar producto y transportista \n");  // en funcion de la direccion del cliente y ciudad de reparto
                    char transp[20]; char prod[20];
                    printf("Pedido: \n");
                    scanf("%s",&prod);  // MIRAR SI EXISTE EL PEDIDO
                    printf("Transportista: \n");
                    scanf("%s",&transp);
                    break;


            }
}

void trans_admin(){
    printf("Lista de Transportistas: \n");
            printf("1.  Ver lista de transportistas \n");
            printf("2.  Nuevo transportista \n");
            printf("3.  Eliminar transportista \n");
            printf("4.  Modificar transportista \n");
            printf("5.  Buscar transportista \n");
            printf("0.  Volver atras \n");
            int opc;
            scanf("%i",&opc);
            while(opc<0 || opc>5){
                printf("Introduzca un numero valido \n");
                scanf("%i",&opc);
            }
            system("cls");
            switch(opc){
                case 0:
                    return menu_Admin();
                    break;
                case 1:
                    printf("Lista de transportistas:  \n");  // CARGAR EL FICHERO DE TRANSPORTISTAS
                    imptrans();
                    break;
                case 2:
                    printf("Nuevo Transportista: \n");
                    nuevotrans();
                    break;
                case 3:
                    printf("Que transportista desea eliminar? \n");
                    borrartrans();
                    break;
                case 4:
                    printf("Que transportista desea modificar? \n"),
                    modificartrans();
                    break;
                case 5:
                    printf("Indique el parametro de busqueda \n");
                    //buscartrans();
                    break;

            }
}

void des_admin(){
    printf("Descuentos Activos: \n");
            printf("1.  Ver lista de decuentos \n");
            printf("2.  Nuevo descuento \n");
            printf("3.  Clientes con decuentos \n");   // MOSTRAR LOS CLIENTES QUE TIENEN DETERMINADOS DESCUENTOS
            printf("4.  Asignar descuento a cliente \n");
            printf("5.  Crear nuevo codigo promocional \n");  // ASIGNAR A TODOS LOS CLIENTES
            printf("0.  Volver atras \n");
            int opc;
            scanf("%i",&opc);
            while(opc<0 || opc>5){
                printf("Introduzca un numero valido \n");
                scanf("%i",&opc);
            }
            system("cls");
            switch(opc){
                case 0:
                    return menu_Admin();
                    break;
                case 1:
                    printf("Lista de descuentos:  \n");  // CARGAR EL FICHERO DE DESCUENTOS
                    break;
                case 2:
                    printf("Modificar descuento:  \n");  // BUSCADOR DE DESCUENTO. SI NO EXISTE DECIRLO. ELEGIR QUE MODIFICAR.
                    break;
                case 3:
                    printf("Lista de clientes: \n");   //fichero
                    break;
                case 4:
                    printf("Indique cliente y descuento");
                    char cli[20]; char des[20];
                    printf("Cliente: \n");  // mirar si existe
                    scanf("%s",&cli);
                    printf("Descuento: \n");
                    scanf("%s",&des);
                    break;
                case 5:
                    printf("Indique el nombre del nuevo codigo: ");
                    char cod[20];
                    int desc;
                    scanf("%s",&cod);
                    printf("Indique la cantidad del descuento: ");
                    scanf("%i",des);
                    //ASIGNAR ESE CODIGO A TODOS LOS CLIENTES
                    break;
            }
}

void dev_admin(){
    printf("Devoluciones en curso: \n");
            printf("1.  Ver lista de devoluciones \n");
            printf("2.  Modificar devoluciones \n");
            printf("3.  Devoluciones pendientes \n");
            printf("0.  Volver atras \n");
            int opc;
            // cuarta opcion que sea marcar una devolucion como recibida
            scanf("%i",&opc);
            while(opc<0 || opc>3){
                printf("Introduzca un numero valido \n");
                scanf("%i",&opc);
            }
            system("cls");
            switch(opc){
                case 0:
                    return menu_Admin();
                    break;
                case 1:
                    printf("Lista de devoluciones:  \n");  // CARGAR EL FICHERO DE DEVOLUCIONES
                    break;
                case 2:
                    printf("Modificar devoluciones:  \n");  // BUSCADOR DE DEVOLUCION. SI NO EXISTE DECIRLO. ELEGIR QUE MODIFICAR.
                    break;
                case 3:
                    printf("Deovluciones pendientes:  \n ");  // CARCGAR FICHEROS CON ESTADO PENDIENTE. ACEPTARLA Y PONERLE FECHA
                    break;
            }
}

void menu_Admin(){
    printf("Indique que desea consultar \n");
    printf("1.  Perfil \n");
    printf("2.  Clientes \n");
    printf("3.  Proveedores \n");
    printf("4.  Productos \n");
    printf("5.  Categorias \n");
    printf("6.  Pedidos \n");
    printf("7.  Transportistas \n");
    printf("8.  Descuentos \n");
    printf("9.  Devoluciones \n");
    printf("0.  Salir del sistema \n");

    int opc;
    scanf("%i",&opc);
    while(opc<0 || opc>9){
        printf("Introduzca un numero valido \n");
        scanf("%i",&opc);
    } fflush(stdin);
    system("cls");
    switch (opc){
        case 0:
            return main();
            break;
        case 1:
            perfil_admin();
            break;

        case 2:
            clientes_admin();
            break;

        case 3:
            prov_admin();
            break;

        case 4:
            prod_admin();
            break;

        case 5:
            cat_admin();
            break;

        case 6:
            ped_admin();
            break;

        case 7:
            trans_admin();
            break;

        case 8:
            des_admin();
            break;

        case 9:
            dev_admin();
            break;

    }

    // HABRIA QUE PONER LA OPCION DE PODER IR PARA ATRAS EN CUALQUIERA DE LOS PASOS.

    }





void impclientes(){

    FILE * fichero;

    char linea[100];
    cliente *reg=NULL;
    int i=0;
    int j;
    char *token;

    if((fichero=fopen("Clientes.txt","r"))== NULL)
        printf("El fichero no existe");
    else{
        while (fgets(linea,100,fichero)){
            //if para comprobaar que hay memoria
            reg=(cliente*)realloc(reg,(i+1)*sizeof(cliente));

            token=strtok(linea,"-");
            while (token != NULL) {
                printf("%s\n", token); // Imprimir token
                token = strtok(NULL, "-"); // Obtener el siguiente token
            }

            i++;}
            fclose(fichero);
            }
            printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return clientes_admin();
            }
}

void nuevocliente(){
    FILE * fichero;

    char linea[100];
    cliente *reg=NULL;
    int i=0;
    int j;
    char token[51];

    if((fichero=fopen("Clientes.txt","a"))== NULL)
        printf("El fichero no existe");
    else{

            reg=(cliente*)realloc(reg,(i+1)*sizeof(cliente));

            printf("Introduzca el identificador (8 digitos) \n");
            scanf("%i",&j);
            fprintf(fichero, "%i-",j);
            fflush(stdin);

            printf("Introduzca el nombre  \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca la direccion \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca la poblacion \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca la provincia \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el email \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca la contrasena \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el saldo de la cartera \n");
            scanf("%i",&j);
            fprintf(fichero, "%i\n",j);
            fflush(stdin);

            fclose(fichero);
            printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return clientes_admin();
            }
            }
}

void borrarcliente(){
    #include <stdio.h>

    FILE *ficheroEntrada, *ficheroSalida;
    char linea[100]; // Tamaño máximo de la línea
    int i=0,j; // i es el contador

    // Abre el archivo de entrada en modo lectura
    ficheroEntrada = fopen("Clientes.txt", "r");

    // Verifica si el archivo de entrada se abrió correctamente
    if (ficheroEntrada == NULL) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre un archivo de salida en modo escritura
    ficheroSalida = fopen("temp.txt", "w");

    // Verifica si el archivo de salida se abrió correctamente
    if (ficheroSalida == NULL) {
        printf("Error al abrir el archivo de salida");
        return 1;
    }


    scanf("%i",&j);
    // Lee línea por línea del archivo de entrada
    while (fgets(linea, sizeof(linea), ficheroEntrada)) {
        i++;
        // Si no es la  línea, la escribe en el archivo de salida
        if (i != j) {
            fputs(linea, ficheroSalida);
        }
    }

    // Cierra los archivos
    fclose(ficheroEntrada);
    fclose(ficheroSalida);

    // Borra el archivo original
    remove("Clientes.txt");

    // Renombra el archivo de salida para que tenga el mismo nombre que el archivo original
    rename("temp.txt", "Clientes.txt");

    printf("El cliente ha sido eliminado correctamente.\n");

    printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return clientes_admin();
            }
}

void modificarcliente(){

    FILE *ficheroEntrada, *ficheroSalida;
    char linea[100]; // Tamaño máximo de la línea
    int i = 0, j;
    scanf("%i",&j);
    // Abre el archivo de entrada en modo lectura
    ficheroEntrada = fopen("Clientes.txt", "r");

    // Verifica si el archivo de entrada se abrió correctamente
    if (ficheroEntrada == NULL) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre un archivo de salida en modo escritura
    ficheroSalida = fopen("temp.txt", "w");

    // Verifica si el archivo de salida se abrió correctamente
    if (ficheroSalida == NULL) {
        printf("Error al abrir el archivo de salida");
        return 1;
    }

    // Lee línea por línea del archivo de entrada
    while (fgets(linea, sizeof(linea), ficheroEntrada)) {
        i++;
        // Si es la tercera línea, la modificamos



        if (i == j) {
           nuevocliente();
        } else {
            // Si no es la tercera línea, la escribimos tal cual en el archivo de salida
            fputs(linea, ficheroSalida);
        }

    }

    // Cierra los archivos
    fclose(ficheroEntrada);
    fclose(ficheroSalida);

    // Borra el archivo original
    remove("Clientes.txt");

    // Renombra el archivo de salida para que tenga el mismo nombre que el archivo original
    rename("temp.txt", "Clientes.txt");

    printf("El cliente ha sido modificado correctamente.\n");

    printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return clientes_admin();
            }
}

void buscarcliente(){
    int i;
    printf("Indique el parametro a buscar \n");
    printf("1.  Identificador \n");
    printf("2.  Nombre \n");
    printf("3.  Direccion \n");
    printf("4.  Poblacion \n");
    printf("5.  Provincia \n");
    printf("6.  Email \n");
    scanf("%i",&i);
    while(i<1 || i>6){
        printf("Introduzca un numero valido \n");
        scanf("%i",&i);
    }

    switch(i){
        case 1:
           // void idcliente();
            break;
        case 2:
            nomcliente();
            break;
        case 3:
           // void dircliente();
            break;
        case 4:
           // void pobcliente();
            break;
        case 5:
           // void provcliente();
            break;
        case 6:
          //  void emcliente();
            break;
    }
}





void nomcliente(){
    FILE * fichero;
    char nombre[21];
    printf("Introduce el nombre a buscar \n");
    scanf("%s",&nombre);
    char linea[200];
    int i=0;
    cliente *vcliente=NULL;
    char *token;
    fichero=fopen("Clientes.txt","r");
    if (fichero!=NULL){
        while (fgets(linea,200,fichero)){
                printf("hola");

                token=strtok(linea,"-");
                strcpy(vcliente[i].id_cliente,token);

                token=strtok(NULL,"-");
                strcpy(vcliente[i].nomb_cliente,token);

                token=strtok(NULL,"-");
                strcpy(vcliente[i].dir_cliente,token);

                token=strtok(NULL,"-");
                strcpy(vcliente[i].localidad,token);

                token=strtok(NULL,"-");
                strcpy(vcliente[i].provincia,token);

                token=strtok(NULL,"-");
                strcpy(vcliente[i].email,token);

                token=strtok(NULL,"-");
                strcpy(vcliente[i].contrasena,token);

                token=strtok(NULL,"\n");
                vcliente[i].cartera=atoi(token);

                printf("%s", vcliente[i].nomb_cliente);
                printf("%d", i);


                if (strcmp(nombre,vcliente[i].nomb_cliente)==0)
                    printf("%s-%s-%s-%s-%s-%s-%s-%f\n",vcliente[i].id_cliente,vcliente[i].nomb_cliente,vcliente[i].dir_cliente,vcliente[i].localidad,vcliente[i].provincia,vcliente[i].email,vcliente[i].contrasena,vcliente[i].cartera);

                i++;
            }
        fclose(fichero);
}
}







void imptrans(){
    FILE * fichero;

    char linea[100];
    cliente *reg=NULL;
    int i=0;
    int j;
    char *token;

    if((fichero=fopen("transportistas.txt","r"))== NULL)
        printf("El fichero no existe");
    else{
        while (fgets(linea,100,fichero)){
            //if para comprobaar que hay memoria
            reg=(cliente*)realloc(reg,(i+1)*sizeof(cliente));

            token=strtok(linea,"-");
            while (token != NULL) {
                printf("%s\n", token); // Imprimir token
                token = strtok(NULL, "-"); // Obtener el siguiente token
            }
            i++;}
            fclose(fichero);
            }
}

void nuevotrans(){
FILE * fichero;

    char linea[100];
    transportista *reg=NULL;
    int i=0;
    int j;
    char token[25];

    if((fichero=fopen("transportistas.txt","a"))== NULL)
        printf("El fichero no existe");
    else{
            reg=(transportista*)realloc(reg,(i+1)*sizeof(transportista));

            printf("Introduzca el identificador (8 digitos) \n");
            scanf("%i",&j);
            fprintf(fichero, "%i-",j);
            fflush(stdin);

            printf("Introduzca el nombre  \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el email \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el nombre de la empresa \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca la ciudad de reparto \n");
            scanf("%s",&token);
            fprintf(fichero, "%s\n",token);
            fflush(stdin);

            fclose(fichero);
            system("cls");
            return(menu_Admin());
            }
}

void borrartrans(){
    #include <stdio.h>

    FILE *ficheroEntrada, *ficheroSalida;
    char linea[100]; // Tamaño máximo de la línea
    int i=0,j; // i es el contador

    // Abre el archivo de entrada en modo lectura
    ficheroEntrada = fopen("transportistas.txt", "r");

    // Verifica si el archivo de entrada se abrió correctamente
    if (ficheroEntrada == NULL) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre un archivo de salida en modo escritura
    ficheroSalida = fopen("temp.txt", "w");

    // Verifica si el archivo de salida se abrió correctamente
    if (ficheroSalida == NULL) {
        printf("Error al abrir el archivo de salida");
        return 1;
    }


    scanf("%i",&j);
    // Lee línea por línea del archivo de entrada
    while (fgets(linea, sizeof(linea), ficheroEntrada)) {
        i++;
        // Si no es la  línea, la escribe en el archivo de salida
        if (i != j) {
            fputs(linea, ficheroSalida);
        }
    }

    // Cierra los archivos
    fclose(ficheroEntrada);
    fclose(ficheroSalida);

    // Borra el archivo original
    remove("transportistas.txt");

    // Renombra el archivo de salida para que tenga el mismo nombre que el archivo original
    rename("temp.txt", "transportistas.txt");

    printf("El transportista ha sido eliminado correctamente.\n");

    printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return trans_admin();
            }
}

void modificartrans(){

    FILE *ficheroEntrada, *ficheroSalida;
    char linea[100]; // Tamaño máximo de la línea
    int i = 0, j;
    scanf("%i",&j);
    // Abre el archivo de entrada en modo lectura
    ficheroEntrada = fopen("transportistas.txt", "r");

    // Verifica si el archivo de entrada se abrió correctamente
    if (ficheroEntrada == NULL) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre un archivo de salida en modo escritura
    ficheroSalida = fopen("temp.txt", "w");

    // Verifica si el archivo de salida se abrió correctamente
    if (ficheroSalida == NULL) {
        printf("Error al abrir el archivo de salida");
        return 1;
    }

    // Lee línea por línea del archivo de entrada
    while (fgets(linea, sizeof(linea), ficheroEntrada)) {
        i++;
        // Si es la tercera línea, la modificamos



        if (i == j) {
           nuevotrans();
        } else {
            // Si no es la tercera línea, la escribimos tal cual en el archivo de salida
            fputs(linea, ficheroSalida);
        }

    }

    // Cierra los archivos
    fclose(ficheroEntrada);
    fclose(ficheroSalida);

    // Borra el archivo original
    remove("transportistas.txt");

    // Renombra el archivo de salida para que tenga el mismo nombre que el archivo original
    rename("temp.txt", "transportistas.txt");

    printf("El transportista ha sido modificado correctamente.\n");

    printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return trans_admin();
            }
}



void impprov(){
    FILE * fichero;

    char linea[100];
    regadmin *reg=NULL;
    int i=0;
    int j;
    char *token;

    if((fichero=fopen("AdminProv.txt","r"))== NULL)
        printf("El fichero no existe");
    else{
        while (fgets(linea,100,fichero)){
            //if para comprobaar que hay memoria
            reg=(regadmin*)realloc(reg,(i+1)*sizeof(regadmin));

            token=strtok(linea,"-");
            while (token != NULL) {
                printf("%s\n", token); // Imprimir token
                token = strtok(NULL, "-"); // Obtener el siguiente token
            }

            i++;}
            fclose(fichero);
            }
}

void nuevoprov(){
FILE * fichero;

    char linea[100];
    cliente *reg=NULL;
    int i=0;
    int j;
    char token[35];

    if((fichero=fopen("AdminProv.txt","a"))== NULL)
        printf("El fichero no existe");
    else{

            reg=(cliente*)realloc(reg,(i+1)*sizeof(cliente));

            printf("Introduzca el identificador (4 digitos) \n");
            scanf("%s",&j);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el nombre de la empresa \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el email \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca la contraseña \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el perfil del usuario (Admin/Proveedor) \n");
            scanf("%s",&token);
            fprintf(fichero, "%s\n",token);
            fflush(stdin);

            fclose(fichero);
            system("cls");
            return(menu_Admin());
            }

}

void borrarprov(){
    #include <stdio.h>

    FILE *ficheroEntrada, *ficheroSalida;
    char linea[100]; // Tamaño máximo de la línea
    int i=0,j; // i es el contador

    // Abre el archivo de entrada en modo lectura
    ficheroEntrada = fopen("AdminProv.txt", "r");

    // Verifica si el archivo de entrada se abrió correctamente
    if (ficheroEntrada == NULL) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre un archivo de salida en modo escritura
    ficheroSalida = fopen("temp.txt", "w");

    // Verifica si el archivo de salida se abrió correctamente
    if (ficheroSalida == NULL) {
        printf("Error al abrir el archivo de salida");
        return 1;
    }


    scanf("%i",&j);
    // Lee línea por línea del archivo de entrada
    while (fgets(linea, sizeof(linea), ficheroEntrada)) {
        i++;
        // Si no es la  línea, la escribe en el archivo de salida
        if (i != j) {
            fputs(linea, ficheroSalida);
        }
    }

    // Cierra los archivos
    fclose(ficheroEntrada);
    fclose(ficheroSalida);

    // Borra el archivo original
    remove("AdminProv.txt");

    // Renombra el archivo de salida para que tenga el mismo nombre que el archivo original
    rename("temp.txt", "AdminProv.txt");

    printf("El proveedor ha sido eliminado correctamente.\n");

    printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return prov_admin();
            }
}

void modificarprov(){

    FILE *ficheroEntrada, *ficheroSalida;
    char linea[100]; // Tamaño máximo de la línea
    int i = 0, j;
    scanf("%i",&j);
    // Abre el archivo de entrada en modo lectura
    ficheroEntrada = fopen("AdminProv.txt", "r");

    // Verifica si el archivo de entrada se abrió correctamente
    if (ficheroEntrada == NULL) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre un archivo de salida en modo escritura
    ficheroSalida = fopen("temp.txt", "w");

    // Verifica si el archivo de salida se abrió correctamente
    if (ficheroSalida == NULL) {
        printf("Error al abrir el archivo de salida");
        return 1;
    }

    // Lee línea por línea del archivo de entrada
    while (fgets(linea, sizeof(linea), ficheroEntrada)) {
        i++;
        // Si es la tercera línea, la modificamos



        if (i == j) {
           nuevoprov();
        } else {
            // Si no es la tercera línea, la escribimos tal cual en el archivo de salida
            fputs(linea, ficheroSalida);
        }

    }

    // Cierra los archivos
    fclose(ficheroEntrada);
    fclose(ficheroSalida);

    // Borra el archivo original
    remove("AdminProv.txt");

    // Renombra el archivo de salida para que tenga el mismo nombre que el archivo original
    rename("temp.txt", "AdminProv.txt");

    printf("El proveedor ha sido modificado correctamente.\n");

    printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return prov_admin();
            }
}


void impprod(){
    FILE * fichero;

    char linea[100];
    productos *reg=NULL;
    int i=0;
    int j;
    char *token;

    if((fichero=fopen("productos.txt","r"))== NULL)
        printf("El fichero no existe");
    else{
        while (fgets(linea,100,fichero)){
            //if para comprobaar que hay memoria
            reg=(productos*)realloc(reg,(i+1)*sizeof(productos));

            token=strtok(linea,"-");
            while (token != NULL) {
                printf("%s\n", token); // Imprimir token
                token = strtok(NULL, "-"); // Obtener el siguiente token
            }

            i++;}
            fclose(fichero);
            }
}

void nuevoprod(){
FILE * fichero;

    char linea[100];
    productos *reg=NULL;
    int i=0;
    int j;
    char token[55];

    if((fichero=fopen("productos.txt","a"))== NULL)
        printf("El fichero no existe");
    else{

            reg=(productos*)realloc(reg,(i+1)*sizeof(productos));

            printf("Introduzca el identificador (7 digitos) \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el nombre del producto \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca la descripcion del producto \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el identificador de la categoria (4 digitos) \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el identificador del gestor del producto (4 digitos) \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el stock (Disponible/Acabado) \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el compromiso de entrega \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca el importe del producto \n");
            scanf("%i",&j);
            fprintf(fichero, "%i\n",j);
            fflush(stdin);

            fclose(fichero);
            system("cls");
            return(menu_Admin());
            }

}

void borrarprod(){
    #include <stdio.h>

    FILE *ficheroEntrada, *ficheroSalida;
    char linea[100]; // Tamaño máximo de la línea
    int i=0,j; // i es el contador

    // Abre el archivo de entrada en modo lectura
    ficheroEntrada = fopen("productos.txt", "r");

    // Verifica si el archivo de entrada se abrió correctamente
    if (ficheroEntrada == NULL) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre un archivo de salida en modo escritura
    ficheroSalida = fopen("temp.txt", "w");

    // Verifica si el archivo de salida se abrió correctamente
    if (ficheroSalida == NULL) {
        printf("Error al abrir el archivo de salida");
        return 1;
    }


    scanf("%i",&j);
    // Lee línea por línea del archivo de entrada
    while (fgets(linea, sizeof(linea), ficheroEntrada)) {
        i++;
        // Si no es la  línea, la escribe en el archivo de salida
        if (i != j) {
            fputs(linea, ficheroSalida);
        }
    }

    // Cierra los archivos
    fclose(ficheroEntrada);
    fclose(ficheroSalida);

    // Borra el archivo original
    remove("productos.txt");

    // Renombra el archivo de salida para que tenga el mismo nombre que el archivo original
    rename("temp.txt", "productos.txt");

    printf("El producto ha sido eliminado correctamente.\n");

    printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return prod_admin();
            }
}

void modificarprod(){

    FILE *ficheroEntrada, *ficheroSalida;
    char linea[100]; // Tamaño máximo de la línea
    int i = 0, j;
    scanf("%i",&j);
    // Abre el archivo de entrada en modo lectura
    ficheroEntrada = fopen("productos.txt", "r");

    // Verifica si el archivo de entrada se abrió correctamente
    if (ficheroEntrada == NULL) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre un archivo de salida en modo escritura
    ficheroSalida = fopen("temp.txt", "w");

    // Verifica si el archivo de salida se abrió correctamente
    if (ficheroSalida == NULL) {
        printf("Error al abrir el archivo de salida");
        return 1;
    }

    // Lee línea por línea del archivo de entrada
    while (fgets(linea, sizeof(linea), ficheroEntrada)) {
        i++;
        // Si es la tercera línea, la modificamos



        if (i == j) {
           nuevoprod();
        } else {
            // Si no es la tercera línea, la escribimos tal cual en el archivo de salida
            fputs(linea, ficheroSalida);
        }

    }

    // Cierra los archivos
    fclose(ficheroEntrada);
    fclose(ficheroSalida);

    // Borra el archivo original
    remove("productos.txt");

    // Renombra el archivo de salida para que tenga el mismo nombre que el archivo original
    rename("temp.txt", "productos.txt");

    printf("El producto ha sido modificado correctamente.\n");

    printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return clientes_admin();
            }
}



void impcat(){
FILE * fichero;

    char linea[100];
    categ *reg=NULL;
    int i=0;
    int j;
    char *token;

    if((fichero=fopen("categorias.txt","r"))== NULL)
        printf("El fichero no existe");
    else{
        while (fgets(linea,100,fichero)){
            //if para comprobaar que hay memoria
            reg=(categ*)realloc(reg,(i+1)*sizeof(categ));

            token=strtok(linea,"-");
            while (token != NULL) {
                printf("%s\n", token); // Imprimir token
                token = strtok(NULL, "-"); // Obtener el siguiente token
            }
            i++;}
            fclose(fichero);
            }
}

void nuevacat(){
    FILE * fichero;

    char linea[100];
    categ *reg=NULL;
    int i=0;
    int j;
    char token[55];

    if((fichero=fopen("categorias.txt","a"))== NULL)
        printf("El fichero no existe");
    else{

            reg=(categ*)realloc(reg,(i+1)*sizeof(categ));

            printf("Introduzca el identificador (4 digitos) \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            printf("Introduzca la descripcion \n");
            scanf("%s",&token);
            fprintf(fichero, "%s-",token);
            fflush(stdin);

            fclose(fichero);
            system("cls");
            return(menu_Admin());
            }
}

void borrarcat(){
    #include <stdio.h>

    FILE *ficheroEntrada, *ficheroSalida;
    char linea[100]; // Tamaño máximo de la línea
    int i=0,j; // i es el contador

    // Abre el archivo de entrada en modo lectura
    ficheroEntrada = fopen("categorias.txt", "r");

    // Verifica si el archivo de entrada se abrió correctamente
    if (ficheroEntrada == NULL) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre un archivo de salida en modo escritura
    ficheroSalida = fopen("temp.txt", "w");

    // Verifica si el archivo de salida se abrió correctamente
    if (ficheroSalida == NULL) {
        printf("Error al abrir el archivo de salida");
        return 1;
    }


    scanf("%i",&j);
    // Lee línea por línea del archivo de entrada
    while (fgets(linea, sizeof(linea), ficheroEntrada)) {
        i++;
        // Si no es la  línea, la escribe en el archivo de salida
        if (i != j) {
            fputs(linea, ficheroSalida);
        }
    }

    // Cierra los archivos
    fclose(ficheroEntrada);
    fclose(ficheroSalida);

    // Borra el archivo original
    remove("categorias.txt");

    // Renombra el archivo de salida para que tenga el mismo nombre que el archivo original
    rename("temp.txt", "categorias.txt");

    printf("La categoria ha sido eliminada correctamente.\n");

    printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return cat_admin();
            }
}

void modificarcat(){

    FILE *ficheroEntrada, *ficheroSalida;
    char linea[100]; // Tamaño máximo de la línea
    int i = 0, j;
    scanf("%i",&j);
    // Abre el archivo de entrada en modo lectura
    ficheroEntrada = fopen("categorias.txt", "r");

    // Verifica si el archivo de entrada se abrió correctamente
    if (ficheroEntrada == NULL) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre un archivo de salida en modo escritura
    ficheroSalida = fopen("temp.txt", "w");

    // Verifica si el archivo de salida se abrió correctamente
    if (ficheroSalida == NULL) {
        printf("Error al abrir el archivo de salida");
        return 1;
    }

    // Lee línea por línea del archivo de entrada
    while (fgets(linea, sizeof(linea), ficheroEntrada)) {
        i++;
        // Si es la tercera línea, la modificamos



        if (i == j) {
           nuevacat();
        } else {
            // Si no es la tercera línea, la escribimos tal cual en el archivo de salida
            fputs(linea, ficheroSalida);
        }

    }

    // Cierra los archivos
    fclose(ficheroEntrada);
    fclose(ficheroSalida);

    // Borra el archivo original
    remove("categorias.txt");

    // Renombra el archivo de salida para que tenga el mismo nombre que el archivo original
    rename("temp.txt", "categorias.txt");

    printf("La categoria ha sido modificada correctamente.\n");

    printf("PULSE ENTER \n");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            if (c=='\n'){
            system("cls");
            return cat_admin();
            }
}

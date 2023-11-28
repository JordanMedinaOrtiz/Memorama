void cambiarPosicion(){
    int j = 0, aux=0;
    for (int i=(4*5) - 1; i>0; i--){
        j = rand() % (i + 1);
        aux = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = aux;
        aux = color[i];
        color[i] = color[j];
        color[j] = aux;
    }
}

void obtenerValores(){
    for(int i=0; i<10; i++){
        for(int j=0; j<2; j++){
            numeros[i * 2 + j] = (i + 1) * 10;
            color[i * 2 + j] = j;
        }
    }
    cambiarPosicion();
}

void finJuego1(int puntos){
	ocultarCursor();
	system("CLS");
	system("COLOR 30");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	cuadro(47, 1, 72, 3, 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),48);
	centrarTexto("T H E  M E M O R A M A", 2);
	gotoxy(51, 10);
	printf("PUNTOS TOTALES: %d", puntos);
		
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	cuadro(52, 16, 68, 18, 3);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),48);
	centrarTexto("VOLVER A JUGAR",17);
	centrarTexto("VOLVER AL MENU",20);
	centrarTexto("    SALIR     ",23);
	
	while(opc != 3){
		gotoxy(51,17);
		menu1(51,17,1,3);
		cargando1();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				unJugador1();
				getch();
				break;
			case OPC2:
				menuInicial();
				getch();
				break;
			case OPC3:
				exit(0);
		}
	}
	getch();
}

void finJuego2(int puntos){
	ocultarCursor();
	system("CLS");
	system("COLOR F0");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	cuadro(47, 1, 72, 3, 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	centrarTexto("T H E  M E M O R A M A", 2);
	gotoxy(51, 10);
	printf("PUNTOS TOTALES: %d", puntos);
		
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	cuadro(52, 16, 68, 18, 3);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	centrarTexto("VOLVER A JUGAR",17);
	centrarTexto("VOLVER AL MENU",20);
	centrarTexto("    SALIR     ",23);
	
	while(opc != 3){
		gotoxy(51,17);
		menu2(51,17,1,3);
		cargando2();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				unJugador2();
				getch();
				break;
			case OPC2:
				menuDia();
				getch();
				break;
			case OPC3:
				exit(0);
		}
	}
	getch();
}

void finJuego3(int puntos){
	ocultarCursor();
	system("CLS");
	system("COLOR 00");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cuadro(47, 1, 72, 3, 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	centrarTexto("T H E  M E M O R A M A", 2);
	gotoxy(51, 10);
	printf("PUNTOS TOTALES: %d", puntos);
		
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cuadro(52, 16, 68, 18, 3);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	centrarTexto("VOLVER A JUGAR",17);
	centrarTexto("VOLVER AL MENU",20);
	centrarTexto("    SALIR     ",23);
	
	while(opc != 3){
		gotoxy(51,17);
		menu3(51,17,1,3);
		cargando3();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				unJugador3();
				getch();
				break;
			case OPC2:
				menuNoche();
				getch();
				break;
			case OPC3:
				exit(0);
		}
	}
	getch();
}

void juego1(){
	int seleccion1 = 0, seleccion2 = 0, fila1 = 0, columna1 = 0, fila2 = 0, columna2 = 0;
	int puntos = 0, vidas = 3, aux = 0;
	
	do{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
		gotoxy(60,18);
		printf("%c", 177);
		gotoxy(61,18);
		printf("%c", 177);
		gotoxy(62,18);
		printf("%c", 177);
		gotoxy(63,18);
		printf("%c", 177);
		gotoxy(73,18);
		printf("%c", 177);
		gotoxy(74,18);
		printf("%c", 177);
		gotoxy(75,18);
		printf("%c", 177);
		gotoxy(60,19);
		printf("%c", 177);
		gotoxy(61,19);
		printf("%c", 177);
		gotoxy(62,19);
		printf("%c", 177);
		gotoxy(73,19);
		printf("%c", 177);
		gotoxy(74,19);
		printf("%c", 177);
		gotoxy(75,19);
		printf("%c", 177);
		
		fila1 = 0;
		columna1 = 0;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
		gotoxy(44,18);
		printf("CARTA 1:  ");
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
			gotoxy(60,18);
			printf("%c", 177);
			gotoxy(61,18);
			printf("%c", 177);
			gotoxy(62,18);
			printf("%c", 177);
			gotoxy(63,18);
			printf("%c", 177);
			gotoxy(54,18);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
			printf("Fila: ");
			mostrarCursor();
			aux = scanf("%d", &fila1);
			fflush(stdin);
		}while(fila1 < 1 || fila1 > 4 || aux !=1 );
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
			gotoxy(73,18);
			printf("%c", 177);
			gotoxy(74,18);
			printf("%c", 177);
			gotoxy(75,18);
			printf("%c", 177);
			gotoxy(76,18);
			printf("%c", 177);
			gotoxy(77,18);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
			gotoxy(64,18);
			printf("Columna: ");
			aux = scanf("%d", &columna1);
			fflush(stdin);
		}while(columna1 < 1 || columna1 > 5 || aux !=1);
		
	    seleccion1 = (fila1-1) * 5 + (columna1-1);
	    
	    for(int i = fila1; i == fila1; i++){
	    	if(columna1 == 1) x = 46;
	    	if(columna1 == 2) x = 52;
	    	if(columna1 == 3) x = 58;
	    	if(columna1 == 4) x = 64;
	    	if(columna1 == 5) x = 70;
	    	if(fila1 == 1) y = 7;
	       	if(fila1 == 2) y = 9;
	   	   	if(fila1 == 3) y = 11;
	    	if(fila1 == 4) y = 13;
	        for(int j = columna1; j == columna1; j++){
	        	int aux = 0;
	           	aux = i*5+j;
	           	gotoxy(x,y); 
	            if(color[aux] == 0){ 
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),58);
	                printf("%d", numeros[seleccion1]);
	            }else{
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),52);
	                printf("%d", numeros[seleccion1]);
	            }
	        }
	    }
	    
	    fila2 = 0;
	    columna2 = 0;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
		gotoxy(44,19);
		printf("CARTA 2:  ");
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
			gotoxy(60,19);
			printf("%c", 177);
			gotoxy(61,19);
			printf("%c", 177);
			gotoxy(62,19);
			printf("%c", 177);
			gotoxy(63,19);
			printf("%c", 177);
			gotoxy(54,19);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
			printf("Fila: ");
			mostrarCursor();
			aux = scanf("%d", &fila2);
			fflush(stdin);
		}while(fila2 < 1 || fila2 > 4 || aux !=1 );
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
			gotoxy(73,19);
			printf("%c", 177);
			gotoxy(74,19);
			printf("%c", 177);
			gotoxy(75,19);
			printf("%c", 177);
			gotoxy(76,19);
			printf("%c", 177);
			gotoxy(77,19);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
			gotoxy(64,19);
			printf("Columna: ");
			aux = scanf("%d", &columna2);
			fflush(stdin);
		}while(columna2 < 1 || columna2 > 5 || aux !=1);
	    seleccion2 = (fila2-1) * 5 + (columna2-1);
	    
	    for(int i = fila2; i == fila2; i++){
	    	if(columna2 == 1) x = 46;
	    	if(columna2 == 2) x = 52;
	    	if(columna2 == 3) x = 58;
	    	if(columna2 == 4) x = 64;
	    	if(columna2 == 5) x = 70;
	    	if(fila2 == 1) y = 7;
	       	if(fila2 == 2) y = 9;
	   	   	if(fila2 == 3) y = 11;
	    	if(fila2 == 4) y = 13;
	        for(int j = columna2; j == columna2; j++){
	        	int aux = 0;
	           	aux = i*5+j;
	           	gotoxy(x,y);
	            if (color[aux] == 0) {
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),58);
	                printf("%d", numeros[seleccion2]);
	            }else{
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),52);
	                printf("%d", numeros[seleccion2]);
	            }
	        }
	    }
	    
	    if(numeros[seleccion1] == numeros[seleccion2]){
	    	puntos += 10;
	    	gotoxy(17, 9);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),58); 
			printf("%d", puntos);
		}else{
			Sleep(1000);
			for(int i = fila1; i == fila1; i++){
	    	if(columna1 == 1) x = 46;
	    	if(columna1 == 2) x = 52;
	    	if(columna1 == 3) x = 58;
	    	if(columna1 == 4) x = 64;
	    	if(columna1 == 5) x = 70;
	    	if(fila1 == 1) y = 7;
	       	if(fila1 == 2) y = 9;
	   	   	if(fila1 == 3) y = 11;
	    	if(fila1 == 4) y = 13;
	        	for(int j = columna1; j == columna1; j++){
	        		int aux = 0;
	           		aux = i*5+j;
		           	gotoxy(x,y);
		           	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
		            if (color[aux] == 0) {
		                printf("%d", numeros[seleccion1]);
		            }else{
		                printf("%d", numeros[seleccion1]);
		            }
	        	}
	    	}
	    	
	    	for(int i = fila2; i == fila2; i++){
	    	if(columna2 == 1) x = 46;
	    	if(columna2 == 2) x = 52;
	    	if(columna2 == 3) x = 58;
	    	if(columna2 == 4) x = 64;
	    	if(columna2 == 5) x = 70;
	    	if(fila2 == 1) y = 7;
	       	if(fila2 == 2) y = 9;
	   	   	if(fila2 == 3) y = 11;
	    	if(fila2 == 4) y = 13;
	        	for(int j = columna2; j == columna2; j++){
	        		int aux = 0;
	           		aux = i*5+j;
		           	gotoxy(x,y);
		           	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
		            if (color[aux] == 0) {
		                printf("%d", numeros[seleccion2]);
		            }else{
		                printf("%d", numeros[seleccion2]);
		            }
	        	}
	    	}
	    	vidas -= 1;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),52);
			gotoxy(17, 13);
			printf("%d", vidas);
		}
	}while(!(puntos == 100 || vidas == 0));
	
	finJuego1(puntos);
}

void juego2(){
	int seleccion1 = 0, seleccion2 = 0, fila1 = 0, columna1 = 0, fila2 = 0, columna2 = 0;
	int puntos = 0, vidas = 3, aux = 0;
	
	do{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
		gotoxy(60,18);
		printf("%c", 177);
		gotoxy(61,18);
		printf("%c", 177);
		gotoxy(62,18);
		printf("%c", 177);
		gotoxy(73,18);
		printf("%c", 177);
		gotoxy(74,18);
		printf("%c", 177);
		gotoxy(75,18);
		printf("%c", 177);
		gotoxy(60,19);
		printf("%c", 177);
		gotoxy(61,19);
		printf("%c", 177);
		gotoxy(62,19);
		printf("%c", 177);
		gotoxy(73,19);
		printf("%c", 177);
		gotoxy(74,19);
		printf("%c", 177);
		gotoxy(75,19);
		printf("%c", 177);
		
		fila1 = 0;
		columna1 = 0;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
		gotoxy(44,18);
		printf("CARTA 1:  ");
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
			gotoxy(60,18);
			printf("%c", 177);
			gotoxy(61,18);
			printf("%c", 177);
			gotoxy(62,18);
			printf("%c", 177);
			gotoxy(63,18);
			printf("%c", 177);
			gotoxy(54,18);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
			printf("Fila: ");
			mostrarCursor();
			aux = scanf("%d", &fila1);
			fflush(stdin);
		}while(fila1 < 1 || fila1 > 4 || aux !=1 );
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
			gotoxy(73,18);
			printf("%c", 177);
			gotoxy(74,18);
			printf("%c", 177);
			gotoxy(75,18);
			printf("%c", 177);
			gotoxy(76,18);
			printf("%c", 177);
			gotoxy(77,18);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
			gotoxy(64,18);
			printf("Columna: ");
			aux = scanf("%d", &columna1);
			fflush(stdin);
		}while(columna1 < 1 || columna1 > 5 || aux !=1);
	    seleccion1 = (fila1-1) * 5 + (columna1-1);
	    
	    for(int i = fila1; i == fila1; i++) {
	    	if(columna1 == 1) x = 46;
	    	if(columna1 == 2) x = 52;
	    	if(columna1 == 3) x = 58;
	    	if(columna1 == 4) x = 64;
	    	if(columna1 == 5) x = 70;
	    	if(fila1 == 1) y = 7;
	       	if(fila1 == 2) y = 9;
	   	   	if(fila1 == 3) y = 11;
	    	if(fila1 == 4) y = 13;
	        for(int j = columna1; j == columna1; j++) {
	        	int aux = 0;
	           	aux = i*5+j;
	           	gotoxy(x,y);
	            if (color[aux] == 0) {
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
	                printf("%d", numeros[seleccion1]);
	            }else{
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	                printf("%d", numeros[seleccion1]);
	            }
	        }
	    }
	    
	    fila2 = 0;
	    columna2 = 0;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
		gotoxy(44,19);
		printf("CARTA 2:  ");
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
			gotoxy(60,19);
			printf("%c", 177);
			gotoxy(61,19);
			printf("%c", 177);
			gotoxy(62,19);
			printf("%c", 177);
			gotoxy(63,19);
			printf("%c", 177);
			gotoxy(54,19);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
			printf("Fila: ");
			mostrarCursor();
			aux = scanf("%d", &fila2);
			fflush(stdin);
		}while(fila2 < 1 || fila2 > 4 || aux !=1 );
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
			gotoxy(73,19);
			printf("%c", 177);
			gotoxy(74,19);
			printf("%c", 177);
			gotoxy(75,19);
			printf("%c", 177);
			gotoxy(76,19);
			printf("%c", 177);
			gotoxy(77,19);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
			gotoxy(64,19);
			printf("Columna: ");
			aux = scanf("%d", &columna2);
			fflush(stdin);
		}while(columna2 < 1 || columna2 > 5 || aux !=1);
	    seleccion2 = (fila2-1) * 5 + (columna2-1);
	    
	    for(int i = fila2; i == fila2; i++) {
	    	if(columna2 == 1) x = 46;
	    	if(columna2 == 2) x = 52;
	    	if(columna2 == 3) x = 58;
	    	if(columna2 == 4) x = 64;
	    	if(columna2 == 5) x = 70;
	    	if(fila2 == 1) y = 7;
	       	if(fila2 == 2) y = 9;
	   	   	if(fila2 == 3) y = 11;
	    	if(fila2 == 4) y = 13;
	        for(int j = columna2; j == columna2; j++) {
	        	int aux = 0;
	           	aux = i*5+j;
	           	gotoxy(x,y);
	            if (color[aux] == 0) {
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
	                printf("%d", numeros[seleccion2]);
	            }else{
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	                printf("%d", numeros[seleccion2]);
	            }
	        }
	    }
	    if(numeros[seleccion1] == numeros[seleccion2]){
	    	puntos += 10;
	    	gotoxy(17, 9);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242); 
			printf("%d", puntos);
		}else{
			Sleep(1000);
			for(int i = fila1; i == fila1; i++){
	    	if(columna1 == 1) x = 46;
	    	if(columna1 == 2) x = 52;
	    	if(columna1 == 3) x = 58;
	    	if(columna1 == 4) x = 64;
	    	if(columna1 == 5) x = 70;
	    	if(fila1 == 1) y = 7;
	       	if(fila1 == 2) y = 9;
	   	   	if(fila1 == 3) y = 11;
	    	if(fila1 == 4) y = 13;
	        	for(int j = columna1; j == columna1; j++){
	        		int aux = 0;
	           		aux = i*5+j;
		           	gotoxy(x,y);
		           	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
		            if (color[aux] == 0) {
		                printf("%d", numeros[seleccion1]);
		            }else{
		                printf("%d", numeros[seleccion1]);
		            }
	        	}
	    	}
	    	
	    	for(int i = fila2; i == fila2; i++){
	    	if(columna2 == 1) x = 46;
	    	if(columna2 == 2) x = 52;
	    	if(columna2 == 3) x = 58;
	    	if(columna2 == 4) x = 64;
	    	if(columna2 == 5) x = 70;
	    	if(fila2 == 1) y = 7;
	       	if(fila2 == 2) y = 9;
	   	   	if(fila2 == 3) y = 11;
	    	if(fila2 == 4) y = 13;
	        	for(int j = columna2; j == columna2; j++){
	        		int aux = 0;
	           		aux = i*5+j;
		           	gotoxy(x,y);
		           	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
		            if (color[aux] == 0) {
		                printf("%d", numeros[seleccion2]);
		            }else{
		                printf("%d", numeros[seleccion2]);
		            }
	        	}
	    	}
	    	vidas -= 1;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
			gotoxy(17, 13);
			printf("%d", vidas);
		}
	}while(!(puntos == 100 || vidas == 0));
	
	finJuego2(puntos);
}

void juego3(){
	int seleccion1 = 0, seleccion2 = 0, fila1 = 0, columna1 = 0, fila2 = 0, columna2 = 0;
	int puntos = 0, vidas = 3, aux = 0;
	
	do{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
		gotoxy(60,18);
		printf("%c", 177);
		gotoxy(61,18);
		printf("%c", 177);
		gotoxy(62,18);
		printf("%c", 177);
		gotoxy(73,18);
		printf("%c", 177);
		gotoxy(74,18);
		printf("%c", 177);
		gotoxy(75,18);
		printf("%c", 177);
		gotoxy(60,19);
		printf("%c", 177);
		gotoxy(61,19);
		printf("%c", 177);
		gotoxy(62,19);
		printf("%c", 177);
		gotoxy(73,19);
		printf("%c", 177);
		gotoxy(74,19);
		printf("%c", 177);
		gotoxy(75,19);
		printf("%c", 177);	
		
		fila1 = 0;
		columna1 = 0;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		gotoxy(44,18);
		printf("CARTA 1:  ");
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			gotoxy(60,18);
			printf("%c", 177);
			gotoxy(61,18);
			printf("%c", 177);
			gotoxy(62,18);
			printf("%c", 177);
			gotoxy(63,18);
			printf("%c", 177);
			gotoxy(54,18);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
			printf("Fila: ");
			mostrarCursor();
			aux = scanf("%d", &fila1);
			fflush(stdin);
		}while(fila1 < 1 || fila1 > 4 || aux !=1 );
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			gotoxy(73,18);
			printf("%c", 177);
			gotoxy(74,18);
			printf("%c", 177);
			gotoxy(75,18);
			printf("%c", 177);
			gotoxy(76,18);
			printf("%c", 177);
			gotoxy(77,18);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
			gotoxy(64,18);
			printf("Columna: ");
			aux = scanf("%d", &columna1);
			fflush(stdin);
		}while(columna1 < 1 || columna1 > 5 || aux !=1);
	    seleccion1 = (fila1-1) * 5 + (columna1-1);
	    
	    for(int i = fila1; i == fila1; i++) {
	    	if(columna1 == 1) x = 46;
	    	if(columna1 == 2) x = 52;
	    	if(columna1 == 3) x = 58;
	    	if(columna1 == 4) x = 64;
	    	if(columna1 == 5) x = 70;
	    	if(fila1 == 1) y = 7;
	       	if(fila1 == 2) y = 9;
	   	   	if(fila1 == 3) y = 11;
	    	if(fila1 == 4) y = 13;
	        for(int j = columna1; j == columna1; j++){
	        	int aux = 0;
	           	aux = i*5+j;
	           	gotoxy(x,y);
	            if (color[aux] == 0) {
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	                printf("%d", numeros[seleccion1]);
	            }else{
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	                printf("%d", numeros[seleccion1]);
	            }
	        }
	    }
	    
	    fila2 = 0;
	    columna2 = 0;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		gotoxy(44,19);
		printf("CARTA 2:  ");
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			gotoxy(60,19);
			printf("%c", 177);
			gotoxy(61,19);
			printf("%c", 177);
			gotoxy(62,19);
			printf("%c", 177);
			gotoxy(63,19);
			printf("%c", 177);
			gotoxy(54,19);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
			printf("Fila: ");
			mostrarCursor();
			aux = scanf("%d", &fila2);
			fflush(stdin);
		}while(fila2 < 1 || fila2 > 4 || aux !=1 );
		do{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			gotoxy(73,19);
			printf("%c", 177);
			gotoxy(74,19);
			printf("%c", 177);
			gotoxy(75,19);
			printf("%c", 177);
			gotoxy(76,19);
			printf("%c", 177);
			gotoxy(77,19);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
			gotoxy(64,19);
			printf("Columna: ");
			aux = scanf("%d", &columna2);
			fflush(stdin);
		}while(columna2 < 1 || columna2 > 5 || aux !=1);
	    seleccion2 = (fila2-1) * 5 + (columna2-1);
	    
	    for(int i = fila2; i == fila2; i++){
	    	if(columna2 == 1) x = 46;
	    	if(columna2 == 2) x = 52;
	    	if(columna2 == 3) x = 58;
	    	if(columna2 == 4) x = 64;
	    	if(columna2 == 5) x = 70;
	    	if(fila2 == 1) y = 7;
	       	if(fila2 == 2) y = 9;
	   	   	if(fila2 == 3) y = 11;
	    	if(fila2 == 4) y = 13;
	        for(int j = columna2; j == columna2; j++){
	        	int aux = 0;
	           	aux = i*5+j;
	           	gotoxy(x,y);
	            if (color[aux] == 0) {
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	                printf("%d", numeros[seleccion2]);
	            }else{
	            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	                printf("%d", numeros[seleccion2]);
	            }
	        }
	    }
	    
	    if(numeros[seleccion1] == numeros[seleccion2]){
	    	puntos += 10;
			gotoxy(17, 9);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2); 
			printf("%d", puntos);
		}else{
			Sleep(1000);
			for(int i = fila1; i == fila1; i++){
	    	if(columna1 == 1) x = 46;
	    	if(columna1 == 2) x = 52;
	    	if(columna1 == 3) x = 58;
	    	if(columna1 == 4) x = 64;
	    	if(columna1 == 5) x = 70;
	    	if(fila1 == 1) y = 7;
	       	if(fila1 == 2) y = 9;
	   	   	if(fila1 == 3) y = 11;
	    	if(fila1 == 4) y = 13;
	        	for(int j = columna1; j == columna1; j++){
	        		int aux = 0;
	           		aux = i*5+j;
		           	gotoxy(x,y);
		           	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
		            if(color[aux] == 0){
		                printf("%d", numeros[seleccion1]);
		            }else{
		                printf("%d", numeros[seleccion1]);
		            }
	        	}
	    	}
	    	
	    	for(int i = fila2; i == fila2; i++){
	    	if(columna2 == 1) x = 46;
	    	if(columna2 == 2) x = 52;
	    	if(columna2 == 3) x = 58;
	    	if(columna2 == 4) x = 64;
	    	if(columna2 == 5) x = 70;
	    	if(fila2 == 1) y = 7;
	       	if(fila2 == 2) y = 9;
	   	   	if(fila2 == 3) y = 11;
	    	if(fila2 == 4) y = 13;
	        	for(int j = columna2; j == columna2; j++){
	        		int aux = 0;
	           		aux = i*5+j;
		           	gotoxy(x,y);
		           	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
		            if (color[aux] == 0) {
		                printf("%d", numeros[seleccion2]);
		            }else{
		                printf("%d", numeros[seleccion2]);
		            }
	        	}
	    	}
	    	vidas -= 1;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
			gotoxy(17, 13);
			printf("%d", vidas);
		}
	}while(!(puntos == 100 || vidas == 0));
	
	finJuego3(puntos);
}

void ocultarValores1(){
	int aux, x = 47, y = 7;
    for(int i = 0; i < 4; i++) {
    	x = 40;
        for(int j = 0; j < 5; j++) {
        	x = x + 6;
        	aux = 0;
           	aux = i*5+j;
           	gotoxy(x,y);
           	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
            if (color[aux] == 0) {
                printf("%d", numeros[aux]);
            }else{
                printf("%d", numeros[aux]);
            }
        }
        y = y + 2;
    }
    
    gotoxy(50,18);
	juego1();
}

void ocultarValores2(){
	int aux, x = 47, y = 7;
    for(int i = 0; i < 4; i++) {
    	x = 40;
        for(int j = 0; j < 5; j++) {
        	x = x + 6;
        	aux = 0;
           	aux = i*5+j;
           	gotoxy(x,y);
           	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
            if (color[aux] == 0) {
                printf("%d", numeros[aux]);
            }else{
                printf("%d", numeros[aux]);
            }
        }
        y = y + 2;
    }
    
    gotoxy(50,18);
	juego2();
}

void ocultarValores3(){
	int aux, x = 47, y = 7;
    for(int i = 0; i < 4; i++) {
    	x = 40;
        for(int j = 0; j < 5; j++) {
        	x = x + 6;
        	aux = 0;
           	aux = i*5+j;
           	gotoxy(x,y);
           	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
            if (color[aux] == 0) {
                printf("%d", numeros[aux]);
            }else{
                printf("%d", numeros[aux]);
            }
        }
        y = y + 2;
    }
    
    gotoxy(50,18);
	juego3();
}

void imprimirNumeros1() {
    int aux, x = 47, y = 7;
    obtenerValores();
    for(int i = 0; i < 4; i++) {
    	x = 40;
        for(int j = 0; j < 5; j++) {
        	x = x + 6;
        	aux = 0;
           	aux = i*5+j;
           	gotoxy(x,y);
            if (color[aux] == 0) { 
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),58);
                printf("%d", numeros[aux]);
            }else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),52);
                printf("%d", numeros[aux]);
            }
        }
        y = y + 2;
    }
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	gotoxy(87,8);
	printf("Tiempo:");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),58);
	gotoxy(90,9);
	printf("5");
	Sleep(1000);
	gotoxy(90,9);
	printf("4");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),54);
	gotoxy(90,9);
	printf("3");
	Sleep(1000);
	gotoxy(90,9);
	printf("2");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),52);
	gotoxy(90,9);
	printf("1");
	Sleep(1000);
	gotoxy(90,9);
	printf("0");
	Sleep(1000);
	for(int i=86; i<120; i++){
		for(int j=8; j<10; j++){
			gotoxy(i,j);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
			printf("%c",220);
		}
	}
    ocultarValores1();
}

void imprimirNumeros2() {
    int aux, x = 47, y = 7;
    obtenerValores();
    for(int i = 0; i < 4; i++) {
    	x = 40;
        for(int j = 0; j < 5; j++) {
        	x = x + 6;
        	aux = 0;
           	aux = i*5+j;
           	gotoxy(x,y);
            if (color[aux] == 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
                printf("%d", numeros[aux]);
            }else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                printf("%d", numeros[aux]);
            }
        }
        y = y + 2;
    }
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	gotoxy(87,8);
	printf("Tiempo:");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
	gotoxy(90,9);
	printf("5");
	Sleep(1000);
	gotoxy(90,9);
	printf("4");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
	gotoxy(90,9);
	printf("3");
	Sleep(1000);
	gotoxy(90,9);
	printf("2");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	gotoxy(90,9);
	printf("1");
	Sleep(1000);
	gotoxy(90,9);
	printf("0");
	Sleep(1000);
	for(int i=86; i<120; i++){
		for(int j=8; j<10; j++){
			gotoxy(i,j);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
			printf("%c",220);
		}
	}
    ocultarValores2();
}

void imprimirNumeros3() {
    int aux, x = 47, y = 7;
    obtenerValores();
    for(int i = 0; i < 4; i++) {
    	x = 40;
        for(int j = 0; j < 5; j++) {
        	x = x + 6;
        	aux = 0;
           	aux = i*5+j;
           	gotoxy(x,y);
            if (color[aux] == 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
                printf("%d", numeros[aux]);
            }else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
                printf("%d", numeros[aux]);
            }
        }
        y = y + 2;
    }
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy(87,8);
	printf("Tiempo:");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	gotoxy(90,9);
	printf("5");
	Sleep(1000);
	gotoxy(90,9);
	printf("4");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	gotoxy(90,9);
	printf("3");
	Sleep(1000);
	gotoxy(90,9);
	printf("2");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	gotoxy(90,9);
	printf("1");
	Sleep(1000);
	gotoxy(90,9);
	printf("0");
	Sleep(1000);
	for(int i=86; i<120; i++){
		for(int j=8; j<10; j++){
			gotoxy(i,j);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			printf("%c",220);
		}
	}
    ocultarValores3();
}

void jugarJugador1(char gametag[]){
	system("COLOR 30");
	diseno1();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),54);
	gotoxy(15, 6); 
	printf("%s", gametag);
	imprimirNumeros1();
}

void jugarJugador2(char gametag[]){
	system("COLOR F0");
	diseno2();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
	gotoxy(15, 6); 
	printf("%s", gametag);
	imprimirNumeros2();
}

void jugarJugador3(char gametag[]){
	system("COLOR 00");
	for(int i=0; i<120; i++){
		for(int j=0; j<30; j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			printf("%c",220);
		}
	}
	diseno3();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	gotoxy(15, 6); 
	printf("%s", gametag);
	imprimirNumeros3();
}

char jugador1(char const *mensaje, char gametag[]){
	mostrarCursor();
	bool bandera = true;

	while(bandera){
		gotoxy(52,22);
		printf("%s",mensaje);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),54);
		gets(gametag);
		fflush(stdin);
		if(strlen(gametag)>12){
			system("cls");
			diseno1();
			centrarTexto("Maximo de 12 caracteres",23);
			continue;
		}else{
			for(int i=0; i<strlen(gametag); i++){
				if(isalpha(gametag[i])){
					if(i == strlen(gametag)-1){
						bandera = false;
					}
				}else{
					system("cls");
					diseno1();
					centrarTexto("No se aceptan espacios ni caracteres especiales",23);
					break;
				}
			}
		}
	}
	
	for(int i=0; i<120; i++){
		for(int j=23; j<24; j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
			printf("%c",220);
		}
	}
	ocultarCursor();
}

char jugador2(char const *mensaje, char gametag[]){
	mostrarCursor();
	bool bandera = true;
	
	while(bandera){
		gotoxy(52,22);
		printf("%s",mensaje);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
		gets(gametag);
		fflush(stdin);
		if(strlen(gametag)>12){
			system("cls");
			diseno2();
			centrarTexto("Maximo de 12 caracteres",23);
			continue;
		}else{
			for(int i=0; i<strlen(gametag); i++){
				if(isalpha(gametag[i])){
					if(i == strlen(gametag)-1){
						bandera = false;
					}
				}else{
					system("cls");
					diseno2();
					centrarTexto("No se aceptan espacios ni caracteres especiales",23);
					break;
				}
			}
		}
	}
	
	for(int i=0; i<120; i++){
		for(int j=23; j<24; j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
			printf("%c",220);
		}
	}
	ocultarCursor();
}

char jugador3(char const *mensaje, char gametag[]){
	mostrarCursor();
	bool bandera = true;
	
	while(bandera){
		gotoxy(52,22);
		printf("%s",mensaje);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
		gets(gametag);
		fflush(stdin);
		if(strlen(gametag)>12){
			system("cls");
			diseno3();
			centrarTexto("Maximo de 12 caracteres",23);
			continue;
		}else{
			for(int i=0; i<strlen(gametag); i++){
				if(isalpha(gametag[i])){
					if(i == strlen(gametag)-1){
						bandera = false;
					}
				}else{
					system("cls");
					diseno3();
					centrarTexto("No se aceptan espacios ni caracteres especiales",23);
					break;
				}
			}
		}
	}
	
	for(int i=0; i<120; i++){
		for(int j=23; j<24; j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			printf("%c",220);
		}
	}
	ocultarCursor();
}

void unJugador1(){
	char gametag[12];
	system("COLOR 30");
	opc=0;
	
	diseno1();
	jugador1("GameTag: ",gametag);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),48);
	centrarTexto("JUGAR", 24);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	cuadro(51, 23, 68, 25, 1);
	
	while(opc != 1){
		gotoxy(50,24);
		menu1(50,24,1,1);
		cargando1();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				jugarJugador1(gametag);
				getch();
				break;
		}
	}
	getch();
}

void unJugador2(){
	char gametag[12];
	system("COLOR F0");
	opc=0;
	
	diseno2();
	jugador2("GameTag: ",gametag);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	centrarTexto("JUGAR", 24);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	cuadro(51, 23, 68, 25, 1);
	
	while(opc != 1){
		gotoxy(50,24);
		menu2(50,24,1,1);
		cargando2();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				jugarJugador2(gametag);
				getch();
				break;
		}
	}
	getch();
}

void unJugador3(){
	char gametag[12];
	for(int i=0; i<120; i++){
		for(int j=0; j<30; j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			printf("%c",220);
		}
	}
	opc=0;
	
	diseno3();
	jugador3("GameTag: ",gametag);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	centrarTexto("JUGAR", 24);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cuadro(51, 23, 68, 25, 1);
	
	while(opc != 1){
		gotoxy(50,24);
		menu3(50,24,1,1);
		cargando3();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				jugarJugador3(gametag);
				getch();
				break;
		}
	}
	getch();
}

void menu1(int x, int y, int inicio, int fin){
	char tecla = '\0';
	opc = 1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	gotoxy(x,y);
	printf("%c",16);
	do{
		if(kbhit()){
			tecla =  getch();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
			gotoxy(x,y);
			printf("%c",16);
			if(opc > inicio && tecla == 72){
				y -= 3;
				opc--;
			}
			if(opc < fin && tecla == 80){
				y += 3;
				opc++;
			}	
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
			gotoxy(x,y);
			printf("%c", 16);
		}
	}while(tecla != 13);
}

void menu2(int x, int y, int inicio, int fin){
	char tecla = '\0';
	opc = 1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	gotoxy(x,y);
	printf("%c",16);
	do{
		if(kbhit()){
			tecla =  getch();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
			gotoxy(x,y);
			printf("%c",16);
			if(opc > inicio && tecla == 72){
				y -= 3;
				opc--;
			}
			if(opc < fin && tecla == 80){
				y += 3;
				opc++;
			}	
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
			gotoxy(x,y);
			printf("%c", 16);
		}
	}while(tecla != 13);
}

void menu3(int x, int y, int inicio, int fin){
	char tecla = '\0';
	opc = 1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	gotoxy(x,y);
	printf("%c",16);
	do{
		if(kbhit()){
			tecla =  getch();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			gotoxy(x,y);
			printf("%c",16);
			if(opc > inicio && tecla == 72){
				y -= 3;
				opc--;
			}
			if(opc < fin && tecla == 80){
				y += 3;
				opc++;
			}	
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
			gotoxy(x,y);
			printf("%c", 16);
		}
	}while(tecla != 13);
}

void diseno1(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	cuadro(47, 1, 72, 3, 1);
	int xs=0, ys=0, xi=0, yi=0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),48);
	centrarTexto("T H E  M E M O R A M A", 2);
	
	gotoxy(15, 7); 
	printf("Puntos");
	gotoxy(17, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),58); 
	printf("0");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),48); 
	gotoxy(15, 11);
	printf("Vidas");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),52);
	gotoxy(17, 13);
	printf("3");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),48);
	gotoxy(47,5);
	printf("1");
	gotoxy(53,5);
	printf("2");
	gotoxy(59,5);
	printf("3");
	gotoxy(65,5);
	printf("4");
	gotoxy(71,5);
	printf("5");
	gotoxy(41,7);
	printf("1");
	gotoxy(41,9);
	printf("2");
	gotoxy(41,11);
	printf("3");
	gotoxy(41,13);
	printf("4");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	cuadro(44, 6, 50, 8, 3);
	xs=44, ys=6, xi=50, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",218);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=6, xi=56, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=6, xi=62, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=6, xi=68, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=6, xi=74, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",191);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=44, ys=8, xi=50, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",195);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=8, xi=56, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=8, xi=62, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=8, xi=68, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=8, xi=74, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",180);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=44, ys=10, xi=50, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",195);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=10, xi=56, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=10, xi=62, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=10, xi=68, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=10, xi=74, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",180);
	gotoxy(xs,yi);
	printf("%c",193);
	
	
	xs=44, ys=12, xi=50, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",195);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=12, xi=56, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=12, xi=62, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=12, xi=68, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=12, xi=74, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",180);
	gotoxy(xs,yi);
	printf("%c",193);
}

void diseno2(){
	system("COLOR F0");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	cuadro(47, 1, 72, 3, 1);
	int xs=0, ys=0, xi=0, yi=0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	centrarTexto("T H E  M E M O R A M A", 2);
	
	gotoxy(15, 7); 
	printf("Puntos");
	gotoxy(17, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242); 
	printf("0");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240); 
	gotoxy(15, 11);
	printf("Vidas");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	gotoxy(17, 13);
	printf("3");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	gotoxy(47,5);
	printf("1");
	gotoxy(53,5);
	printf("2");
	gotoxy(59,5);
	printf("3");
	gotoxy(65,5);
	printf("4");
	gotoxy(71,5);
	printf("5");
	gotoxy(41,7);
	printf("1");
	gotoxy(41,9);
	printf("2");
	gotoxy(41,11);
	printf("3");
	gotoxy(41,13);
	printf("4");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	xs=44, ys=6, xi=50, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",218);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=6, xi=56, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=6, xi=62, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=6, xi=68, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=6, xi=74, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",191);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=44, ys=8, xi=50, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",195);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=8, xi=56, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=8, xi=62, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=8, xi=68, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=8, xi=74, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",180);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=44, ys=10, xi=50, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",195);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=10, xi=56, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=10, xi=62, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=10, xi=68, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=10, xi=74, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",180);
	gotoxy(xs,yi);
	printf("%c",193);
	
	
	xs=44, ys=12, xi=50, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",195);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=12, xi=56, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=12, xi=62, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=12, xi=68, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=12, xi=74, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",180);
	gotoxy(xs,yi);
	printf("%c",193);
}

void diseno3(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cuadro(47, 1, 72, 3, 1);
	int xs=0, ys=0, xi=0, yi=0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	centrarTexto("T H E  M E M O R A M A", 2);
	
	gotoxy(15, 7); 
	printf("Puntos");
	gotoxy(17, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2); 
	printf("0");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15); 
	gotoxy(15, 11);
	printf("Vidas");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	gotoxy(17, 13);
	printf("3");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy(47,5);
	printf("1");
	gotoxy(53,5);
	printf("2");
	gotoxy(59,5);
	printf("3");
	gotoxy(65,5);
	printf("4");
	gotoxy(71,5);
	printf("5");
	gotoxy(41,7);
	printf("1");
	gotoxy(41,9);
	printf("2");
	gotoxy(41,11);
	printf("3");
	gotoxy(41,13);
	printf("4");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	xs=44, ys=6, xi=50, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",218);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=6, xi=56, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=6, xi=62, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=6, xi=68, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=6, xi=74, yi=8;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",194);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",191);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=44, ys=8, xi=50, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",195);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=8, xi=56, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=8, xi=62, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=8, xi=68, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=8, xi=74, yi=10;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",180);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=44, ys=10, xi=50, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",195);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=10, xi=56, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=10, xi=62, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=10, xi=68, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=10, xi=74, yi=12;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",180);
	gotoxy(xs,yi);
	printf("%c",193);
	
	
	xs=44, ys=12, xi=50, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
				
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",195);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",192);	
	
	xs=50, ys=12, xi=56, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=56, ys=12, xi=62, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=62, ys=12, xi=68, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",193);
	gotoxy(xi,ys);
	printf("%c",194);
	gotoxy(xs,yi);
	printf("%c",193);
	
	xs=68, ys=12, xi=74, yi=14;
	for(int i=xs; i <= xi; i++){
		gotoxy(i,ys);
		printf("%c",196);
		gotoxy(i,yi);
		printf("%c",196);
	}
	
	for(int i=ys; i <= yi; i++){
		gotoxy(xs,i);
		printf("%c",179);
		gotoxy(xi,i);
		printf("%c",179);
	}
	gotoxy(xs,ys);
	printf("%c",197);
	gotoxy(xi,yi);
	printf("%c",217);
	gotoxy(xi,ys);
	printf("%c",180);
	gotoxy(xs,yi);
	printf("%c",193);
}

void menuJugar1(){
	system("COLOR 30");
	opc=0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	cuadro(47, 1, 72, 3, 1);
	cuadro(51, 10, 68, 12, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),48);
	centrarTexto("T H E  M E M O R A M A", 2);
	centrarTexto(" Un Jugador ", 11);
	centrarTexto("   Regresar  ",14);
	
	while(opc != 2){
		gotoxy(50,11);
		menu1(50,11,1,2);
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
		}
	}
	getch();
}

void menuJugar2(){
	system("COLOR F0");
	opc=0;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	cuadro(47, 1, 72, 3, 1);
	cuadro(51, 10, 68, 12, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	centrarTexto("T H E  M E M O R A M A", 2);
	centrarTexto(" Un Jugador ", 11);
	centrarTexto("  Rregresar  ",14);
	
	while(opc != 2){
		gotoxy(50,11);
		menu2(50,11,1,2);
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
		}
	}
	getch();
}

void menuJugar3(){
	for(int i=0; i<120; i++){
		for(int j=0; j<30; j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			printf("%c",220);
		}
	}
	opc=0;
		
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cuadro(47, 1, 72, 3, 1);
	cuadro(51, 10, 68, 12, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	centrarTexto("T H E  M E M O R A M A", 2);
	centrarTexto(" Un Jugador ", 11);
	centrarTexto("  Rregresar  ",14);
	
	while(opc != 2){
		gotoxy(50,11);
		menu3(50,11,1,2);
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
		}
	}
	getch();
}

void menuConfiguracion1(){
	system("COLOR 30");
	opc=0;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),48);
	centrarTexto("C O N F I G U R A C I O N",2);
	centrarTexto("Modo Dia",11);
	centrarTexto("Modo Noche",14);
	centrarTexto("Regresar",17);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	cuadro(46, 1, 74, 3, 1);
	cuadro(51, 10, 68, 12, 3);
	
	while(opc != 3){
		gotoxy(50,11);
		menu1(50,11,1,3);
		cargando1();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				menuDia();
				getch();
				break;
			case OPC2:
				menuNoche();
				getch();
				break;
			case OPC3:
				menuInicial();
				getch();
				break;
		}
	}
	getch();
}

void menuConfiguracion2(){
	system("COLOR F0");
	opc=0;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	centrarTexto("C O N F I G U R A C I O N",2);
	centrarTexto("Modo Color",11);
	centrarTexto("Modo Noche",14);
	centrarTexto("Regresar",17);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	cuadro(46, 1, 74, 3, 1);
	cuadro(51, 10, 68, 12, 3);
	
	while(opc != 3){
		gotoxy(50,11);
		menu2(50,11,1,3);
		cargando2();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				menuInicial();
				getch();
				break;
			case OPC2:
				menuNoche();
				getch();
				break;
			case OPC3:
				menuDia();
				getch();
				break;
		}
	}
	getch();
}

void menuConfiguracion3(){
	for(int i=0; i<120; i++){
		for(int j=0; j<30; j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			printf("%c",220);
		}
	}	opc=0;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	centrarTexto("C O N F I G U R A C I O N",2);
	centrarTexto("Modo Dia",11);
	centrarTexto("Modo Color",14);
	centrarTexto("Regresar",17);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cuadro(46, 1, 74, 3, 1);
	cuadro(51, 10, 68, 12, 3);
	
	while(opc != 3){
		gotoxy(50,11);
		menu3(50,11,1,3);
		cargando3();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				menuDia();
				getch();
				break;
			case OPC2:
				menuInicial();
				getch();
				break;
			case OPC3:
				menuNoche();
				getch();
				break;
		}
	}
	getch();
}

void menuInicial(){
	ocultarCursor();
	system("COLOR 30");
	opc=0;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	cuadro(47, 1, 72, 3, 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),48);
	centrarTexto("T H E  M E M O R A M A", 2);
	centrarTexto("REGLAS:",5);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	gotoxy(6, 6);
	printf("1. Se mostrara por 5 segundos el tablero.");
	gotoxy(6, 7);
	printf("\t    El jugador debera memorizarlo en esos segundos.");
	gotoxy(6, 8);
	printf("\t    El jugador comenzara teniendo 3 vidas.");
	gotoxy(6, 9);
	printf("2. Posteriormente el jugador debera introducir el numero de la fila y columna de dos cartas que desea voltear.");
	gotoxy(6, 10);
	printf("3. Si los numeros son diferentes se restara una vida y se voltearan nuevamente las cartas.");
	gotoxy(6, 11);
	printf("\t    Si las cartas son iguales las cartas se quedaran volteadas y se le sumaran 10 puntos");
	gotoxy(6, 12);
	printf("4. El juego termina si descubren todos los pares o si se terminan las 3 vidas");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),63);
	cuadro(52, 16, 68, 18, 3);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),48);
	centrarTexto("VAMOS A JUGAR",17);
	centrarTexto("CONFIGURACION",20);
	centrarTexto("    SALIR    ",23);
	
	while(opc != 3){
		gotoxy(51,17);
		menu1(51,17,1,3);
		cargando1();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				menuJugar1();
				getch();
				break;
			case OPC2:
				menuConfiguracion1();
				getch();
				break;
			case OPC3:
				exit(0);
		}
	}
	getch();
}

void menuDia(){
	system("COLOR F0");
	opc=0;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	cuadro(47, 1, 72, 3, 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	centrarTexto("T H E  M E M O R A M A", 2);
	centrarTexto("REGLAS:",5);
	gotoxy(6, 6);
	printf("1. Se mostrara por 5 segundos el tablero.");
	gotoxy(6, 7);
	printf("\t    El jugador debera memorizarlo en esos segundos.");
	gotoxy(6, 8);
	printf("\t    El jugador comenzara teniendo 3 vidas.");
	gotoxy(6, 9);
	printf("2. Posteriormente el jugador debera introducir el numero de la fila y columna de dos cartas que desea voltear.");
	gotoxy(6, 10);
	printf("3. Si los numeros son diferentes se restara una vida y se voltearan nuevamente las cartas.");
	gotoxy(6, 11);
	printf("\t    Si las cartas son iguales las cartas se quedaran volteadas y se le sumaran 10 puntos");
	gotoxy(6, 12);
	printf("4. El juego termina si descubren todos los pares o si se terminan las 3 vidas");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
	cuadro(52, 16, 68, 18, 3);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	centrarTexto("VAMOS A JUGAR",17);
	centrarTexto("CONFIGURACION",20);
	centrarTexto("    SALIR    ",23);
	
	while(opc != 3){
		gotoxy(51,17);
		menu2(51,17,1,3);
		cargando2();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				menuJugar2();
				getch();
				break;
			case OPC2:
				menuConfiguracion2();
				getch();
				break;
			case OPC3:
				exit(0);
		}
	}
	getch();
}

void menuNoche(){
	for(int i=0; i<120; i++){
		for(int j=0; j<30; j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			printf("%c",220);
		}
	}
	opc=0;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cuadro(47, 1, 72, 3, 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	centrarTexto("T H E  M E M O R A M A", 2);
	centrarTexto("REGLAS:",5);
	gotoxy(6, 6);
	printf("1. Se mostrara por 5 segundos el tablero.");
	gotoxy(6, 7);
	printf("\t    El jugador debera memorizarlo en esos segundos.");
	gotoxy(6, 8);
	printf("\t    El jugador comenzara teniendo 3 vidas.");
	gotoxy(6, 9);
	printf("2. Posteriormente el jugador debera introducir el numero de la fila y columna de dos cartas que desea voltear.");
	gotoxy(6, 10);
	printf("3. Si los numeros son diferentes se restara una vida y se voltearan nuevamente las cartas.");
	gotoxy(6, 11);
	printf("\t    Si las cartas son iguales las cartas se quedaran volteadas y se le sumaran 10 puntos");
	gotoxy(6, 12);
	printf("4. El juego termina si descubren todos los pares o si se terminan las 3 vidas");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cuadro(52, 16, 68, 18, 3);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	centrarTexto("VAMOS A JUGAR",17);
	centrarTexto("CONFIGURACION",20);
	centrarTexto("    SALIR    ",23);
	
	while(opc != 3){
		gotoxy(51,17);
		menu3(51,17,1,3);
		cargando3();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				menuJugar3();
				getch();
				break;
			case OPC2:
				menuConfiguracion3();
				getch();
				break;
			case OPC3:
				exit(0);
		}
	}
	getch();
}

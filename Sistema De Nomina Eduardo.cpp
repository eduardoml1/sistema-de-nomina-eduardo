#include<stdio.h>
#include<stdlib.h>
int main(){
	
		int x=0;
	do
	{
	        printf("Eduardo Miguel Lozano Grupo: ISC03AA\n");
	        printf(" \nHola Bienvenido en un momento llenaras un formulario \n\n");
	        printf("1.NombreEmpleado\n");
	        printf("2.TurnoEmpleado\n");
	        printf("3.SucursalEmpleado\n");
	        printf("4.DepartamentoEmpleado\n");
	        printf("5.PuestoEmpleado\n");
            printf("6.SalarioEmpleado\n");
	        printf("7.DesempeñoEmpleado\n");
	        printf("8.SeguroSocialEmpleado\n");
	        printf("9.AntiguedadEmpleado\n");
	        printf("10.Salir\n");
	        int NombreEmpleado, TurnoEmpleado, SucursalEmpleado, DepartamentoEmpleado, PuestoEmpleado, SalarioEmpleado,DesempenioEmpleado,SeguroSocialEmpleado, AntiguedadEmpleado, Salir;
	        printf("Elija una opcion: ");
	        scanf("%d", &x);
	   switch(x)
	   {
		case 1:
			printf("\nCual es tu nombre de favor :)\n: ");
			scanf("%d", &NombreEmpleado);
			break;
		case 2:
			printf("\n¿Cual es tu turno de trabajo?\n: ");
			scanf("%d", &TurnoEmpleado);
			break;
		case 3:
			printf("\n¿En que sucursal estas?\n: ");
			scanf("%d", &SucursalEmpleado);
			break;
		case 4:
			printf("\n¿Cual es tu departamento de venta?\n: ");
			scanf("%d", &DepartamentoEmpleado);
			break;
		case 5:
			printf("\n¿Que desempeñas en tupuesto laboral?\n: ");
			scanf("%d", &PuestoEmpleado);
			break;
		case 6:
			printf("\n¿Cuanto ganas a la quincena?\n: ");
			scanf("%d", &SalarioEmpleado);
			break;
		case 7:
			printf("\n¿Eres eficiente o no eficiente?\n: ");
			scanf("%d", &DesempenioEmpleado);
			break;
		case 8:
			printf("\n¡Cual es tu numero de Seguridad Social?\n: ");
			scanf("%d", &SeguroSocialEmpleado);
			break;
		case 9:
			printf("\n¿Que tiempo llevas como trabajador?\n: ");
			scanf("%d", &AntiguedadEmpleado);
			break;
		case 10:
			printf("\nHaz ingresado tus datos, espera tendras tu formulario en segundos: ");
			scanf("%d", &Salir);
			break;
			default:
				printf("Opcion incorrecta, pulsa de nuevo\n");
        }
			
	}while(x<=9&&x>0);
	return 0;
}


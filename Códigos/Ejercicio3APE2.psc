Algoritmo Ejercicio3
		Definir codigo, color, talla, estado_tela Como Caracter
		Definir fue_tenido Como Logico
		Definir cant_tenidos, cant_botones, opcion Como Entero
		Definir precio, humedad Como Real
		Definir respuesta_tenido Como Caracter
		
		Escribir "--- Registro Inicial del Jean ---"
		Escribir "Ingrese el código:"
		Leer codigo
		Escribir "Ingrese el color:"
		Leer color
		Escribir "Ingrese la talla:"
		Leer talla
		Escribir "¿Fue teñido? (S/N):"
		Leer respuesta_tenido
		Si respuesta_tenido = "S" O respuesta_tenido = "s" Entonces
			fue_tenido <- Verdadero
		SiNo
			fue_tenido <- Falso
		FinSi
		Escribir "Ingrese la cantidad de teñidos:"
		Leer cant_tenidos
		Escribir "Ingrese el precio:"
		Leer precio
		Escribir "Ingrese la cantidad de botones:"
		Leer cant_botones
		Escribir "Ingrese el porcentaje de humedad (ej. 50):"
		Leer humedad
		Escribir "Ingrese el estado de la tela:"
		Leer estado_tela
		
		Repetir
			Escribir ""
			Escribir "--- Menú de Opciones ---"
			Escribir "1. Mostrar datos del jean"
			Escribir "2. Lavar jean (disminuye teñidos)"
			Escribir "3. Secar jean (disminuye humedad)"
			Escribir "4. Salir"
			Escribir "Seleccione una opción: "
			Leer opcion
			
			Segun opcion Hacer
				1:
					Escribir "--- Información del Jean ---"
					Escribir "Código: ", codigo
					Escribir "Color: ", color
					Escribir "Talla: ", talla
					Si fue_tenido Entonces
						Escribir "Fue teñido: Sí"
					SiNo
						Escribir "Fue teñido: No"
					FinSi
					Escribir "Cantidad de teñidos: ", cant_tenidos
					Escribir "Precio: $", precio
					Escribir "Cantidad de botones: ", cant_botones
					Escribir "Humedad: ", humedad, "%"
					Escribir "Estado de la tela: ", estado_tela
					
				2: 
					Si cant_tenidos > 0 Entonces
						cant_tenidos <- cant_tenidos - 1
						Escribir "--> El jean ha sido lavado. Teñidos restantes: ", cant_tenidos
					SiNo
						Escribir "--> El jean ya no tiene teñidos que puedan disminuir."
					FinSi
					
				3: 
					Si humedad > 0 Entonces
						humedad <- humedad - 15 
						Si humedad < 0 Entonces
							humedad <- 0 
						FinSi
						Escribir "--> El jean ha sido secado. Humedad actual: ", humedad, "%"
					SiNo
						Escribir "--> El jean ya está completamente seco (0% humedad)."
					FinSi
					
				4: 
					Escribir "Saliendo del programa..."
					
				De Otro Modo:
					Escribir "Opción no válida. Intente nuevamente."
			FinSegun
			
		Hasta Que opcion = 4
FinAlgoritmo

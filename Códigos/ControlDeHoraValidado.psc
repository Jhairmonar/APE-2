Algoritmo ControlDeHoraValidado
    Definir h, m, s Como Entero
    Definir resp Como Caracter
    
    Repetir
        Repetir
            Escribir "Ingrese hora (0 - 23):"
            Leer h
            Si h < 0 O h > 23 Entonces
                Escribir "Error: La hora debe estar entre 0 y 23."
            FinSi
        Hasta Que h >= 0 Y h <= 23
        
        Repetir
            Escribir "Ingrese minutos (0 - 59):"
            Leer m
            Si m < 0 O m > 59 Entonces
                Escribir "Error: Los minutos deben estar entre 0 y 59."
            FinSi
        Hasta Que m >= 0 Y m <= 59
        
        Repetir
            Escribir "Ingrese segundos (0 - 59):"
            Leer s
            Si s < 0 O s > 59 Entonces
                Escribir "Error: Los segundos deben estar entre 0 y 59."
            FinSi
        Hasta Que s >= 0 Y s <= 59
        
        Escribir "--------------------------------"
        Escribir "Hora registrada exitosamente: ", h, ":", m, ":", s
        Escribir "--------------------------------"
        
        Escribir "¿Desea cambiar la hora ingresada? (si/no)"
        Leer resp
    Hasta Que resp = "no" O resp = "No"
    
    Escribir "Reloj final configurado a las: ", h, ":", m, ":", s
FinAlgoritmo

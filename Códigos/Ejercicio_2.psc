Algoritmo SistemaBancario
    Definir dni Como Cadena
    Definir saldos Como Real
    Dimension saldos[3]
    Definir opcion, cuenta, destino Como Entero
    Definir monto Como Real
    
    Escribir "Ingrese DNI del cliente:"
    Leer dni
    
    Para i<-1 Hasta 3 Hacer
		saldos[i] <- 0
    FinPara
    
    Repetir
        Escribir "1. Ver cuenta | 2. Enviar | 3. Recibir | 4. Transferir | 5. Salir"
        Leer opcion
        
        Segun opcion Hacer
            1:
                Escribir "Seleccione cuenta (1-3):"
                Leer cuenta
                Escribir "Cuenta: ", cuenta, " Saldo: ", saldos[cuenta-1]
            2:
                Escribir "Monto a enviar:"
                Leer monto
                Si monto <= saldos[cuenta-1] Entonces
                    saldos[cuenta-1] <- saldos[cuenta-1] - monto
                Sino
                    Escribir "Saldo insuficiente"
                FinSi
            4:
                Escribir "Cuenta origen (1-3) y destino (1-3):"
                Leer cuenta, destino
                Escribir "Monto:"
                Leer monto
                Si saldos[cuenta-1] >= monto Entonces
                    saldos[cuenta-1] <- saldos[cuenta-1] - monto
                    saldos[destino-1] <- saldos[destino-1] + monto
                FinSi
        FinSegun
    Hasta Que opcion = 5
FinAlgoritmo

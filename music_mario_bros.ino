#include <pitches.h>
#define NO_SOUND 0

// componentes
int led = 13;
int pizo1 = 8;
int unavez = true;

/* Hoja 1 */
void hoja1(){
    int h1_notas[] = {NOTE_E5,NOTE_E5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_C5,NOTE_E5, NO_SOUND,NOTE_G5, NO_SOUND,NOTE_G4, NO_SOUND,NOTE_C5,NO_SOUND,NO_SOUND,NOTE_G4,NO_SOUND,NOTE_E4,NO_SOUND,NO_SOUND,NOTE_A4,NO_SOUND,NOTE_B4,NO_SOUND,NOTE_AS4,NOTE_A4,NO_SOUND,NOTE_G4,NOTE_E5,NOTE_G5,NOTE_A6,NO_SOUND,NOTE_F5,NOTE_G5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_C5,NOTE_D5,NOTE_B4,NO_SOUND,NOTE_C5,NO_SOUND,NO_SOUND,NOTE_G4,NO_SOUND,NOTE_E4,NO_SOUND,NO_SOUND,NOTE_A4,NO_SOUND,NOTE_B4,NO_SOUND,NOTE_AS4,NOTE_A4,NO_SOUND,NOTE_G4,NOTE_E5,NOTE_G5,NOTE_A6,NO_SOUND,NOTE_F5,NOTE_G5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_C5,NOTE_D5,NOTE_B4,NO_SOUND};
    int h1_tiempos[] = {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,2,2,2,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,2,2,2,4,4,4,4,4,4,4,4,4,4,2};

    int duracion = 0;
    int paso = 600;
    int nota = 0;
    for(int i = 0; i < 70; i++){
        duracion = paso/h1_tiempos[i];
        nota = h1_notas[i];
        tone(pizo1, nota, duracion);
        delay(duracion * 1.2);
        //noTone(pizo1);
        //noTone(pizo2);
    }
}

/* Hoja 2 */
void hoja2(){
    int h2_notas[] = {NO_SOUND,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_GS4,NOTE_A4,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_C5,NOTE_D5,NO_SOUND,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_C6,NO_SOUND,NOTE_C6,NOTE_C6,NO_SOUND,NO_SOUND,NO_SOUND,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_GS4,NOTE_A4,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_C5,NOTE_D5,NO_SOUND,NOTE_E5,NO_SOUND,NO_SOUND,NOTE_D5,NO_SOUND,NOTE_C5,NO_SOUND,NO_SOUND,NO_SOUND};
    int h2_tiempos[] = {2,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,4,4,2,2,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,2,4,4,2,1};

    int duracion = 0;
    int paso = 600;
    int nota = 0;
    for(int i = 0; i < 54; i++){
        duracion = paso/h2_tiempos[i];
        nota = h2_notas[i];
        tone(pizo1, nota, duracion);
        delay(duracion * 1.2);
        //noTone(pizo1);
        //noTone(pizo2);
    }
}

/* Hoja 3 */
void hoja3(){
    int h3_notas[] = {NO_SOUND,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_GS4,NOTE_A4,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_C5,NOTE_D5,NO_SOUND,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_C6,NO_SOUND,NOTE_C6,NOTE_C6,NO_SOUND,NO_SOUND,NO_SOUND,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_GS4,NOTE_A4,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_C5,NOTE_D5,NO_SOUND,NOTE_E5,NO_SOUND,NO_SOUND,NOTE_D5,NO_SOUND,NOTE_C5,NO_SOUND,NO_SOUND,NO_SOUND};
    int h3_tiempos[] = {2,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,4,4,2,2,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,2,4,4,2,1};

    int duracion = 0;
    int paso = 600;
    int nota = 0;
    for(int i = 0; i < 54; i++){
        duracion = paso/h3_tiempos[i];
        nota = h3_notas[i];
        tone(pizo1, nota, duracion);
        delay(duracion * 1.2);
        //noTone(pizo1);
        //noTone(pizo2);
    }
}

/* Hoja 4 */
void hoja4(){
    int h4_notas[] = {NOTE_C5,NOTE_C5,NO_SOUND,NOTE_C5,NO_SOUND,NOTE_C5,NOTE_D5,NO_SOUND,NOTE_E5,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_G4,NO_SOUND,NO_SOUND,NOTE_C5,NOTE_C5,NO_SOUND,NOTE_C5,NO_SOUND,NOTE_C5,NOTE_D5,NOTE_E5,NO_SOUND,NO_SOUND,NOTE_C5,NOTE_C5,NO_SOUND,NOTE_C5,NO_SOUND,NOTE_C5,NOTE_D5,NO_SOUND,NOTE_E5,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_G4,NO_SOUND,NO_SOUND,NOTE_E5,NOTE_E5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_C5,NOTE_E5, NO_SOUND,NOTE_G5, NO_SOUND,NOTE_G4, NO_SOUND};
    int h4_tiempos[] = {4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,4,4};

    int duracion = 0;
    int paso = 600;
    int nota = 0;
    for(int i = 0; i < 52; i++){
        duracion = paso/h4_tiempos[i];
        nota = h4_notas[i];
        tone(pizo1, nota, duracion);
        delay(duracion * 1.2);
        //noTone(pizo1);
        //noTone(pizo2);
    }
}

/* Hoja 5 */
void hoja5(){
    int h5_notas[] = {NOTE_C5,NO_SOUND,NO_SOUND,NOTE_G4,NO_SOUND,NOTE_E4,NO_SOUND,NO_SOUND,NOTE_A4,NO_SOUND,NOTE_B4,NO_SOUND,NOTE_AS4,NOTE_A4,NO_SOUND,NOTE_G4,NOTE_E5,NOTE_G5,NOTE_A6,NO_SOUND,NOTE_F5,NOTE_G5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_C5,NOTE_D5,NOTE_B4,NO_SOUND,NOTE_C5,NO_SOUND,NO_SOUND,NOTE_G4,NO_SOUND,NOTE_E4,NO_SOUND,NO_SOUND,NOTE_A4,NO_SOUND,NOTE_B4,NO_SOUND,NOTE_AS4,NOTE_A4,NO_SOUND,NOTE_G4,NOTE_E5,NOTE_G5,NOTE_A6,NO_SOUND,NOTE_F5,NOTE_G5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_C5,NOTE_D5,NOTE_B4,NO_SOUND};
    int h5_tiempos[] = {4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,2,2,2,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,2,2,2,4,4,4,4,4,4,4,4,4,4,2};

    int duracion = 0;
    int paso = 600;
    int nota = 0;
    for(int i = 0; i < 58; i++){
        duracion = paso/h5_tiempos[i];
        nota = h5_notas[i];
        tone(pizo1, nota, duracion);
        delay(duracion * 1.2);
        //noTone(pizo1);
        //noTone(pizo2);
    }
}

/* Hoja 6 */
void hoja6(){
    int h6_notas[] = {NOTE_E5,NOTE_C5,NO_SOUND,NOTE_G4,NO_SOUND,NOTE_GS4,NO_SOUND,NOTE_A4,NOTE_F5,NO_SOUND,NOTE_F5,NOTE_A4,NO_SOUND,NO_SOUND,NOTE_B4,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_G4,NO_SOUND,NO_SOUND,NOTE_E5,NOTE_C5,NO_SOUND,NOTE_G4,NO_SOUND,NOTE_GS4,NO_SOUND,NOTE_A4,NOTE_F5,NO_SOUND,NOTE_F5,NOTE_A4,NO_SOUND,NO_SOUND,NOTE_B4,NOTE_F5,NO_SOUND,NOTE_F5,NOTE_F5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_E4,NO_SOUND,NOTE_E4,NOTE_C4,NO_SOUND,NO_SOUND};
    int h6_tiempos[] = {4,4,4,4,2,4,4,4,4,4,4,4,4,2,2,2,2,2,2,2,4,4,4,4,4,4,2,4,4,4,4,2,4,4,4,4,4,4,4,4,2,4,4,4,4,2,2,2,4,4,4,4,4,4,2};

    int duracion = 0;
    int paso = 600;
    int nota = 0;
    for(int i = 0; i < 55; i++){
        duracion = paso/h6_tiempos[i];
        nota = h6_notas[i];
        tone(pizo1, nota, duracion);
        delay(duracion * 1.2);
        //noTone(pizo1);
        //noTone(pizo2);
    }
}

/* Hoja 7 */
void hoja7(){
    int h7_notas[] = {NOTE_E5,NOTE_C5,NO_SOUND,NOTE_G4,NO_SOUND,NOTE_GS4,NO_SOUND,NOTE_A4,NOTE_F5,NO_SOUND,NOTE_F5,NOTE_A4,NO_SOUND,NO_SOUND,NOTE_B4,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_G4,NO_SOUND,NO_SOUND,NOTE_E5,NOTE_C5,NO_SOUND,NOTE_G4,NO_SOUND,NOTE_GS4,NO_SOUND,NOTE_A4,NOTE_F5,NO_SOUND,NOTE_F5,NOTE_A4,NO_SOUND,NO_SOUND,NOTE_B4,NOTE_F5,NO_SOUND,NOTE_F5,NOTE_F5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_E4,NO_SOUND,NOTE_E4,NOTE_C4,NO_SOUND,NO_SOUND};
    int h7_tiempos[] = {4,4,4,4,2,4,4,4,4,4,4,4,4,2,2,2,2,2,2,2,4,4,4,4,4,4,2,4,4,4,4,2,4,4,4,4,4,4,4,4,2,4,4,4,4,2,2,2,4,4,4,4,4,4,2};

    int duracion = 0;
    int paso = 600;
    int nota = 0;
    for(int i = 0; i < 55; i++){
        duracion = paso/h7_tiempos[i];
        nota = h7_notas[i];
        tone(pizo1, nota, duracion);
        delay(duracion * 1.2);
        //noTone(pizo1);
        //noTone(pizo2);
    }
}

/* Hoja 8 */
void hoja8(){
    int h8_notas[] = {NOTE_C5,NOTE_C5,NO_SOUND,NOTE_C5,NO_SOUND,NOTE_C5,NOTE_D5,NO_SOUND,NOTE_E5,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_G4,NO_SOUND,NO_SOUND,NOTE_C5,NOTE_C5,NO_SOUND,NOTE_C5,NO_SOUND,NOTE_C5,NOTE_D5,NOTE_E5,NO_SOUND,NO_SOUND,NOTE_C5,NOTE_C5,NO_SOUND,NOTE_C5,NO_SOUND,NOTE_C5,NOTE_D5,NO_SOUND,NOTE_E5,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_G4,NO_SOUND,NO_SOUND,NOTE_E5,NOTE_E5,NO_SOUND,NOTE_E5,NO_SOUND,NOTE_C5,NOTE_E5, NO_SOUND,NOTE_G5, NO_SOUND,NOTE_G4, NO_SOUND};
    int h8_tiempos[] = {4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,4,4};

    int duracion = 0;
    int paso = 600;
    int nota = 0;
    for(int i = 0; i < 52; i++){
        duracion = paso/h8_tiempos[i];
        nota = h8_notas[i];
        tone(pizo1, nota, duracion);
        delay(duracion * 1.2);
        //noTone(pizo1);
        //noTone(pizo2);
    }
}

/* Hoja 9 */
void hoja9(){
    int h9_notas[] = {NOTE_E5,NOTE_C5,NO_SOUND,NOTE_G4,NO_SOUND,NOTE_GS4,NO_SOUND,NOTE_A4,NOTE_F5,NO_SOUND,NOTE_F5,NOTE_A4,NO_SOUND,NO_SOUND,NOTE_B4,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_C5,NO_SOUND,NOTE_A4,NOTE_G4,NO_SOUND,NO_SOUND,NOTE_E5,NOTE_C5,NO_SOUND,NOTE_G4,NO_SOUND,NOTE_GS4,NO_SOUND,NOTE_A4,NOTE_F5,NO_SOUND,NOTE_F5,NOTE_A4,NO_SOUND,NO_SOUND,NOTE_B4,NOTE_F5,NO_SOUND,NOTE_F5,NOTE_F5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_E4,NO_SOUND,NOTE_E4,NOTE_C4,NO_SOUND,NO_SOUND};
    int h9_tiempos[] = {4,4,4,4,2,4,4,4,4,4,4,4,4,2,2,2,2,2,2,2,4,4,4,4,4,4,2,4,4,4,4,2,4,4,4,4,4,4,4,4,2,4,4,4,4,2,2,2,4,4,4,4,4,4,2};

    int duracion = 0;
    int paso = 600;
    int nota = 0;
    for(int i = 0; i < 55; i++){
        duracion = paso/h9_tiempos[i];
        nota = h9_notas[i];
        tone(pizo1, nota, duracion);
        delay(duracion * 1.2);
        //noTone(pizo1);
        //noTone(pizo2);
    }
}

void setup(){
    // Configurar pin
    Serial.begin(9600);
    pinMode(led, OUTPUT);
    pinMode(pizo1, OUTPUT);
    

    
}

void loop(){
    if(unavez == true){
        Serial.println("Inicia programa");

        digitalWrite(led, HIGH);
        hoja1();
        hoja2();
        hoja3();
        hoja4();
        hoja5();
        hoja6();
        hoja7();
        hoja8();
        hoja9();
        digitalWrite(led, LOW);
       
        Serial.println("Finaliza programa.");
        unavez = false;
    }
    else{
        //
    }
    
}
#pragma once

//Word [0]=Startpos X [1]=Startpos Y  [2]=lengh of LED index
//0 Reihe
//Word: "Es"
const uint16_t word_0[] PROGMEM = { 0, 0, 2 };
//Word: "is"
const uint16_t word_1[] PROGMEM = { 3, 0, 2 };
//Word: "fÃ¼nf"
const uint16_t word_3[] PROGMEM = { 6, 0, 4 };

//1 Reihe
//Word: "viertel"
const uint16_t word_5[] PROGMEM = { 3, 1, 7 };

//2 Reihe
//Word: "punkt"
const uint16_t word_2[] PROGMEM = { 0, 2, 5 };
//Word: "zehn"
const uint16_t word_4[] PROGMEM = { 6, 2, 4 };

//3 Reihe
//Word: "zwanzg"
const uint16_t word_7[] PROGMEM = { 0, 3, 6 };
//Word: "vor"
const uint16_t word_8[] PROGMEM = { 7, 3, 3 };

//4 Riehe
//Word: "noch"
const uint16_t word_6[] PROGMEM = { 0, 4, 4 };
//Word: "hoibe"
const uint16_t word_9[] PROGMEM = { 5, 4, 5 };

//5 Reihe
//Word: "Zwoa"
const uint16_t word_11[] PROGMEM = { 0, 5, 4 };
//Word: "Sechse"
const uint16_t word_15[] PROGMEM = { 4, 5, 6 };

//6 Reihe
//Word: "Oans"
const uint16_t word_10[] PROGMEM = {  0, 6, 4 };
//Word: "FÃ¼nfe"
const uint16_t word_14[] PROGMEM = { 4, 6, 5 };

//7 Reihe
//Word: "Zweife"
const uint16_t word_20[] PROGMEM = { 0, 7, 6 };
//Word: "Eife"
const uint16_t word_21[] PROGMEM = { 2, 7, 4 };
//Word: "Drei"
const uint16_t word_12[] PROGMEM = { 6, 7, 4 };

//8 Reihe
//Word: "Simme"
const uint16_t word_16[] PROGMEM = { 0, 8, 5 };
//Word: "Neine"
const uint16_t word_18[] PROGMEM = { 5, 8, 5 };

//9 Reihe
//Word: "Zehne"
const uint16_t word_19[] PROGMEM = { 0, 9, 5 };
//Word: "Achte"
const uint16_t word_17[] PROGMEM = { 5, 9, 5 };

//10 Reihe
//Word: "Viere"
const uint16_t word_13[] PROGMEM = { 0, 10, 5 };

//Word Table: 
const uint16_t* const word_table[] PROGMEM = { word_0, word_1, word_2, word_3, word_4, word_5, word_6, word_7, word_8, word_9, word_10, word_11, word_12, word_13, word_14, word_15, word_16, word_17, word_18, word_19, word_20, word_21};




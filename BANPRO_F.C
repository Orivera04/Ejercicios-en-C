#include <graphics.h>
#include <conio.h>
void main()
{
int Driver = DETECT,Mode;
int Trama = SOLID_FILL;
int Trama2 = HATCH_FILL;
int Trama3 =SLASH_FILL;

/*Parte de Arriba */
int Techo[] = {526,91,478,38,469,39,454,41,435,45,410,49,397,51,385,54,
372,56,357,59,347,61,336,64,328,66,322,67,317,68,310,70,304,71,296,73,
285,76,276,78,263,82,252,85,231,91,210,98,194,103,172,111,153,119,
138,126,121,133,105,141,89,150,75,157,66,162,66,162,67,177,82,167,105,154,130,142,152,131,172,123
,192,115,218,106,253,95,279,88,306,82,329,76,350,72,371,67,389,64,414,60,
434,58,445,56,480,52,515,93};

int Pilar_0[]= {89,175,88,176,92,184,94,193,97,202,98,210,101,209,100,201,
97,193,95,184,93,175,89,175};

int Pilar_1[]={111,163,115,163,114, 167,113,172,113,180,112,188,112,197,
112,206,108,207,109,197,109,188,110,180,111,174,111,169,111,163};

int Pilar_2[]={411,73,413,77,418,86,423,96,428,106,433,116,435,115,431,105,425,94,420,83,416,75,415,75,415,72,411,73};

int Pilar_3[]={462,67,466,68,464,78,461,92,458,104,458,109,453,111,456,94,459,82
,461,73,462,67};

int Pilar_4[]={476,104,479,96,482,89,482,88,486,88,485,92,483,97,481,103
,476,104};

int Techo_Abajo[]= {67,177,82,167,105,154,130,142,152,131,172,123
,192,115,218,106,253,95,279,88,306,82,329,76,350,72,371,67,389,64,414,60,
434,58,445,56,480,52,516,94,475,105,448,77,410,82,353,92,306,102,251,116,175,141,138,158,
113,172,109,188,106,189,67,177};

int roof[]={227,156,227,148,274,133,344,110,344,142,331,146,331,136,319,128,296,134
,274,141,252,148,227,156};

int Ventana[] = {114,171,137,159,134,200,112,206,114,174};
int Ventana1[] = {139,157,168,145,191,136,204,132,204,190,192,187,164,193,
134,200,134,158};
int Ventana2[] = {203,132,203,191,219,195,222,158,228,158,227,148,271,133,
272,110,257,114,230,124,203,132,203,132};

int Ventana3[] = {272,110,309,101,344,94,344,111,299,125,272,133,271,133,272,110};
int Ventana4[] = {309,101,344,94,371,89,411,82,440,78,441,115,410,123
,382,131,344,142,344,110,309,120,309,101};
int Ventana5[]={440,75,459,77,457,110,442,115,440,78};
int Ventana6[] = {461,91,476,105,457,110,461,91};

int Pilar_Izquierdo[] = {640,61,623,66,586,76,544,87,493,102,456,112,428,120,
400,128,364,138,313,152,325,182,382,168,419,159,471,147,532,132,579,120,612,112,640,106};

int Pilar_Izquierdo_Abajo[]= {640,125,631,122,621,123,602,128,577,133,543,141,498,153,482,157,451,163,398,176,338,189
,325,182,382,168,419,159,471,147,532,132,579,120,612,112,640,106,640,125
};


int Pilar_Derecho[] = {4,235,46,226,75,219,119,206,148,198,189,186,215,194,219,216,203,210,181,215,156,222,124,229,96,235,69,241,40,248,21,253,4,238};
int Pilar_Derecho_Abajo[]={219,216,203,210,181,215,156,222,124,229,96,235,69,241,40,248,21,253,
38,257,43,254,53,251,64,248,90,243,120,237,149,231,183,224,206,219,219,216};

int Centro[] = {222,158,269,143,297,134,319,128,331,136,331,146
,312,151,325,182,329,185,329,229,283,236,257,241,234,245,222,247
,214,249,216,215,220,177,222,158};

/* Parte de en medio */
int Pared_Izquierda[]={38,256,34,281,69,275,73,247,38,256};
int Pared_Izquierda1[]={73,247,86,246,82,273,70,275,73,247};
int Ventana_Izquierda[]={82,246,121,237,149,231,183,224,206,219,216,218
,214,249,168,257,127,264,102,269,82,273,82,246};

int Ventana_Derecha[]={327,229,396,218,427,213,477,204,493,201,500,206,
498,153,452,163,406,175,366,184,331,189,327,229};

/* No finalizado aun */
int Emblema[] = {640,408,600,408,583,400,544,399,535,401,525,411,511,410,510,410,506,343,505,315,503,284,502,246,535,242,536,232,500,206,
498,153,543,141,602,128,633,122,647,136,640,314};

int Techo_centro1[]={0,287,42,279,82,273,152,260,242,244,315,231,
396,218,463,206,493,201,536,232,536,242,497,216,422,227,337,240,
277,249,206,261,150,270,109,277,56,285,23,290,3,294,0,287};

int Techo_Central2[]= {536,242,497,216,422,227,337,240,
277,249,206,261,150,270,109,277,56,285,23,290,3,294,26,298,49,302,
64,304,71,300,103,296,153,290,214,282,215,278,275,271,306,267,317,266
,325,268,407,257,452,252,502,246,536,242};

int soporte[]={65,300,154,290,215,282,214,287,155,295,103,301,69,304,
71,300};

int Centro_Abajo[] = {216,278,275,271,306,267,317,266,325,268,
323,323,303,323,285,319,257,314,225,308,216,309,216,278};

int Soporte2[] = {325,268,407,257,453,252,503,246,502,253,453,259,408
,264,369,268,325,273,325,268};

/* Parte de Abajo */
int Pared_Izquierda_Abajo[] = {31,298,21,365,57,367,64,304,31,298};

int Techo_De_Abajo[] = {312,347,224,317,131,324,131,316,173,313,214,309,
225,308,257,314,285,319,303,323,312,326,312,347};
int Techo_De_Abajo2[] = {131,324,180,338,222,350,313,347,225,317,
131,324};

int Ventana_Derecha_Granulada[]={323,323,321,363,400,362,506,363,
505,315,323,324};

int Ventana_Derecha_Abajo[] ={326,273,503,253,505,315,323,324,326,273};

int Ventana_Derecha_Abajo_Abajo[]={321,363,321,378,342,379,352,380,
358,393,411,393,509,393,509,363,321,363};

int Ventana_Izquierda_Abajo[]={213,307,214,290,66,307,63,342,161,334,134,324,131,316,173,313,213,307};
int Ventana_Izquierda_Abajo_Abajo[]={63,338,56,367,62,362,114,361,169,362,198,366
,215,369,216,349,160,334,66,338};

int Logo0[]={584,144,577,157,564,164,572,168,569,185,583,171,601,178,596,161,608,149
,591,152,584,144};

/*Carros */
/*Taxi*/
int Forma_DE_Taxi[] = {0,480,343,479,343,465,342,451,338,444,322,434,
301,425,283,407,256,382,225,371,202,367,163,362,116,361,73,362,
54,371,35,383,15,400,6,412,2,421,0,444,0,480};

int Ventana_De_Atras[]={124,372,115,369,96,366,72,365,70,366,58,373,
42,383,25,396,16,405,49,410,82,413,93,399,108,384,124,372};
int Stop[]={127,373,120,375,103,388,88,405,77,422,74,430,75,439,85,439,
93,436,99,431,104,426,107,416,110,406,115,397,121,386,127,378,127,373};

int Placa[] = {10,448,10,429,12,424,14,422,36,425,53,429,55,432,
51,454,48,456,24,452,10,448};

int Placa_Adentro[]={20,445,40,449,44,434,24,432,20,445};


int Ventan_WHITE[]={87,405,105,405,100,422,76,422,87,405};
int Estiker[]= {26,472,25,478,50,480,49,475,26,472};
int Luz_Taxi_Abajo_Abajo[]={60,472,73,474,73,477,72,480,58,480,58,475,
61,472};
int Llanta[] = {114,480,126,468,138,465,153,465,161,469,166,474,
169,480,114,480};
int Franja_Taxi[]={109,417,181,422,222,426,262,430,290,434,
324,440,336,444,342,451,334,448,316,443,291,440,256,436,
213,432,157,428,114,428,109,417};
int Ventana_Izquierda_Izquierda[]={167,374,154,375,141,381,132,393,129,408,
132,413,137,415,153,416,154,408,157,393,162,383,167,374};

int Ventana_Izquierda_taxi[]={170,379,166,390,163,400,162,415,227,422,
225,405,222,391,219,379,209,377,200,376,189,376,178,378,170,379};

int Ventana_Derecha_taxi[]={224,379,232,397,237,424,298,431,301,425,
276,405,263,393,249,386,235,381,224,379};

//int Espejo_Forma[]={301,425,299,431,289,431,285,431,285,422,286,417,
//289,419,290,416,294,416,298,418,301,425};
int Abrir_Puerta[]={162,438,184,438,184,446,162,446,162,438};
int Abrir_Puerta1[] = {240,443,257,443,257,449,240,449,240,443};

int Llanta_Derecha[] = {312,480,312,470,316,463,322,457,331,456,343,465,
344,480};

int Luz_Derecha[]={308,446,321,446,321,452,308,452,308,446};

/* Primer carro */
int Auto[] = {531,405,532,404,534,403,536,402,539,401,542,400,548,400,
572,400,581,400,593,402,603,412,611,422,614,430,614,437,613,447,613,439,
612,437,611,436,610,436,609,439,608,445,608,447,605,450,600,452,594,454,
588,455,588,442,586,439,584,439,582,441,581,444,580,450,579,454,579,456,
578,457,577,458,560,458,556,458,552,457,540,456,526,455,515,453,511,452,
510,449,509,445,509,430,511,426,519,418,521,416,524,413,
531,405};

int Ventana_Auto1[] = {578,420,580,417,581,412,581,409,582,405,571,404,552,403,
537,403,531,408,525,416,530,417,539,418,550,419,562,420,578,420};

int Ventana_secundaria[] = {589,424,586,425,584,425,584,412,585,408,587,
406,590,406,594,406,600,413,601,416,600,418,598,420};

int Espejo_derecha[] = {524,413,520,413,517,414,517,417,519,418};

int Espejo_izquierda[] = {591,423,589,423,587,422,586,420,586,418,589,417,593,417,
596,418,597,419,597,422,595,423,591,423};

int Llanta_izquierda[] = {525,456,522,461,517,461,514,458,513,454};

int Foco_izquierdo[] = {510,439,514,443,514,446,513,447,512,447,510,439};

int Foco_derecho[] = {566,448,568,447,571,445,574,445,574,451,572,452,568,
452,566,451,566,448};

int Llanta_derecha[] = {587,456,587,460,586,464,585,466,583,467,580,467,578,
465,577,463,576,461,576,459};

int Llanta_trasera[] = {613,447,613,453,613,457,612,460,605,460,604,459,602,
456,602,452};

int Abertura_arriba[] = {522,432,538,433,546,434,555,434,557,437,553,440,545,
441,531,441,523,438,520,435,522,432};

int Foco_primario[] = {515,423,517,426,519,430,518,431,515,433,511,431,
509,430};

int Foco_secundario[] = {560,433,565,432,570,432,573,432,574,433,574,435,
574,437,572,438,566,438,562,437,560,436,560,433};

int Abertura_abajo[] = {529,446,519,445,519,447,520,449,523,451,526,452,
533,454,537,454,543,454,549,454,555,454,559,452,560,448,544,448};

int Placa_auto1[] = {531,441,531,447,544,448,544,441};

/*Segundo Carro */
int Carro[] = {416,419,428,411,444,396,448,395,479,395,487,396,498,398,
510,412,512,414,515,422,511,426,509,430,508,430,506,422,504,443,495,444,
483,445,483,440,482,434,480,430,479,429,475,429,471,438,469,447,451,447,
428,444,414,443,413,440,413,431,414,425,416,419};

int Ventana_principal[] = {428,411,443,398,457,398,470,399,478,400,478,403,
477,407,475,414,464,414,447,413,437,412,428,411};

int Ventana_izquierda[] = {482,414,477,414,479,408,480,400,491,400,498,401,
505,408,505,412,494,414};

int Llanta_principal[] = {428,444,427,449,424,451,421,451,419,450,417,448,415,
445,414,443};

int Llanta_secundaria[] = {483,445,483,447,482,451,480,454,478,455,476,456,473,
455,471,454,470,453,469,451,469,447};

int Espejo_principal[] = {434,407,432,406,429,406,428,407,428,411};

int Espejo_secundario[] = {482,414,483,410,490,410,493,412,494,414,492,415,489,
416,482,416,482,414};

int Foco_derecha2[] = {418,419,419,423,419,427,415,425};

int Foco_izquierda2[] = {454,429,458,424,464,420,469,419,473,421,470,424,467,
429,454,429};

int Abertura_arriba2[] = {421,423,422,427,425,429,432,430,438,431,447,430,452,
425,421,423};

int Abertura_abajo2[] = {427,435,422,435,422,440,432,442,447,442,448,437,439,437};

int Foco3[] = {414,433,419,434,419,439,414,438};

int Foco4[] = {452,438,461,438,464,441,464,443,452,442,452,438};

int Placa2[] = {428,431,428,436,438,437,438,431};

int Llanta_trasera2[] = {509,448,508,450,507,451,505,451,504,449,503,446,503,444};
/* Carro Izquierda */
int Forma_Arriba[]={0,367,6,366,33,366,59,368,49,373,22,376
,0,382,0,367};
int VENTANAAA[]={49,373,22,376,0,382,0,396,14,400,23,392,
36,382,49,373};
int abajito[] = {0,396,14,400,0,422,0,396};
/* Carro siguiente */
/* Pilares de abajo y entrada*/
int Pilar_Abajo1[]={43,294,43,368,49,368,49,293,43,294};
int Pilar_Abajo2[] = {103,284,103,362,110,362,110,284,103,284};
int Pilar_Abajo3[] = {178,270,187,270,187,369,178,369,178,270};
int Pilar_Abajo4[] = {275,259,283,259,289,387,281,393,275,259};
int Pilar_Abajo5[] = {406,236,415,235,426,386,418,387,406,236};
int Base_Pilar[] = {433,388,436,404,432,408,423,396,412,393,413,388,419,387,
427,386,433,389};
int Base_Entrada1[] ={313,325,333,324,322,378,312,378,312,360,280,361,
238,361,221,361,221,370,215,370,216,349,222,350,252,349,287,348,312
,347,313,325};
int Vidrio1[]={222,360,313,360,312,378,300,379,290,386,282,393,272,396,262,386,
250,379,222,370,222,360};

/*Arboles y el cielo */
int Arbol[] = {528,408,524,406,519,404,519,402,521,400,523,399,524,398
,520,396,517,390,514,387,512,384,512,381,510,377,505,376,505,373,
508,373,511,373,512,366,516,363,523,360,526,369,530,356,535,354,
540,366,542,354,545,355,551,352,556,348,560,351,563,348,567,347,
572,351,579,351,583,354,590,353,595,352,596,357,600,360,607,360,605,
365,603,370,605,373,608,371,608,375,611,352,614,362,616,368,618,371,
621,371,618,383,627,385,628,388,616,388,615,393,621,395,617,402,620,404,
626,404,630,405,619,409,600,403,599,407,593,402,583,400,569,399,
546,399,537,401,533,403,528,408};

int Nube_Izquierda[]={0,155,13,154,24,157,32,154,39,156,44,154,51,158,
55,163,60,169,68,178,123,157,126,224,29,365,26,368,0,375,0,155};

int Nube_Derecha[] = {640,0,639,60,600,71,598,69,598,66,591,67
,586,60,580,66,577,77,574,67,570,62,571,57,575,54,576,52,569,50,
569,48,571,46,572,43,575,40,578,40,579,36,585,33,575,33,568,36,
566,34,568,30,563,28,560,27,559,33,555,36,549,37,543,38,541,34,
537,33,530,33,524,35,522,38,520,45,517,53,512,56,510,61,505,61,
489,69,484,37,476,39,468,40,467,37,470,34,470,31,469,28,448,25,
447,30,431,31,421,34,414,29,403,35,406,38,401,42,395,43,383,42,
381,43,372,40,366,47,363,46,363,40,365,35,367,31,375,28,390,26,
386,20,383,12,379,7,373,7,373,10,373,15,366,15,358,17,358,11,
361,4,368,0,640,0};

int Cielo[] = {0,196,640,196,640,0,0,0,0,196};


int Tercer_Auto_Forma[98] = {
371, 392
,376, 392
,381, 392
,394, 392
,404, 392
,408, 393
,411, 393
,414, 393
,416, 394
,420, 395
,425, 398
,427, 403
,430, 407
,431, 410
,428, 412
,423, 415
,419, 417
,419, 424
,414, 434
,414, 437
,415, 440
,406, 439
,398, 439
,396, 430
,396, 428
,397, 427
,393, 424
,390, 424
,387, 428
,385, 432
,385, 438
,376, 438
,366, 438
,358, 438
,349, 437
,340, 436
,339, 436
,339, 428
,340, 423
,339, 420
,341, 417
,343, 415
,345, 413
,345, 410
,348, 409
,352, 407
,358, 403
,365, 397
,370, 392
} ;
int Ventana_Tercera[18] = {
355, 408
,373, 408
,390, 408
,400, 396
,389, 396
,383, 396
,369, 396
,366, 396
,355, 408

};

int Chasis[24] = {
372, 417
,362, 417
,356, 416
,352, 415
,349, 415
,346, 415
,350, 417
,356, 420
,362, 420
,365, 420
,369, 420
,372,417

};


int Abajo_Abajo_Abajo[24] = {
344, 424
,349, 424
,360, 424
,370, 425
,371, 428
,368, 430
,366, 433
,366, 435
,354, 435
,346, 433
,344, 429
,344, 422
};

int Abajo_Abajo_Abajo_Abajo[44] = {
471, 451
,475, 454
,478, 454
,480, 452
,482, 449
,482, 445
,482, 440
,482, 434
,480, 431
,479, 430
,477, 428
,475, 430
,474, 431
,474, 434
,473, 437
,472, 437
,472, 441
,472, 444
,471, 446
,471, 448
,471, 450
,471, 452
};

int Foco_Abajo_Tercero[18] = {
453, 438
,461, 438
,464, 440
,465, 443
,462, 442
,454, 442
,452, 442
,453, 438
,452, 439
};

int Foco_Abajo_Derecho[18] = {
340, 423
,341, 429
,342, 430
,343, 430
,343, 434
,340, 432
,339, 431
,339, 431
,339, 429
};

int Llanta_Izquierda_Tercero[14] = {
513, 455
,515, 460
,519, 461
,524, 461
,525, 457
,525, 455
,525, 453
};

int Espejo_Tercer_Carro[14] = {
513, 455
,515, 460
,519, 461
,524, 461
,525, 457
,525, 455
,525, 453

};

int Camioneta[74] = {
273, 395
,282, 392
,298, 380
,302, 378
,335, 379
,350, 380
,351, 379
,357, 388
,358, 392
,358, 395
,366, 395
,355, 404
,348, 408
,346, 408
,344, 408
,344, 407
,345, 413
,342, 417
,339, 419
,338, 423
,338, 426
,337, 425
,334, 426
,326, 426
,324, 426
,323, 426
,323, 426
,321, 426
,322, 416
,319, 411
,316, 409
,312, 410
,309, 414
,305, 418
,305, 422
,305, 425
,306, 425
};

int Foco_Camioneta[14] = {
296, 404
,303, 402
,304, 402
,305, 403
,302, 406
,299, 409
,296, 404

};

int Espejo_Camioneta[18] = {
287, 393
,299, 382
,324, 382
,325, 382
,317, 393
,317, 393
,317, 395
,289, 393
,287, 393

};
int Segunda_Ventana_Camioneta[16] = {
323, 397
,323, 393
,330, 383
,338, 383
,340, 396
,340, 397
,325, 398
,323, 398

};

int Tercera_Ventana_Camioneta[18] = {
341, 383
,342, 395
,343, 396
,352, 395
,353, 391
,352, 388
,351, 383
,350, 383
,341, 383

};
int Espejo_Camioneta_Camioneta[16] = {
324, 392
,327, 390
,330, 390
,333, 393
,332, 396
,327, 396
,323, 396
,325, 392
};

int Llanta_Camioneta[26] = {
304, 424
,309, 414
,314, 410
,318, 410
,320, 413
,321, 417
,322, 420
,322, 424
,322, 428
,320, 429
,320, 431
,318, 431
,318, 433
};

int Ventana15[] = {
410, 397
,404, 397
,401, 399
,398, 404
,395, 412
,398, 412
,403, 409
,411, 408
,413, 409
,410,397
};
int Ventana16[26] = {
413, 396
,414, 402
,415, 406
,415, 409
,418, 407
,421, 407
,425, 407
,426, 407
,425, 406
,423, 401
,420, 398
,418, 397
,413, 397

};
int Llanta34[36] = {
397, 439
,397, 434
,397, 430
,395, 427
,394, 425
,392, 425
,390, 425
,389, 427
,387, 430
,387, 433
,386, 436
,385, 438
,385, 442
,389, 445
,392, 445
,395, 445
,397, 441
,397, 439

};

int Llanta_Derecha2[28] = {
588, 455
,588, 452
,587, 446
,587, 441
,586, 439
,583, 440
,580, 447
,580, 452
,579, 457
,581, 462
,582, 465
,584, 465
,587, 462
,588, 455

};

int Llanta_Final[30] = {
610, 436
,609, 439
,608, 441
,607, 447
,607, 449
,606, 451
,606, 454
,606, 457
,607, 459
,612, 459
,613, 456
,613, 450
,613, 442
,613, 437
,612, 436

};

int  Llanta_Dar_Color[26] = {
511, 449
,511, 452
,513, 457
,514, 459
,516, 461
,519, 461
,522, 461
,524, 458
,526, 454
,523, 451
,519, 449
,512, 449
,512, 449
};

int Llanta_Penultima_[36] = {
483, 445
,483, 438
,481, 434
,479, 429
,477, 429
,474, 431
,472, 435
,471, 439
,469, 445
,469, 446
,471, 450
,472, 453
,475, 455
,477, 455
,480, 453
,482, 451
,483, 447
,483, 445

};

initgraph(&Driver,&Mode,"c:\\tc\\bgi");
setfillstyle(Trama2,7);
floodfill(0,0,7);
setfillstyle(Trama3,CYAN);
fillpoly(5,Cielo);
setfillstyle(Trama3,WHITE);
fillpoly(16,Nube_Izquierda);
fillpoly(81,Nube_Derecha);
setfillstyle(Trama3,GREEN);
/* Parte de arriba */
setcolor(WHITE);
setfillstyle(Trama,7);
fillpoly(54,Techo);
setfillstyle(Trama,WHITE);
fillpoly(32,Techo_Abajo);
setfillstyle(Trama,8);
fillpoly(12,roof);
setfillstyle(Trama3,7);
fillpoly(9,Ventana1);
setfillstyle(Trama3,7);
fillpoly(4,Ventana);
setfillstyle(Trama3,7);
fillpoly(16,Ventana2);
fillpoly(8,Ventana3)  ;
fillpoly(12,Ventana4);
fillpoly(4,Ventana6);
setcolor(WHITE);
setfillstyle(Trama,WHITE);
fillpoly(4,Ventana5);
setfillstyle(Trama,7);
fillpoly(12,Pilar_0);
fillpoly(14,Pilar_1);
fillpoly(14,Pilar_2);
fillpoly(11,Pilar_3);
fillpoly(9,Pilar_4);
setfillstyle(Trama2,8);
fillpoly(17,Centro);
setlinestyle(0,0,3);
setfillstyle(Trama,WHITE);
fillpoly(19,Pilar_Izquierdo_Abajo);
fillpoly(19,Pilar_Derecho_Abajo);
setfillstyle(Trama,7);
fillpoly(18,Pilar_Izquierdo);
fillpoly(17,Pilar_Derecho);
setcolor(WHITE);
setlinestyle(0,0,3);
line(112,185,226,150);
line(137,159,135,200);
line(211,129,206,191);
line(344,110,441,81);
line(242,118,242,143);
line(273,110,273,134);
line(299,103,298,125);
line(310,101,310,120);
line(334,96,333,114);
line(372,89,372,134);
line(411,81,411,123);

/* Parte de en medio */
fillpoly(4,Pared_Izquierda);
setfillstyle(Trama,8);
fillpoly(4,Pared_Izquierda1);
setfillstyle(Trama3,7);
fillpoly(12,Ventana_Izquierda);
setfillstyle(Trama3,7);
fillpoly(12,Ventana_Derecha);
setfillstyle(Trama,7);
fillpoly(20,Emblema);
setfillstyle(Trama,8);
fillpoly(22,Techo_centro1);
fillpoly(27,Techo_Central2);
setfillstyle(Trama,7);
fillpoly(10,Soporte2);
fillpoly(7,soporte);
setfillstyle(Trama2,7);
fillpoly(12,Centro_Abajo);
/*Lineas de las ventanas */
line(82,258,215,232);
line(99,241,96,271);
line(121,237,119,266);
line(145,232,143,262);
line(171,227,169,258);
line(200,220,197,253);

line(329,209,499,176);
line(366,184,366,223);
line(407,174,407,217);
line(452,163,452,208);
line(477,158,478,204);

/* Lineas del soporte de abajo */
setcolor(7);
line(88,298,38,289);
line(151,290,98,280) ;
line(215,278,172,267);
line(317,266,270,252);
line(446,253,403,231);
line(375,262,334,241);
/* Parte de Abajo */
setcolor(WHITE);
setfillstyle(Trama,7);
fillpoly(5,Pared_Izquierda_Abajo);

fillpoly(15,Base_Entrada1);
setcolor(WHITE);
setfillstyle(Trama2,7);
fillpoly(6,Ventana_Derecha_Granulada);
setfillstyle(Trama3,7);
fillpoly(5,Ventana_Derecha_Abajo);
setfillstyle(Trama3,7);
fillpoly(9,Ventana_Derecha_Abajo_Abajo);
/* Lineas de las ventanas Derecha */
line(324,306,504,291);      
line(364,268,363,392);
line(344,271,342,381);
line(384,267,384,390);
line(454,259,456,394);
line(429,261,431,391);
line(402,264,407,392);
fillpoly(9,Ventana_Izquierda_Abajo);
setfillstyle(Trama2,8);
fillpoly(9,Ventana_Izquierda_Abajo_Abajo);
setfillstyle(Trama3,7);
fillpoly(10,Vidrio1);

/*Lineas de la ventanas de abajo a la izqueirda */
setcolor(WHITE);
line(91,299,91,361);
line(152,293,152,361);
line(123,298,123,360);
line(192,289,192,365);

setcolor(WHITE);
setfillstyle(Trama,8);

fillpoly(5,Pilar_Abajo3);
setcolor(WHITE);
fillpoly(12,Techo_De_Abajo);
setfillstyle(Trama,WHITE);
fillpoly(5,Techo_De_Abajo2);;
setfillstyle(Trama3,WHITE);
setcolor(WHITE);
fillpoly(11,Logo0);
settextstyle(3,0,1);
outtextxy(532,186,"Banpro");
settextstyle(2,0,0);
outtextxy(534,207,"Grupo Proamerica");
setfillstyle(Trama3,YELLOW);
fillpoly(21,Forma_DE_Taxi);
setfillstyle(Trama3,7);
fillpoly(14,Ventana_De_Atras);
setcolor(LIGHTRED);
setfillstyle(Trama,LIGHTRED);
fillpoly(17,Stop);
setfillstyle(Trama3,WHITE);
setcolor(WHITE);
fillpoly(4,Ventan_WHITE);
drawpoly(11,Placa);
fillpoly(5,Placa_Adentro);
setcolor(WHITE);
fillpoly(3,Estiker);
/*Lineas Traseras */
setcolor(RED);
line(24,433,43,436);
line(21,448,40,451);
setcolor(BLACK);
/*Linea Trasera */
line(0,453,63,465);
setfillstyle(Trama3,RED);
fillpoly(6,Luz_Taxi_Abajo_Abajo);

/*Linea de abajo de la luz */
setcolor(BLACK);
line(75,439,71,459);
line(71,459,127,468);
setfillstyle(Trama,BLACK);
fillpoly(7,Llanta);

/*Tanque */
setfillstyle(Trama3,WHITE);
setlinestyle(0,0,1);
setcolor(BLACK);
fillellipse(129,438,7,7);
setcolor(WHITE);
setfillstyle(Trama3,WHITE);
fillpoly(16,Franja_Taxi);
setfillstyle(Trama3,7);
setlinestyle(0,0,3);
fillpoly(12,Ventana_Izquierda_Izquierda);
setfillstyle(Trama3,7);
fillpoly(12,Ventana_Izquierda_taxi);

/*Linea Divisoria */
setcolor(BLACK);
line(220,374,232,422);
setcolor(WHITE);
fillpoly(10,Ventana_Derecha_taxi);
setfillstyle(Trama,7)    ;
fillpoly(5,Abrir_Puerta);
fillpoly(5,Abrir_Puerta1);
setfillstyle(Trama,8);
fillellipse(174,441,5,5);
fillellipse(249,446,4,4);
setfillstyle(Trama,BLACK);
setcolor(BLACK);
fillpoly(7,Llanta_Derecha);
setfillstyle(Trama3,LIGHTRED);
fillpoly(5,Luz_Derecha);


/*Primer auto */
setcolor(WHITE);
setfillstyle(Trama,WHITE);
fillpoly(51,Auto);
setfillstyle(Trama3,7);
fillpoly(15,Ventana_Auto1);
fillpoly(12,Ventana_secundaria);
setfillstyle(Trama,WHITE);
fillpoly(5,Espejo_derecha);
fillpoly(12,Espejo_izquierda);
setfillstyle(Trama,BLACK) ;
fillpoly(5,Llanta_izquierda);
setfillstyle(Trama,WHITE);
fillpoly(6,Foco_izquierdo);
fillpoly(9,Foco_derecho);
setfillstyle(Trama,BLACK);
fillpoly(10,Llanta_derecha);
fillpoly(8,Llanta_trasera);
setfillstyle(Trama3,7);
fillpoly(11,Abertura_arriba);
setfillstyle(Trama,BLACK);
fillpoly(7,Foco_primario);
fillpoly(12,Foco_secundario),
fillpoly(14,Abertura_abajo);
setfillstyle(Trama,WHITE);
fillpoly(4,Placa_auto1);

fillpoly(31,Carro);
setfillstyle(Trama3,7);
fillpoly(12,Ventana_principal);
fillpoly(9,Ventana_izquierda);
setfillstyle(Trama3,WHITE);
fillpoly(8,Llanta_principal);
fillpoly(11,Llanta_secundaria);
fillpoly(5,Espejo_principal);
fillpoly(9,Espejo_secundario);
setfillstyle(Trama3,7);
fillpoly(4,Foco_derecha2);
fillpoly(8,Foco_izquierda2);
setfillstyle(Trama3,7);
fillpoly(8,Abertura_arriba2);
fillpoly(7,Abertura_abajo2);
fillpoly(4,Foco3);
fillpoly(6,Foco4);
fillpoly(4,Placa2);
fillpoly(7,Llanta_trasera2);

/* Carro Izquierda */
setfillstyle(Trama,8);
fillpoly(7,Forma_Arriba);
setfillstyle(Trama3,7);
fillpoly(7,VENTANAAA);
setfillstyle(Trama,8);
fillpoly(4,abajito);
fillpoly(5,Pilar_Abajo1);
fillpoly(5,Pilar_Abajo2);
fillpoly(5,Pilar_Abajo4);
fillpoly(5,Pilar_Abajo5);
fillpoly(9,Base_Pilar);
line(239,361,238,375);
line(258,360,256,382);
line(280,361,279,394);
line(303,360,303,389);
setlinestyle(0,0,1);
setfillstyle(Trama3,GREEN);
setcolor(7);
fillpoly(69,Arbol);

setfillstyle(Trama,WHITE);
fillpoly(49,Tercer_Auto_Forma);
setfillstyle(Trama3,7);
fillpoly(9,Ventana_Tercera);
fillpoly(12,Chasis);
fillpoly(12,Abajo_Abajo_Abajo);
fillpoly(9,Foco_Abajo_Tercero);
fillpoly(7,Llanta_Izquierda_Tercero);
fillpoly(7,Espejo_Tercer_Carro);
fillpoly(9,Foco_Abajo_Derecho);

setfillstyle(Trama,WHITE);
fillpoly(37,Camioneta);
setfillstyle(Trama3,7);
fillpoly(7,Foco_Camioneta);
fillpoly(9,Espejo_Camioneta);
fillpoly(8,Segunda_Ventana_Camioneta);
fillpoly(9,Tercera_Ventana_Camioneta);
fillpoly(8,Espejo_Camioneta);
setfillstyle(Trama3,WHITE);
fillpoly(13,Llanta_Camioneta);
fillpoly(10,Ventana15);
fillpoly(13,Ventana16);
fillpoly(18,Llanta34);
fillpoly(14,Llanta_Derecha2);
fillpoly(15,Llanta_Final);
fillpoly(13,Llanta_Dar_Color);
fillpoly(18,Llanta_Penultima_);
setcolor(YELLOW);
setlinestyle(0,0,3);
line(640,451,568,476);
line(510,455,454,462);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(5,3,"Creado por :");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(5,40,"Oscar Rivera");
outtextxy(5,80,"Grace Massiel");


getch();
closegraph();
}

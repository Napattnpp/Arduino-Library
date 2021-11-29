/*
*  Situations
*  sen. > light = o
*  sen. < light = i
*/

/* --- 4 sensors --- */

#define oooo   ((sen1 > light) && (sen2 > light) && (sen3 > light) && (sen4 > light))  //all white

#define oooi    ((sen1 > light) && (sen2 > light) && (sen3 > light) && (sen4 < light))  //0 0 0 1
#define ooio    ((sen1 > light) && (sen2 > light) && (sen3 < light) && (sen4 > light))  //0 0 1 0
#define ooii    ((sen1 > light) && (sen2 > light) && (sen3 < light) && (sen4 < light))  //0 0 1 1

#define oioo    ((sen1 > light) && (sen2 < light) && (sen3 > light) && (sen4 > light))  //0 1 0 0
#define oioi    ((sen1 > light) && (sen2 < light) && (sen3 > light) && (sen4 < light))  //0 1 0 1
#define oiio    ((sen1 > light) && (sen2 < light) && (sen3 < light) && (sen4 > light))  //0 1 1 0
#define oiii    ((sen1 > light) && (sen2 < light) && (sen3 < light) && (sen4 < light))  //0 1 1 1

#define iooo    ((sen1 < light) && (sen2 > light) && (sen3 > light) && (sen4 > light))  //1 0 0 0
#define iooi    ((sen1 < light) && (sen2 > light) && (sen3 > light) && (sen4 < light))  //1 0 0 1
#define ioio    ((sen1 < light) && (sen2 > light) && (sen3 < light) && (sen4 > light))  //1 0 1 0
#define ioii    ((sen1 < light) && (sen2 > light) && (sen3 < light) && (sen4 < light))  //1 0 1 1

#define iioo    ((sen1 < light) && (sen2 < light) && (sen3 > light) && (sen4 > light))  //1 1 0 0
#define iioi    ((sen1 < light) && (sen2 < light) && (sen3 > light) && (sen4 < light))  //1 1 0 1
#define iiio    ((sen1 < light) && (sen2 < light) && (sen3 < light) && (sen4 > light))  //1 1 1 0

#define iiii  ((sen1 < light) && (sen2 < light) && (sen3 < light) && (sen4 < light))  //all black

/* ---------- ---------- ---------- ---------- ---------- ---------- ---------- ---------- ---------- ---------- */

/* 5 sensors */

#define ooooo   ((sen1 > light) && (sen2 > light) && (sen3 > light) && (sen4 > light) && (sen5 > light))  //all white

#define ooooi   ((sen1 > light) && (sen2 > light) && (sen3 > light) && (sen4 > light) && (sen5 < light))  //0 0 0 0 1
#define oooio   ((sen1 > light) && (sen2 > light) && (sen3 > light) && (sen4 < light) && (sen5 > light))  //0 0 0 1 0
#define oooii   ((sen1 > light) && (sen2 > light) && (sen3 > light) && (sen4 < light) && (sen5 < light))  //0 0 0 1 1

#define ooioo   ((sen1 > light) && (sen2 > light) && (sen3 < light) && (sen4 > light) && (sen5 > light))  //0 0 1 0 0
#define ooioi   ((sen1 > light) && (sen2 > light) && (sen3 < light) && (sen4 > light) && (sen5 < light))  //0 0 1 0 1
#define ooiio   ((sen1 > light) && (sen2 > light) && (sen3 < light) && (sen4 < light) && (sen5 > light))  //0 0 1 1 0
#define ooiii   ((sen1 > light) && (sen2 > light) && (sen3 < light) && (sen4 < light) && (sen5 < light))  //0 0 1 1 1

#define oiooo   ((sen1 > light) && (sen2 < light) && (sen3 > light) && (sen4 > light) && (sen5 > light))  //0 1 0 0 0
#define oiooi   ((sen1 > light) && (sen2 < light) && (sen3 > light) && (sen4 > light) && (sen5 < light))  //0 1 0 0 1
#define oioio   ((sen1 > light) && (sen2 < light) && (sen3 > light) && (sen4 < light) && (sen5 > light))  //0 1 0 1 0
#define oioii   ((sen1 > light) && (sen2 < light) && (sen3 > light) && (sen4 < light) && (sen5 < light))  //0 1 0 1 1

#define oiioo   ((sen1 > light) && (sen2 < light) && (sen3 < light) && (sen4 > light) && (sen5 > light))  //0 1 1 0 0
#define oiioi   ((sen1 > light) && (sen2 < light) && (sen3 < light) && (sen4 > light) && (sen5 < light))  //0 1 1 0 1
#define oiiio   ((sen1 > light) && (sen2 < light) && (sen3 < light) && (sen4 < light) && (sen5 > light))  //0 1 1 1 0
#define oiiii   ((sen1 > light) && (sen2 < light) && (sen3 < light) && (sen4 < light) && (sen5 < light))  //0 1 1 1 1

#define ioooo   ((sen1 < light) && (sen2 > light) && (sen3 > light) && (sen4 > light) && (sen5 > light))  //1 0 0 0 0
#define ioooi   ((sen1 < light) && (sen2 > light) && (sen3 > light) && (sen4 > light) && (sen5 < light))  //1 0 0 0 1
#define iooio   ((sen1 < light) && (sen2 > light) && (sen3 > light) && (sen4 < light) && (sen5 > light))  //1 0 0 1 0
#define iooii   ((sen1 < light) && (sen2 > light) && (sen3 > light) && (sen4 < light) && (sen5 < light))  //1 0 0 1 1

#define ioioo   ((sen1 < light) && (sen2 > light) && (sen3 < light) && (sen4 > light) && (sen5 > light))  //1 0 1 0 0
#define ioioi   ((sen1 < light) && (sen2 > light) && (sen3 < light) && (sen4 > light) && (sen5 < light))  //1 0 1 0 1
#define ioiio   ((sen1 < light) && (sen2 > light) && (sen3 < light) && (sen4 < light) && (sen5 > light))  //1 0 1 1 0
#define ioiii   ((sen1 < light) && (sen2 > light) && (sen3 < light) && (sen4 < light) && (sen5 < light))  //1 0 1 1 1

#define iiooo   ((sen1 < light) && (sen2 < light) && (sen3 > light) && (sen4 > light) && (sen5 > light))  //1 1 0 0 0
#define iiooi   ((sen1 < light) && (sen2 < light) && (sen3 > light) && (sen4 > light) && (sen5 < light))  //1 1 0 0 1
#define iioio   ((sen1 < light) && (sen2 < light) && (sen3 > light) && (sen4 < light) && (sen5 > light))  //1 1 0 1 0
#define iioii   ((sen1 < light) && (sen2 < light) && (sen3 > light) && (sen4 < light) && (sen5 < light))  //1 1 0 1 1

#define iiioo   ((sen1 < light) && (sen2 < light) && (sen3 < light) && (sen4 > light) && (sen5 > light))  //1 1 1 0 0
#define iiioi   ((sen1 < light) && (sen2 < light) && (sen3 < light) && (sen4 > light) && (sen5 < light))  //1 1 1 0 1
#define iiiio   ((sen1 < light) && (sen2 < light) && (sen3 < light) && (sen4 < light) && (sen5 > light))  //1 1 1 1 0

#define iiiii   ((sen1 < light) && (sen2 < light) && (sen3 < light) && (sen4 < light) && (sen5 < light))  //all black

/* ---------- ---------- ---------- ---------- ---------- ---------- ---------- ---------- ---------- ---------- */

#define oooo   ((sen1 > light) && (sen2 > light) && (sen3 > light) && (sen4 > light))  //all white

#define oooi   ((sen1 > light) && (sen2 > light) && (sen3 > light) && (sen4 < light))  //0 0 0 1
#define ooio   ((sen1 > light) && (sen2 > light) && (sen3 < light) && (sen4 > light))  //0 0 1 0
#define ooii   ((sen1 > light) && (sen2 > light) && (sen3 < light) && (sen4 < light))  //0 0 1 1

#define oioo   ((sen1 > light) && (sen2 < light) && (sen3 > light) && (sen4 > light))  //0 1 0 0
#define oioi   ((sen1 > light) && (sen2 < light) && (sen3 > light) && (sen4 < light))  //0 1 0 1
#define oiio   ((sen1 > light) && (sen2 < light) && (sen3 < light) && (sen4 > light))  //0 1 1 0
#define oiii   ((sen1 > light) && (sen2 < light) && (sen3 < light) && (sen4 < light))  //0 1 1 1

#define iooo   ((sen1 < light) && (sen2 > light) && (sen3 > light) && (sen4 > light))  //1 0 0 0
#define iooi   ((sen1 < light) && (sen2 > light) && (sen3 > light) && (sen4 < light))  //1 0 0 1
#define ioio   ((sen1 < light) && (sen2 > light) && (sen3 < light) && (sen4 > light))  //1 0 1 0
#define ioii   ((sen1 < light) && (sen2 > light) && (sen3 < light) && (sen4 < light))  //1 0 1 1

#define iioo  ((sen1 < light) && (sen2 < light) && (sen3 > light) && (sen4 > light))  //1 1 0 0
#define iioi  ((sen1 < light) && (sen2 < light) && (sen3 > light) && (sen4 < light))  //1 1 0 1
#define iiio  ((sen1 < light) && (sen2 < light) && (sen3 < light) && (sen4 > light))  //1 1 1 0

#define iiii  ((sen1 < light) && (sen2 < light) && (sen3 < light) && (sen4 < light))  //all black

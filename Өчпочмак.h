#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>

#define инде ;
#define эченнән .
#define эченнән_алып ->

#define язарга    printf
#define тыңларга  scanf
#define яңаюл     putchar(10)

#define ҺӘМ &&
#define ЯКИ ||
#define һәм &
#define яки |
#define яки_юк ^

#define ул =
#define күбрәк >
#define әзрәк <
#define булсын =
#define күбрәк_яки_шул >=
#define әзрәк_яки_шул <=
#define шундый_ук ==
#define бүтән !=

#define Гаилә struct
#define Общежитие union

#define кирәк   malloc
#define кирәкми free

#define байт
#define килобайт *1024
#define мегабайт *1048576

#define баш int32_t main
#define Саламалекум {
#define Асталависта }

#define САН16    "%h"
#define ЗСАН16   "%hu"
#define САН32    "%d"
#define ЗСАН32   "%u"
#define САН64    "%lld"
#define ЗСАН64   "%llu"
#define НОКТА32  "%f"
#define НОКТА64  "%lf"
#define НОКТА80  "%llf"
#define ӨТЕР32   "%f"
#define ӨТЕР64   "%lf"
#define ӨТЕР80   "%llf"
#define ХӘРЕФ    "%c"
#define ХӘРЕФЛӘР "%s"

// уинт8_т булса -Wall ны кабызмагыз
// зинһар өчен
#define хәреф uint8_t
#define хәрефләр uint8_t*

#define С8   int8_t
#define С16  int16_t
#define С32  int32_t
#define С64  int64_t

#define ЗС8  uint8_t
#define ЗС16 uint16_t
#define ЗС32 uint32_t
#define ЗС64 uint64_t

// Н -- нокта, Ө -- өтер
// но реальный пруграммерлар өтер белән бер
// кацчан да язмый.
#define Н32  float
#define Н64  double
#define Н80  long double

#define Ө32  float
#define Ө64  double
#define Ө80  long double

#define бирергә return
#define ЯХШЫ  0
#define НАЧАР 1

#define тимәскә const
#define НУЛЬ NULL

#define булса if
#define булмаса else
#define бүтәнчә else if
#define булганда while
#define бөтенесенә for

#define байт_зурлыгы sizeof
#define зурлыгы(м) байт_зурлыгы(м)/байт_зурлыгы(м[0])

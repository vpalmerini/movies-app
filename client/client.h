#define MAXLINE 4096
#define OPERATION 32
#define FIELD 256
#define ROOMS 20
#define SA struct sockaddr
#define stdin stdin

#include "../wrappers/socket/socket.h"
#include "../wrappers/writen/writen.h"
#include "../wrappers/inet_pton/inet_pton.h"
#include "../wrappers/connect/connect.h"

typedef struct packet
{
    int op;
    int movie_id;
    char *movie_title;
    char *movie_sinopsis;
    char *movie_genre;
    char *rooms;
} packet;
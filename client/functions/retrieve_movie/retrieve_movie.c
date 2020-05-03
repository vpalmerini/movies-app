#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../serializers/packet.h"

void retrieve_movie(FILE *fp, packet *packet, int field_size)
{
    char *input = (char *)calloc(field_size, sizeof(char));

    printf("Entre com o id do filme a ser retornado:\n");
    fgets(input, field_size, fp);
    packet->movie_id = atoi(input);

    free(input);

    return;
}
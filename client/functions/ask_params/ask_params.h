#ifndef ASK_PARAMS_H
#define ASK_PARAMS_H

#include "../../../serializers/packet.h"

void ask_params(FILE *fp, int op, packet *packet, int field_size);

#endif
/* Compila con -L tor-0.2.3.25 -ltor -lz -lm -levent -lssl -lcrypto -lpthread -ldl */
#include <stdlib.h>
void lanza_tor(char *); /* Recibe puerto o NULL per il valore staticamente compilato */
int main() {
  lanza_tor("1122");
}

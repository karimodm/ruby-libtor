#!/bin/bash

echo "En que puerto quieres que escuche tor? "
read PUERTO_TOR
if [ ! -z $PUERTO_TOR ]; then
	sed -r "s/BOT_SOCKSPORT [0-9]+/BOT_SOCKSPORT $PUERTO_TOR/" src/or/config.c > src/or/config_new.c
	mv src/or/config_new.c src/or/config.c
fi
rm libtor.a
make distclean
export CFLAGS="-s -Wno-unused-value -fpic -fPIC"
./configure
make -j 2
ar crv libtor.a $(find -type f -name *.o)
echo "*{{ libtor.a CREADA }}*"
echo "!! Recuerda que libtor.a requiere estas librerías: -lz -lm -levent -lssl -lcrypto -lpthread -ldl !!"

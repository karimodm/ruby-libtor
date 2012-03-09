//Ejemplo de creacion y añadido de un servicio http://msdn.microsoft.com/en-us/library/windows/desktop/ms683500%28v=vs.85%29.aspx
#define NOM_SERVICIO "nom_servicio"
#define MI_RUTA "C:/Windos... Obtener"
BOOL crearServicio(){
  SC_HANDLE scmDB,sCreado;
  DWORD codError;
  
  scmDB=OpenSCManager(NULL,SERVICES_ACTIVE_DATABASE,SC_MANAGER_CREATE_SERVICE);//Establece una conexion con el service control manager del pc actual
  /*El último parámetro son flags de permisos, en principio, la usada da permisos solo para crear un nuevo servicio*/
  if(!scmDB){
    codError=GetLastError();
    CloseServiceHandle(sCreado);
    CloseServiceHandle(scmDB);    
    return -1;
  }
  
  sCreado=CreateService(scmDB,NOM_SERVICIO,NOM_SERVICIO,SERVICE_ALL_ACCESS,SERVICE_WIN32_OWN_PROCESS,SERVICE_AUTO_START,SERVICE_ERROR_IGNORE,MI_RUTA,NULL,NULL,NULL/*Servicios con los que tiene dependencia. conexion a internet??*/,NULL,NULL);
  /*Una idea:Los últimos dos parámetros indican user y pass del user bajo quien se ejectuan,, si ponemos admin,""??? lograriamos escalar privilegios en el caso de pass de amdni nula??*/
  if(!sCreado){
    codError=GetLastError();
    CloseServiceHandle(sCreado);
    CloseServiceHandle(scmDB);
    return -1;
  }
  
  
  CloseServiceHandle(sCreado);
  CloseServiceHandle(scmDB);
return 0;
}
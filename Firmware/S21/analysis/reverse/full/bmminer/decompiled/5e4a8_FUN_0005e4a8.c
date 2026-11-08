// FUN_0005e4a8 @ 0005e4a8  size=196  callers=1
// program: bmminer


char * FUN_0005e4a8(char *param_1,undefined1 *param_2)

{
  int iVar1;
  size_t sVar2;
  char *param0;
  
  iVar1 = strcasecmp(param_1,"yes");
  if ((iVar1 == 0) || (iVar1 = strcasecmp(param_1,"true"), iVar1 == 0)) {
    *param_2 = 1;
    return (char *)0x0;
  }
  iVar1 = strcasecmp(param_1,"no");
  if ((iVar1 == 0) || (iVar1 = strcasecmp(param_1,"false"), iVar1 == 0)) {
    *param_2 = 0;
    return (char *)0x0;
  }
  sVar2 = strlen(param_1);
  param0 = malloc(sVar2 + 0x16);
  sprintf(param0,"Invalid argument \'%s\'",param_1);
  return param0;
}


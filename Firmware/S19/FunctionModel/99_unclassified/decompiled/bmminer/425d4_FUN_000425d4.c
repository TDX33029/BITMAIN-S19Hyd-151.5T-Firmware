// FUN_000425d4 @ 000425d4  size=60  callers=4
// program: bmminer


char * FUN_000425d4(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  
  sVar1 = strlen(param_1);
  sVar2 = strlen(param_2);
  __s = malloc(sVar1 + sVar2);
  sprintf(__s,param_1,param_2);
  return __s;
}


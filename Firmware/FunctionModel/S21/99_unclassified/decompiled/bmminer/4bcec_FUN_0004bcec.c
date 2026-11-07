// FUN_0004bcec @ 0004bcec  size=72  callers=0
// program: bmminer


char * FUN_0004bcec(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  char *__s;
  
  __s = (char *)*param_1;
  if ((__s == (char *)0x0) || (pcVar1 = strpbrk(__s,param_2), pcVar1 == (char *)0x0)) {
    *param_1 = 0;
    return __s;
  }
  *pcVar1 = '\0';
  *param_1 = pcVar1 + 1;
  return __s;
}


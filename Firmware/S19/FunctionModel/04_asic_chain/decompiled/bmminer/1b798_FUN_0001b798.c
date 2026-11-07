// FUN_0001b798 @ 0001b798  size=188  callers=1
// program: bmminer


void FUN_0001b798(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  char *__s;
  char acStack_810 [2048];
  
  if ((DAT_00089088 == 0) || (*(char *)(DAT_00089088 + 0x1c) == '\0')) {
    if (4 < DAT_00087bbc) {
      snprintf(acStack_810,0x800,"No hash board sn, chain = %d.\n",param_1);
      FUN_00032218(4,acStack_810,0);
      return;
    }
  }
  else if (param_2 != (char *)0x0) {
    __s = *(char **)(*(int *)(DAT_00089088 + param_1 * 4) + 3);
    sVar1 = strlen(__s);
    if (sVar1 + 1 <= param_3) {
      snprintf(param_2,param_3,"%s",__s);
    }
  }
  return;
}


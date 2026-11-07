// FUN_0001be84 @ 0001be84  size=200  callers=1
// program: bmminer


undefined4 FUN_0001be84(int param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  undefined4 uVar2;
  char *__s;
  char acStack_810 [2048];
  
  if ((DAT_00089088 == 0) || (*(char *)(DAT_00089088 + 0x1c) == '\0')) {
    if (4 < DAT_00087bbc) {
      snprintf(acStack_810,0x800,"No ft ver, chain = %d\n",param_1);
      FUN_00032218(4,acStack_810,0);
      return 0xffffffff;
    }
    uVar2 = 0xffffffff;
  }
  else {
    if (param_2 != (char *)0x0) {
      __s = *(char **)(*(int *)(DAT_00089088 + param_1 * 4) + 0x10);
      sVar1 = strlen(__s);
      if (sVar1 < param_3) {
        snprintf(param_2,param_3,"%s",__s);
        return 0;
      }
    }
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}


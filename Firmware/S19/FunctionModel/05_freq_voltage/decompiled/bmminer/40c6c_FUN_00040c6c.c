// FUN_00040c6c @ 00040c6c  size=204  callers=2
// program: bmminer


uint FUN_00040c6c(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint param4;
  char acStack_818 [2048];
  
  param4 = 0xffffff;
  iVar3 = 0;
  do {
    iVar1 = FUN_000201d8(iVar3);
    if ((iVar1 != 0) && (param_1 == 0xff || param_1 == iVar3)) {
      iVar4 = 0;
      iVar1 = FUN_0002002c();
      if (iVar1 != 0) {
        puVar2 = (uint *)(param_2 + -4 + iVar3 * 0x400);
        do {
          puVar2 = puVar2 + 1;
          iVar4 = iVar4 + 1;
          if (*puVar2 <= param4) {
            param4 = *puVar2;
          }
        } while (iVar1 != iVar4);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  if (4 < DAT_00087bbc) {
    snprintf(acStack_818,0x800,"chain = %d, freq_min = %d\n",param_1,param4);
    FUN_00032218(4,acStack_818,0);
  }
  return param4;
}


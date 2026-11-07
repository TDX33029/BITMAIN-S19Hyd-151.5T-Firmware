// FUN_0005ca30 @ 0005ca30  size=204  callers=2
// program: bmminer


uint FUN_0005ca30(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint param4;
  int iVar4;
  char acStack_2018 [8192];
  
  param4 = 0;
  iVar3 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar3);
    if ((iVar1 != 0) && (param_1 == 0xff || param_1 == iVar3)) {
      iVar4 = 0;
      iVar1 = FUN_0002a514();
      if (iVar1 != 0) {
        puVar2 = (uint *)(param_2 + -4 + iVar3 * 0x400);
        do {
          puVar2 = puVar2 + 1;
          iVar4 = iVar4 + 1;
          if (param4 < *puVar2) {
            param4 = *puVar2;
          }
        } while (iVar1 != iVar4);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  if (4 < DAT_000be63c) {
    snprintf(acStack_2018,0x2000,"chain = %d, freq_max = %d\n",param_1,param4);
    FUN_0004948c(4,acStack_2018,0);
  }
  return param4;
}


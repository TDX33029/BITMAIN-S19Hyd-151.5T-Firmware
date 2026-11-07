// FUN_00056774 @ 00056774  size=148  callers=31
// program: bmminer


undefined4 FUN_00056774(undefined4 param_1,char *param_2,int param_3)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    iVar3 = FUN_0005578c(param_2,sVar2);
    if (iVar3 != 0) {
      uVar4 = FUN_000565cc(param_1,param_2,param_3);
      return uVar4;
    }
  }
  if ((param_3 != 0) && (*(int *)(param_3 + 4) != -1)) {
    piVar5 = (int *)(param_3 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      FUN_0005630c(param_3);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


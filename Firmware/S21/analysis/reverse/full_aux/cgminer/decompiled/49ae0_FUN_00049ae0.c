// FUN_00049ae0 @ 00049ae0  size=224  callers=0
// program: cgminer


undefined4 FUN_00049ae0(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0 || param_2 == (int *)0x0)) || (*param_2 != 0)) {
    return 0xffffffff;
  }
  iVar2 = FUN_00046898(param_2 + 2);
  if (iVar2 != 0) {
    while (iVar2 = FUN_00046928(), iVar2 != 0) {
      iVar3 = FUN_00046930(iVar2 + -0x10);
      piVar4 = (int *)(iVar3 + 4);
      if (iVar3 == 0) {
        return 0;
      }
      if (*(int *)(iVar3 + 4) != -1) {
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = *piVar4 + 1;
        DataMemoryBarrier(0xb);
      }
      iVar3 = FUN_000498a4(param_1,iVar2);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      if (*param_2 != 0) {
        return 0;
      }
      iVar2 = FUN_00046910(param_2 + 2,iVar2 + -0x10);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 0;
}


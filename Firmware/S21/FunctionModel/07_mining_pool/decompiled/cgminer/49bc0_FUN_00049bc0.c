// FUN_00049bc0 @ 00049bc0  size=240  callers=0
// program: cgminer


undefined4 FUN_00049bc0(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0 || param_2 == (int *)0x0)) || (*param_2 != 0)) {
    return 0xffffffff;
  }
  iVar2 = FUN_00046898(param_2 + 2);
  if (iVar2 != 0) {
    while (iVar2 = FUN_00046928(), iVar2 != 0) {
      iVar4 = FUN_00046930(iVar2 + -0x10);
      if (iVar4 == 0) {
        return 0;
      }
      iVar3 = FUN_00048cac(param_1,iVar2);
      if (iVar3 != 0) {
        piVar5 = (int *)(iVar4 + 4);
        if (*(int *)(iVar4 + 4) != -1) {
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = *piVar5 + 1;
          DataMemoryBarrier(0xb);
        }
        FUN_000498a4(param_1,iVar2,iVar4);
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


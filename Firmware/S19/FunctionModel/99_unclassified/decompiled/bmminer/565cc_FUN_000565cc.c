// FUN_000565cc @ 000565cc  size=188  callers=7
// program: bmminer


undefined4 FUN_000565cc(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (param_3 != (int *)0x0) {
    if ((param_1 == (int *)0x0 || param_2 == 0) || (*param_1 != 0 || param_3 == param_1)) {
      if (param_3[1] == -1) {
        return 0xffffffff;
      }
      piVar3 = param_3 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3 + -1;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2;
    }
    else {
      iVar2 = FUN_00053154(param_1 + 2);
      if (iVar2 == 0) {
        return 0;
      }
      if (param_3[1] == -1) {
        return 0xffffffff;
      }
      piVar3 = param_3 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3 + -1;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2;
    }
    if (iVar2 == 0) {
      FUN_0005630c(param_3);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


// FUN_00d31d00 @ 00d31d00 size=268 calls_out=7 calls_in=2
// strings: 

void FUN_00d31d00(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 == 1) {
    iVar3 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar3 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar3 != 0) {
      FUN_01443048(iVar3,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x102) != '\x03') {
    if (*(char *)((int)param_1 + 0x102) == '\0') {
      FUN_00d31ec0(param_1 + 0xe);
      FUN_00d32150(param_1 + 0x3f);
      return;
    }
    return;
  }
  if (*(char *)((int)param_1 + 0xf9) == '\0') {
    piVar4 = param_1 + 0x26;
  }
  else {
    if (*(char *)((int)param_1 + 0xf9) != '\x03') goto LAB_00d31dfc;
    piVar4 = param_1 + 0x1a;
    if ((char)param_1[0x36] == '\x03') {
      FUN_00f2bf28(param_1 + 0x33);
      if (param_1[0x33] == 0) {
        FUN_00d31fd8(param_1 + 0x34);
      }
      piVar2 = (int *)param_1[0x35];
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0118218c(param_1[0x35]);
        }
      }
    }
    FUN_00d32078(param_1 + 0x37);
  }
  FUN_00d31ec0(piVar4);
LAB_00d31dfc:
  *(undefined2 *)(param_1 + 0x40) = 0;
  return;
}


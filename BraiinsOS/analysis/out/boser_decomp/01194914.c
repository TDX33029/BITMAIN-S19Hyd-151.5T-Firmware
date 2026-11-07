// FUN_01194914 @ 01194914 size=180 calls_out=4 calls_in=2
// strings: 

void FUN_01194914(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    if ((char)param_1[0x4c] == '\x03') {
      FUN_011949c8(param_1 + 0x10);
      return;
    }
    if ((char)param_1[0x4c] != '\0') {
      return;
    }
    piVar2 = (int *)param_1[0xd];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[0xd],param_1[0xe]);
    }
    piVar2 = (int *)param_1[0xf];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0xf]);
    }
    if (1 < param_1[1] - 1U) {
      FUN_00f58dd0(param_1 + 2);
      return;
    }
  }
  return;
}


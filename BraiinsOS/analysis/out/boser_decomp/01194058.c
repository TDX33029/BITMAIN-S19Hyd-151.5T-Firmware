// FUN_01194058 @ 01194058 size=176 calls_out=4 calls_in=2
// strings: 

void FUN_01194058(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    if ((char)param_1[0x40] == '\x03') {
      FUN_01194174(param_1 + 10);
      return;
    }
    if ((char)param_1[0x40] != '\0') {
      return;
    }
    piVar2 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[7],param_1[8]);
    }
    piVar2 = (int *)param_1[9];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[9]);
    }
    if (param_1[1] != 0) {
      FUN_019bb7e0(param_1[2],param_1[3]);
      return;
    }
  }
  return;
}


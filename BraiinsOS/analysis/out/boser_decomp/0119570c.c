// FUN_0119570c @ 0119570c size=228 calls_out=4 calls_in=2
// strings: 

void FUN_0119570c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((char)param_1[0x3c] == '\0') {
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
    iVar3 = 4;
    if (*param_1 != -0x80000000) {
      FUN_019bb7e0(*param_1,param_1[1]);
      iVar3 = 0xc;
    }
    FUN_019bb7e0(*(undefined4 *)((int)param_1 + iVar3),((undefined4 *)((int)param_1 + iVar3))[1]);
    return;
  }
  if ((char)param_1[0x3c] == '\x03') {
    FUN_00b9695c(param_1 + 0x16);
    *(undefined1 *)((int)param_1 + 0xf1) = 0;
    return;
  }
  return;
}


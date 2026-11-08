// FUN_01195664 @ 01195664 size=168 calls_out=3 calls_in=2
// strings: 

void FUN_01195664(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*param_1 == 0) {
    return;
  }
  if ((char)param_1[0x4e] == '\x03') {
    FUN_0119570c(param_1 + 0x11);
    return;
  }
  if ((char)param_1[0x4e] != '\0') {
    return;
  }
  piVar2 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[0xe],param_1[0xf]);
  }
  piVar2 = (int *)param_1[0x10];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x10]);
  }
  iVar3 = param_1[1];
  iVar4 = 4;
  if (iVar3 != -0x80000000) {
    FUN_019bb7e0(iVar3,param_1[2]);
    iVar4 = 0xc;
  }
  puVar5 = (undefined4 *)((int)(param_1 + 1) + iVar4);
  FUN_019bb7e0(*puVar5,puVar5[1]);
  return;
}


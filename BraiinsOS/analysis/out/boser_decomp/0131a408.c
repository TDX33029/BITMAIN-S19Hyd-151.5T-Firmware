// FUN_0131a408 @ 0131a408 size=272 calls_out=5 calls_in=5
// strings: 

void FUN_0131a408(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *local_14;
  
  param_1[0x104] = 1;
  uVar2 = param_1[0x103];
  local_14 = param_1;
  if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01cf3c80);
  }
  param_1[0x103] = uVar2 + 1;
  if (uVar2 == 0) {
    param_1[0x108] = *(uint *)(param_1[1] + 0x60) | 1;
    DataMemoryBarrier(0xb);
    uVar2 = param_1[0x105];
    param_1[0x105] = uVar2 + 1;
    if ((uVar2 & 0x7f) == 0) {
      FUN_0131a1c4(param_1[1] + 0x20,&local_14);
    }
  }
  FUN_0131a060(param_1[1] + 0x20,param_1 + 2);
  uVar2 = param_1[0x103];
  param_1[0x103] = uVar2 - 1;
  if (uVar2 - 1 == 0) {
    DataMemoryBarrier(0xb);
    param_1[0x108] = 0;
    if (param_1[0x104] == 0) {
      FUN_0131a408(param_1);
    }
  }
  piVar3 = (int *)param_1[1];
  param_1[0x104] = 0;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 | 1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0131aa24();
  }
  return;
}


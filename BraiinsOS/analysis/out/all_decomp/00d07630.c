// FUN_00d07630 @ 00d07630 size=276 calls_out=5 calls_in=4
// strings: 

undefined4 FUN_00d07630(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (*(int *)(iVar4 + 0xa4) == 0) {
    return param_2;
  }
  piVar3 = (int *)(iVar4 + 0x98);
  if (*piVar3 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (bVar1) {
      *piVar3 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_00d0766c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(piVar3);
LAB_00d0766c:
  FUN_0128236c(piVar3);
  FUN_0128236c((uint)piVar3 | 1);
  piVar2 = (int *)(iVar4 + 0xa0);
  *(char *)(iVar4 + 0x9c) = (char)param_2;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 2;
  FUN_01282570(piVar3);
  FUN_01282570((uint)piVar3 | 1);
  if (*piVar3 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      if (bVar1) {
        *piVar3 = 0;
        goto LAB_00d076e8;
      }
    } while (*piVar3 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(piVar3);
LAB_00d076e8:
  FUN_0163b708(iVar4 + 8);
  FUN_0163b708(iVar4 + 0x18);
  FUN_0163b708(iVar4 + 0x28);
  FUN_0163b708(iVar4 + 0x38);
  FUN_0163b708(iVar4 + 0x48);
  FUN_0163b708(iVar4 + 0x58);
  FUN_0163b708(iVar4 + 0x68);
  FUN_0163b708(iVar4 + 0x78);
  return 3;
}


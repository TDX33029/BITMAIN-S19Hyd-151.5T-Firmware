// FUN_0074e5c4 @ 0074e5c4 size=400 calls_out=6 calls_in=3
// strings: 

undefined8 FUN_0074e5c4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar4 = *param_1;
  if (*(int *)(iVar4 + 0xa8) == 0) goto LAB_0074e740;
  piVar3 = (int *)(iVar4 + 0x98);
  if (*piVar3 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (!bVar1) goto LAB_0074e608;
    *piVar3 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0074e608:
    FUN_0127e06c(piVar3);
  }
  FUN_0128236c(piVar3);
  FUN_0128236c((uint)piVar3 | 1);
  piVar5 = *(int **)(iVar4 + 0x9c);
  uVar6 = *(undefined4 *)(iVar4 + 0xa0);
  piVar2 = (int *)(iVar4 + 0xa4);
  *(undefined4 *)(iVar4 + 0x9c) = param_2;
  *(undefined4 *)(iVar4 + 0xa0) = param_3;
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
        goto LAB_0074e6ac;
      }
    } while (*piVar3 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(piVar3);
LAB_0074e6ac:
  FUN_0163b708(iVar4 + 8);
  FUN_0163b708(iVar4 + 0x18);
  FUN_0163b708(iVar4 + 0x28);
  FUN_0163b708(iVar4 + 0x38);
  FUN_0163b708(iVar4 + 0x48);
  FUN_0163b708(iVar4 + 0x58);
  FUN_0163b708(iVar4 + 0x68);
  FUN_0163b708(iVar4 + 0x78);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar4 + -1;
  param_2 = 0;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(piVar5,uVar6);
  }
LAB_0074e740:
  return CONCAT44(param_3,param_2);
}


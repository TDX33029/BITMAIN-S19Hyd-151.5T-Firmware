// FUN_00d07744 @ 00d07744 size=348 calls_out=5 calls_in=1
// strings: 

void FUN_00d07744(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar6 = *param_2;
  if (*(int *)(iVar6 + 0xbc) == 0) {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = param_3[4];
    uVar9 = param_3[5];
    *param_1 = *param_3;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar7;
    param_1[4] = uVar8;
    param_1[5] = uVar9;
    return;
  }
  piVar5 = (int *)(iVar6 + 0x88);
  uVar3 = *param_3;
  uVar10 = param_3[1];
  uVar4 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[4];
  uVar9 = param_3[5];
  if (*piVar5 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar5);
    if (bVar1) {
      *piVar5 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_00d07794;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(piVar5);
LAB_00d07794:
  FUN_0128236c(piVar5);
  FUN_0128236c((uint)piVar5 | 1);
  *(undefined4 *)(iVar6 + 0x90) = uVar3;
  piVar2 = (int *)(iVar6 + 0xb8);
  *(undefined4 *)(iVar6 + 0xa4) = uVar9;
  *(undefined4 *)(iVar6 + 0xa0) = uVar8;
  *(undefined4 *)(iVar6 + 0x9c) = uVar7;
  *(undefined4 *)(iVar6 + 0x98) = uVar4;
  *(undefined4 *)(iVar6 + 0x94) = uVar10;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 2;
  FUN_01282570(piVar5);
  FUN_01282570((uint)piVar5 | 1);
  if (*piVar5 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar5);
      if (bVar1) {
        *piVar5 = 0;
        goto LAB_00d07828;
      }
    } while (*piVar5 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(piVar5);
LAB_00d07828:
  FUN_0163b708(iVar6 + 8);
  FUN_0163b708(iVar6 + 0x18);
  FUN_0163b708(iVar6 + 0x28);
  FUN_0163b708(iVar6 + 0x38);
  FUN_0163b708(iVar6 + 0x48);
  FUN_0163b708(iVar6 + 0x58);
  FUN_0163b708(iVar6 + 0x68);
  FUN_0163b708(iVar6 + 0x78);
  *param_1 = 0xb;
  param_1[1] = 0;
  return;
}


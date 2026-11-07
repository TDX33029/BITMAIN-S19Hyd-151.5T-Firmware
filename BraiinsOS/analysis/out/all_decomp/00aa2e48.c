// FUN_00aa2e48 @ 00aa2e48 size=364 calls_out=5 calls_in=1
// strings: 

void FUN_00aa2e48(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  piVar7 = (int *)(param_2 + 0x98);
  if (*piVar7 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar7);
    if (bVar1) {
      *piVar7 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_00aa2e88;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(piVar7);
LAB_00aa2e88:
  FUN_0128236c(piVar7);
  FUN_0128236c((uint)piVar7 | 1);
  uVar6 = *param_3;
  *param_3 = *(undefined4 *)(param_2 + 0x9c);
  uVar8 = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_2 + 0xa0) = param_3[1];
  uVar5 = param_3[4];
  param_3[4] = *(undefined4 *)(param_2 + 0xac);
  uVar9 = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_2 + 0xa8) = param_3[3];
  uVar3 = param_3[5];
  param_3[5] = *(undefined4 *)(param_2 + 0xb0);
  piVar2 = (int *)(param_2 + 0xb4);
  uVar10 = *(undefined4 *)(param_2 + 0xa4);
  uVar4 = param_3[2];
  *(undefined4 *)(param_2 + 0x9c) = uVar6;
  param_3[1] = uVar8;
  *(undefined4 *)(param_2 + 0xa4) = uVar4;
  param_3[2] = uVar10;
  param_3[3] = uVar9;
  *(undefined4 *)(param_2 + 0xac) = uVar5;
  *(undefined4 *)(param_2 + 0xb0) = uVar3;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 2;
  FUN_01282570(piVar7);
  FUN_01282570((uint)piVar7 | 1);
  if (*piVar7 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar7);
      if (bVar1) {
        *piVar7 = 0;
        goto LAB_00aa2f60;
      }
    } while (*piVar7 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(piVar7);
LAB_00aa2f60:
  FUN_0163b708(param_2 + 8);
  FUN_0163b708(param_2 + 0x18);
  FUN_0163b708(param_2 + 0x28);
  FUN_0163b708(param_2 + 0x38);
  FUN_0163b708(param_2 + 0x48);
  FUN_0163b708(param_2 + 0x58);
  FUN_0163b708(param_2 + 0x68);
  FUN_0163b708(param_2 + 0x78);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar8 = param_3[5];
  *param_1 = *param_3;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar8;
  return;
}


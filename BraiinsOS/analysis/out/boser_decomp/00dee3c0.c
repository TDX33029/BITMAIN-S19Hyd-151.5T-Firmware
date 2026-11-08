// FUN_00dee3c0 @ 00dee3c0 size=236 calls_out=7 calls_in=1
// strings: 

void FUN_00dee3c0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  piVar4 = (int *)*param_1;
  piVar2 = piVar4 + 0x11;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_009d3b04(piVar4 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a96a44(*param_1);
  }
  FUN_005fc298(param_1[1]);
  FUN_011e82d8(param_1[2]);
  FUN_012104a4(param_1[3]);
  FUN_011e8374(param_1[4]);
  piVar2 = (int *)param_1[5];
  piVar4 = piVar2 + 0x12;
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_01203574(piVar2 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar2[0xd] != -0x80000000) {
    FUN_009d4488();
  }
  FUN_0132b958(piVar2[4],piVar2[5],4,0x28,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  FUN_009d4488(piVar2 + 8);
  if (piVar2 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar4 = piVar2 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar2);
    return;
  }
  return;
}


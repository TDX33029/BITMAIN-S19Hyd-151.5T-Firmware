// FUN_011e8374 @ 011e8374 size=96 calls_out=1 calls_in=5
// strings: 

void FUN_011e8374(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  piVar2 = param_1 + 0x11;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_01203574(param_1 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1[0xd] != -0x80000000) {
    FUN_009d4488();
  }
  FUN_0132b958(param_1[4],param_1[5],4,0x28,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  FUN_009d4488(param_1 + 8);
  if (param_1 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar2 = param_1 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}


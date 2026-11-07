// FUN_01830480 @ 01830480 size=272 calls_out=8 calls_in=0
// strings: 

void FUN_01830480(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  piVar2 = (int *)param_1[0x2e];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018537bc(param_1[0x2e]);
  }
  if (*param_1 != 3 || param_1[1] != 0) {
    if ((9 < *(byte *)(param_1 + 0x27)) && (param_1[0x29] != 0)) {
      thunk_FUN_01be4678(param_1[0x28]);
    }
    FUN_019bb7e0(param_1[0x14],param_1[0x15]);
    FUN_017793c0(param_1);
    if (param_1[0x22] != 0) {
      FUN_0182e3a0(param_1 + 0x23);
    }
    FUN_0178e884(param_1[0x2c]);
    return;
  }
  piVar2 = (int *)param_1[2];
  if (((short)piVar2[0x12] == 3) && (piVar2[0x13] != 0)) {
    (**(code **)(piVar2[0x13] + 0x10))
              (piVar2 + 0x16,piVar2[0x14],piVar2[0x15],piVar2[0x15],unaff_r4,unaff_r5,unaff_r11,
               unaff_lr);
  }
  if (piVar2[0x17] != 0) {
    FUN_01443048(piVar2[0x17],piVar2[0x18]);
  }
  if (*piVar2 != 2) {
    FUN_019bb7e0(piVar2[4],piVar2[5]);
  }
  thunk_FUN_01be4678(piVar2);
  return;
}


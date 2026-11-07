// FUN_017c2d1c @ 017c2d1c size=172 calls_out=4 calls_in=3
// strings: 

void FUN_017c2d1c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    param_1 = param_1 + 2;
  }
  else {
    if ((undefined1 *)param_1[0xd8] != &DAT_3b9aca00) {
      FUN_01771d60(param_1[0xde]);
    }
    piVar2 = (int *)param_1[0xe0];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01436864(param_1[0xe0]);
    }
  }
  FUN_017f85f4(param_1[0xa4] + 8,param_1[0xa5] + 8,1);
  FUN_017c2e44(param_1);
  if (param_1[0xa6] != 0) {
    (**(code **)(param_1[0xa6] + 0x10))
              (param_1 + 0xa9,param_1[0xa7],param_1[0xa8],param_1[0xa8],unaff_r4,unaff_r5,unaff_r11,
               unaff_lr);
  }
  if (param_1[0x8d] != 0) {
    (**(code **)(param_1[0x8d] + 0x10))(param_1 + 0x90,param_1[0x8e],param_1[0x8f]);
  }
  FUN_0172f388(param_1 + 0x9c);
  FUN_01772fe4(param_1 + 0xa4);
  FUN_01822488(param_1 + 0x94);
  return;
}


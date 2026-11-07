// FUN_00f1e998 @ 00f1e998 size=148 calls_out=1 calls_in=1
// strings: 

void FUN_00f1e998(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar3 = 0x15;
  if ((int)*param_2 < 0) {
    uVar3 = *param_2 ^ 0x80000000;
  }
  uVar2 = 0;
  uVar1 = param_4;
  if (uVar3 != 0x10) {
    if (uVar3 == 0x11) {
      param_2 = (uint *)param_2[1];
    }
    else {
      uVar1 = param_4;
      if (uVar3 == 0x12) goto LAB_00f1ea08;
    }
    FUN_00fe4d8c(&local_20,param_2);
    uVar2 = 1;
    uVar4 = 1;
    if (local_20 != 0) {
      uVar2 = 2;
    }
    uVar1 = local_1c;
    unaff_r5 = local_14;
    unaff_r6 = local_18;
    if (uVar2 == 2) goto LAB_00f1ea20;
  }
LAB_00f1ea08:
  local_1c = uVar1;
  uVar4 = 0;
  param_1[2] = unaff_r6;
  if ((uVar2 & 1) == 0) {
    local_1c = 0;
    unaff_r5 = 0;
  }
  param_1[3] = unaff_r5;
LAB_00f1ea20:
  *param_1 = uVar4;
  param_1[1] = local_1c;
  return;
}


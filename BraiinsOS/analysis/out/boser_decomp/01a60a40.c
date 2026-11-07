// FUN_01a60a40 @ 01a60a40 size=240 calls_out=1 calls_in=1
// strings: 

void FUN_01a60a40(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *extraout_r1;
  uint uVar3;
  undefined4 uVar4;
  uint unaff_r8;
  uint *unaff_r9;
  undefined4 local_2c;
  uint local_28;
  uint *local_24;
  
  uVar1 = *param_2;
  if (uVar1 == 0x80000003) {
    puVar2 = param_2;
    uVar4 = 0x80000003;
  }
  else {
    puVar2 = (uint *)&DAT_00000001;
    if ((int)uVar1 < 0) {
      puVar2 = (uint *)(uVar1 ^ 0x80000000);
    }
    if (puVar2 == (uint *)0x0) {
      uVar4 = 0x80000000;
    }
    else if (puVar2 == (uint *)&DAT_00000001) {
      FUN_006666fc(&local_2c,param_2[1],param_2[2]);
      puVar2 = extraout_r1;
      uVar4 = local_2c;
      unaff_r8 = local_28;
      unaff_r9 = local_24;
    }
    else {
      unaff_r8 = param_2[1];
      unaff_r9 = (uint *)param_2[2];
      uVar4 = 0x80000002;
    }
  }
  uVar1 = param_2[3];
  if (uVar1 == 0x80000003) {
    local_28 = 0x80000003;
    local_24 = puVar2;
    local_2c = 0x80000003;
  }
  else {
    uVar3 = 1;
    if ((int)uVar1 < 0) {
      uVar3 = uVar1 ^ 0x80000000;
    }
    if (uVar3 == 0) {
      local_2c = 0x80000000;
    }
    else if (uVar3 == 1) {
      FUN_006666fc(&local_2c,param_2[4],param_2[5]);
    }
    else {
      local_28 = param_2[4];
      local_24 = (uint *)param_2[5];
      local_2c = 0x80000002;
    }
  }
  *param_1 = uVar4;
  param_1[1] = unaff_r8;
  param_1[2] = unaff_r9;
  param_1[3] = local_2c;
  param_1[4] = local_28;
  param_1[5] = local_24;
  return;
}


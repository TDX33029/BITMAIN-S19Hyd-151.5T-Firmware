// FUN_01a60910 @ 01a60910 size=232 calls_out=2 calls_in=14
// strings: 

void FUN_01a60910(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_r7;
  undefined4 uVar3;
  undefined4 unaff_r11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_006666fc(&local_68,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  uVar1 = *(uint *)(param_2 + 0xc);
  if (uVar1 == 0x80000003) {
    uVar3 = 0x80000003;
  }
  else {
    uVar2 = 1;
    if ((int)uVar1 < 0) {
      uVar2 = uVar1 ^ 0x80000000;
    }
    if (uVar2 == 0) {
      uVar3 = 0x80000000;
    }
    else if (uVar2 == 1) {
      FUN_006666fc(&local_40,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
      unaff_r7 = local_3c;
      uVar3 = local_40;
      unaff_r11 = local_38;
    }
    else {
      unaff_r7 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = 0x80000002;
      unaff_r11 = *(undefined4 *)(param_2 + 0x14);
    }
  }
  FUN_01a60a40(&local_58,param_2 + 0x18);
  FUN_01a60a40(&local_40,param_2 + 0x30);
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  param_1[3] = uVar3;
  param_1[4] = unaff_r7;
  param_1[5] = unaff_r11;
  param_1[6] = local_58;
  param_1[7] = uStack_54;
  param_1[8] = uStack_50;
  param_1[9] = uStack_4c;
  param_1[10] = uStack_48;
  param_1[0xb] = uStack_44;
  param_1[0xc] = local_40;
  param_1[0xd] = local_3c;
  param_1[0xe] = local_38;
  param_1[0xf] = uStack_34;
  param_1[0x10] = uStack_30;
  param_1[0x11] = uStack_2c;
  return;
}


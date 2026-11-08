// FUN_00ecce24 @ 00ecce24 size=232 calls_out=1 calls_in=1
// strings: 

void FUN_00ecce24(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_006666fc(&local_58,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  FUN_006666fc(&local_48,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  if (*(int *)(param_2 + 0x18) == -0x80000000) {
    local_38 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_38,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  }
  if (*(int *)(param_2 + 0x24) == -0x80000000) {
    local_28 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_28,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  }
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = local_48;
  param_1[4] = uStack_44;
  param_1[5] = uStack_40;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  param_1[8] = uStack_30;
  param_1[9] = local_28;
  param_1[10] = uStack_24;
  param_1[0xb] = uStack_20;
  return;
}


// FUN_0067a738 @ 0067a738 size=412 calls_out=1 calls_in=2
// strings: 

void FUN_0067a738(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 *param_4,
                 int *param_5,undefined4 *param_6,int *param_7,undefined4 *param_8,int *param_9,
                 undefined4 *param_10,undefined4 *param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*param_5 == -0x80000000) {
    local_58 = 0x80000000;
  }
  else {
    FUN_0067a9c4(&local_58,param_5,0x100);
  }
  local_30 = *param_7;
  if (local_30 == -0x80000000) {
    local_48 = 0x80000000;
  }
  else {
    local_2c = param_7[1];
    local_28 = param_7[2];
    FUN_0067a9c4(&local_48,&local_30,0x100);
  }
  iVar5 = *param_9;
  iVar4 = param_9[1];
  local_30 = param_9[2];
  if (iVar5 != 2) {
    if (local_30 == -0x80000000) {
      local_30 = -0x80000000;
    }
    else {
      local_2c = param_9[3];
      local_28 = param_9[4];
      FUN_0067a9c4(&local_3c,&local_30,0x100);
      local_6c = local_38;
      local_70 = local_34;
      local_30 = local_3c;
    }
  }
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  param_1[0xe] = *param_4;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  param_1[0x11] = local_58;
  param_1[0x12] = uStack_54;
  param_1[0x13] = uStack_50;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  param_1[4] = *param_6;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[0x14] = local_48;
  param_1[0x15] = uStack_44;
  param_1[0x16] = uStack_40;
  uVar1 = param_8[1];
  uVar2 = param_8[2];
  param_1[0x17] = *param_8;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar2;
  *(undefined1 *)(param_1 + 0x20) = param_2;
  param_1[0xb] = local_6c;
  param_1[0xc] = local_70;
  param_1[8] = iVar5;
  param_1[9] = iVar4;
  param_1[10] = local_30;
  param_1[0xd] = param_3;
  uVar1 = param_10[1];
  uVar2 = param_10[2];
  param_1[0x1a] = *param_10;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar2;
  uVar1 = param_11[1];
  uVar2 = param_11[2];
  param_1[0x1d] = *param_11;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = uVar2;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


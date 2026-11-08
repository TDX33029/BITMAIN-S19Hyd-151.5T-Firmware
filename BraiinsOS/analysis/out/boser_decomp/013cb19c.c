// FUN_013cb19c @ 013cb19c size=120 calls_out=2 calls_in=2
// strings: 

void FUN_013cb19c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int local_60 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_01664e80(local_60);
  if (local_60[0] == 1) {
    uVar2 = param_1[0xc];
    iVar1 = param_1[0xd];
  }
  else {
    uVar2 = param_1[0xc];
    iVar1 = param_1[0xd];
    *param_1 = local_58;
    param_1[1] = uStack_54;
    param_1[2] = uStack_50;
    param_1[3] = uStack_4c;
    param_1[4] = uStack_48;
    param_1[5] = uStack_44;
    param_1[6] = local_40;
    param_1[7] = uStack_3c;
    param_1[8] = uStack_38;
    param_1[9] = uStack_34;
    param_1[10] = uStack_30;
    param_1[0xb] = uStack_2c;
  }
  param_1[0xe] = uVar2 - 0x100;
  param_1[0xf] = iVar1 - (uint)(uVar2 < 0x100);
  FUN_007a4e7c(param_1,param_2);
  return;
}


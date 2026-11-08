// FUN_016da298 @ 016da298 size=148 calls_out=4 calls_in=1
// strings: 

void FUN_016da298(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_016d4a28(param_2);
  if (iVar1 == 0x5c) {
    FUN_016d513c(param_1,param_2);
    return;
  }
  FUN_016d4f3c(&uStack_48,param_2);
  uVar2 = FUN_016d4a28(param_2);
  local_30 = local_30 & 0xffffff00;
  FUN_016d4fe8(param_2);
  param_1[1] = 0x80000002;
  param_1[2] = uVar2;
  param_1[3] = uStack_48;
  param_1[4] = uStack_44;
  param_1[5] = local_40;
  param_1[6] = uStack_3c;
  param_1[7] = uStack_38;
  param_1[8] = uStack_34;
  param_1[9] = local_30;
  param_1[10] = local_2c;
  param_1[0xb] = uStack_28;
  param_1[0xc] = uStack_24;
  param_1[0xd] = uStack_20;
  param_1[0xe] = uStack_1c;
  *param_1 = 0x22;
  return;
}


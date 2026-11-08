// FUN_0133eb98 @ 0133eb98 size=208 calls_out=2 calls_in=3
// strings: 

void FUN_0133eb98(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  iVar1 = FUN_0100fa18(&local_48,0x20);
  if (iVar1 == 0) {
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    param_1[3] = local_3c;
    param_1[4] = local_38;
    param_1[5] = local_34;
    param_1[6] = local_30;
    param_1[7] = local_2c;
    param_1[0xe] = param_1[0xc];
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xf] = param_1[0xd];
  }
  uVar2 = param_1[0xc];
  param_1[0x10] = param_3;
  param_1[0xe] = uVar2 - 0x100;
  param_1[0xf] = param_1[0xd] - (uint)(uVar2 < 0x100);
  FUN_0133db84(param_1,param_2);
  return;
}


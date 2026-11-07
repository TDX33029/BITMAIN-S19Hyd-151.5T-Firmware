// FUN_010e6ad8 @ 010e6ad8 size=232 calls_out=3 calls_in=0
// strings: 

void FUN_010e6ad8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  puVar2 = (undefined4 *)*param_2;
  uStack_28 = 1;
  if ((uint)(param_2[1] - (int)puVar2) < 4) {
    param_1[1] = 0x80000005;
    param_1[2] = puVar2;
    param_1[3] = 4;
    *param_1 = 1;
    return;
  }
  local_24 = -0x7ffffffb;
  puStack_2c = param_2;
  FUN_00f2cc28(&local_24);
  uVar1 = *puVar2;
  *param_2 = puVar2 + 1;
  FUN_010e1aa0(&local_24,&puStack_2c);
  if (local_24 != -0x7ffffff6) {
    param_1[1] = local_24;
    param_1[2] = local_20;
    param_1[3] = local_1c;
    *param_1 = 1;
    return;
  }
  if (local_20 == 0) {
    FUN_01613578(param_1 + 1,1,&DAT_01885c30,&DAT_018ab990);
    *param_1 = 1;
    return;
  }
  param_1[3] = uVar1;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  *param_1 = 0;
  return;
}


// FUN_0093f420 @ 0093f420 size=204 calls_out=2 calls_in=1
// strings: 

void FUN_0093f420(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  FUN_016716cc(&local_5c);
  FUN_0094af0c(&local_50,param_2);
  if (local_50 == 2) {
    *param_1 = 2;
    param_1[1] = local_4c;
    param_1[2] = uStack_48;
    param_1[3] = uStack_44;
    return;
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = local_3c;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  param_1[8] = uStack_30;
  param_1[9] = uStack_2c;
  param_1[10] = uStack_28;
  param_1[0xb] = uStack_24;
  if (*param_1 != 2) {
    local_50 = param_1[1];
    local_4c = param_1[2];
    uVar1 = 1;
    if ((*param_1 & 1) == 0) {
      local_4c = local_54;
      local_50 = local_58;
      uVar1 = local_5c;
    }
    *param_1 = uVar1;
    param_1[1] = local_50;
    param_1[2] = local_4c;
    param_1[3] = param_1[3];
    param_1[4] = param_1[4];
    param_1[5] = param_1[5];
    param_1[6] = param_1[6];
    param_1[7] = param_1[7];
    param_1[8] = param_1[8];
    param_1[9] = param_1[9];
    param_1[10] = param_1[10];
    param_1[0xb] = param_1[0xb];
  }
  return;
}


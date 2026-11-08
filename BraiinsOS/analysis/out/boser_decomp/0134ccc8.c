// FUN_0134ccc8 @ 0134ccc8 size=332 calls_out=4 calls_in=2
// strings: 

void FUN_0134ccc8(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uStack_5c;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  undefined1 *local_24;
  uint *local_20;
  undefined1 *local_1c;
  
  uVar1 = *param_2;
  FUN_01283fd8(&uStack_5c,param_2[2],param_3 + uVar1);
  *param_2 = 0;
  param_2[1] = 0;
  local_4c = uVar1;
  if (local_58 < uVar1) {
    local_40 = local_58;
    local_20 = &local_40;
    local_28 = &local_4c;
    local_1c = &LAB_01a6a304;
    local_24 = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005ac267,&local_28,&DAT_01d2bbe0);
  }
  FUN_01283ef4(&uStack_5c,uVar1);
  if ((local_50 & 1) == 0) {
    param_1[1] = uStack_5c;
    param_1[2] = local_58;
    param_1[3] = local_50;
    *param_1 = (uint)&DAT_01d2e520;
  }
  else {
    local_44 = local_58 + (local_50 >> 5);
    local_48 = uStack_5c - (local_50 >> 5);
    local_4c = local_54 + (local_50 >> 5);
    FUN_01283524(&local_40,&local_4c);
    local_30 = local_50 >> 5;
    if (local_38 < local_50 >> 5) {
      local_20 = &local_2c;
      local_2c = local_38;
      local_1c = &LAB_01a6a304;
      local_24 = &LAB_01a6a304;
      local_28 = &local_30;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_28,&DAT_01d2e534);
    }
    *param_1 = local_40;
    param_1[1] = local_3c + local_30;
    param_1[2] = local_38 - local_30;
    param_1[3] = uStack_34;
  }
  return;
}


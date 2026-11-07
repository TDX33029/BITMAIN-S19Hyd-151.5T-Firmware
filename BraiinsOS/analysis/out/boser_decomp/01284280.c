// FUN_01284280 @ 01284280 size=216 calls_out=3 calls_in=2
// strings: 

void FUN_01284280(undefined4 *param_1)

{
  int iStack_5c;
  int iStack_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  undefined4 uStack_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  undefined1 *local_24;
  uint *local_20;
  undefined1 *local_1c;
  
  FUN_01283fd8(&iStack_5c);
  if ((local_50 & 1) == 0) {
    param_1[1] = iStack_5c;
    param_1[2] = iStack_58;
    param_1[3] = local_50;
    *param_1 = &DAT_01d2e520;
  }
  else {
    local_44 = iStack_58 + (local_50 >> 5);
    local_48 = iStack_5c - (local_50 >> 5);
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


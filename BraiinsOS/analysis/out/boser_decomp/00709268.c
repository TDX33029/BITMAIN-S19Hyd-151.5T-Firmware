// FUN_00709268 @ 00709268 size=236 calls_out=3 calls_in=3
// strings: 

void FUN_00709268(undefined4 *param_1,int *param_2)

{
  uint uVar1;
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
  
  local_28 = (uint *)CONCAT31(local_28._1_3_,10);
  FUN_01284394(param_2,&local_28,1);
  uVar1 = param_2[3];
  local_44 = param_2[1];
  if ((uVar1 & 1) == 0) {
    param_1[1] = *param_2;
    param_1[2] = local_44;
    param_1[3] = uVar1;
    *param_1 = &DAT_01d2e520;
  }
  else {
    local_44 = local_44 + (uVar1 >> 5);
    local_48 = *param_2 - (uVar1 >> 5);
    local_4c = param_2[2] + (uVar1 >> 5);
    FUN_01283524(&local_40,&local_4c);
    local_30 = uVar1 >> 5;
    if (local_38 < uVar1 >> 5) {
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


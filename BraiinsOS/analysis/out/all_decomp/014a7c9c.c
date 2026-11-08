// FUN_014a7c9c @ 014a7c9c size=208 calls_out=3 calls_in=0
// strings: 

void FUN_014a7c9c(uint *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint local_1c;
  
  FUN_010b6d60(&local_60,param_2,*param_3);
  if ((local_60 & 7) == 4) {
    local_1c = local_58;
    puVar1 = (uint *)thunk_FUN_016d4a50(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    *puVar1 = local_58;
    *param_1 = 4;
    param_1[1] = 0;
    param_1[2] = (uint)puVar1;
    param_1[3] = (uint)&DAT_018a5314;
    return;
  }
  if (local_60 == 5) {
    *param_1 = 5;
    param_1[1] = 0;
    return;
  }
  if (local_60 == 6) {
    *param_1 = 6;
    param_1[1] = 0;
    return;
  }
  *param_1 = local_60;
  param_1[1] = uStack_5c;
  param_1[2] = local_58;
  param_1[3] = uStack_54;
  param_1[4] = uStack_50;
  param_1[5] = local_4c;
  param_1[6] = uStack_48;
  param_1[7] = uStack_44;
  param_1[8] = uStack_40;
  param_1[9] = uStack_3c;
  param_1[10] = local_38;
  param_1[0xb] = uStack_34;
  param_1[0xc] = uStack_30;
  param_1[0xd] = uStack_2c;
  param_1[0xe] = uStack_28;
  param_1[0xf] = uStack_24;
  return;
}


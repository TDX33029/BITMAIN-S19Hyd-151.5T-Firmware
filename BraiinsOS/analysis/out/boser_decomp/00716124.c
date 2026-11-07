// FUN_00716124 @ 00716124 size=152 calls_out=1 calls_in=0
// strings: 

void FUN_00716124(uint *param_1)

{
  uint uVar1;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  FUN_00715f4c(&local_58);
  if ((local_58 & 7) == 4) {
    *param_1 = 4;
    param_1[1] = 0;
    param_1[2] = local_50;
    param_1[3] = local_4c;
  }
  else {
    if (local_58 == 5) {
      uVar1 = 5;
    }
    else {
      if (local_58 != 6) {
        *param_1 = local_58;
        param_1[1] = uStack_54;
        param_1[2] = local_50;
        param_1[3] = local_4c;
        param_1[4] = uStack_48;
        param_1[5] = local_44;
        param_1[6] = uStack_40;
        param_1[7] = uStack_3c;
        param_1[8] = uStack_38;
        param_1[9] = uStack_34;
        param_1[10] = local_30;
        param_1[0xb] = uStack_2c;
        param_1[0xc] = uStack_28;
        param_1[0xd] = uStack_24;
        param_1[0xe] = uStack_20;
        param_1[0xf] = uStack_1c;
        return;
      }
      uVar1 = 6;
    }
    *param_1 = uVar1;
    param_1[1] = 0;
  }
  return;
}


// FUN_017f0d48 @ 017f0d48 size=316 calls_out=1 calls_in=0
// strings: 

void FUN_017f0d48(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  
  do {
    uVar1 = 0;
    if (param_2[10] != 0) {
      uVar1 = param_2[0xc];
    }
    if (param_2[10] != 0 && uVar1 != 0) {
      uVar2 = param_2[0xb];
      *param_1 = 0;
      param_1[1] = uVar2;
      param_1[2] = uVar1;
      return;
    }
    uVar1 = *param_2;
    *param_2 = 0;
    if ((uVar1 & 1) == 0) {
      FUN_017c2238(&local_38,param_2 + 5,param_3);
      if (local_38 == 2) {
        *param_1 = 2;
        return;
      }
      if ((local_38 & 1) == 0) {
        *param_1 = 0;
        param_1[1] = 1;
        param_1[2] = 0;
        return;
      }
    }
    else {
      local_38 = 1;
      local_34 = param_2[1];
      local_30 = param_2[2];
      local_2c = param_2[3];
      uStack_28 = param_2[4];
    }
    if (local_34 == 0) {
      *param_1 = 1;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      return;
    }
    uVar1 = param_2[10];
    if (uVar1 != 0) {
      (**(code **)(uVar1 + 0x10))(param_2 + 0xd,param_2[0xb],param_2[0xc]);
    }
    param_2[10] = local_34;
    param_2[0xb] = local_30;
    param_2[0xc] = local_2c;
    param_2[0xd] = uStack_28;
  } while( true );
}


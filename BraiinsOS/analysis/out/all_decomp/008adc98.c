// FUN_008adc98 @ 008adc98 size=404 calls_out=4 calls_in=2
// strings: 

void FUN_008adc98(uint *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_30 = param_2[3] + param_2[1];
  if (param_3 != 2) {
    local_30 = param_2[5] + local_30;
  }
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_30);
  }
  if (local_30 == 0) {
    local_2c = 1;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(local_30);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_30);
    }
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  local_28 = 0;
  if (local_30 < uVar4) {
    FUN_007f5a44(&local_30,0,uVar4,1,1);
  }
  uVar1 = local_28;
  uVar2 = local_2c;
  FUN_016dd1aa(local_2c + local_28,uVar3,uVar4);
  local_28 = uVar1 + uVar4;
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  if (local_30 - local_28 < uVar4) {
    FUN_007f5a44(&local_30,local_28,uVar4,1,1);
    uVar2 = local_2c;
  }
  uVar1 = local_28;
  FUN_016dd1aa(uVar2 + local_28,uVar3,uVar4);
  local_28 = uVar1 + uVar4;
  if (param_3 != 2) {
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    if (local_30 - local_28 < uVar4) {
      FUN_007f5a44(&local_30,local_28,uVar4,1,1);
      uVar2 = local_2c;
    }
    uVar1 = local_28;
    FUN_016dd1aa(uVar2 + local_28,uVar3,uVar4);
    local_28 = uVar1 + uVar4;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}


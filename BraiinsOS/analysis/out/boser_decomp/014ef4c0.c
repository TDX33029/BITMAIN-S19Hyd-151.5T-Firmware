// FUN_014ef4c0 @ 014ef4c0 size=268 calls_out=3 calls_in=3
// strings: 

void FUN_014ef4c0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = *param_2;
  uVar1 = 0x15;
  if ((int)uVar3 < 0) {
    uVar1 = uVar3 ^ 0x80000000;
  }
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      uVar1 = param_2[1];
      FUN_014f4240(&local_34);
      if (local_34 == 1) {
        param_1[1] = local_30;
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
        param_1[1] = local_30;
        param_1[2] = uStack_2c;
        param_1[3] = uStack_28;
      }
      *param_1 = uVar2;
      thunk_FUN_01be4678(uVar1);
      goto LAB_014ef5ac;
    }
    if (uVar1 != 0x12) {
      FUN_014f4240(&local_34,param_2);
      if (local_34 == 1) {
        param_1[1] = local_30;
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
        param_1[1] = local_30;
        param_1[2] = uStack_2c;
        param_1[3] = uStack_28;
      }
      *param_1 = uVar2;
      return;
    }
  }
  *param_1 = 0;
LAB_014ef5ac:
  if (uVar3 == 0x80000011) {
    return;
  }
  FUN_014c81b0(param_2);
  return;
}


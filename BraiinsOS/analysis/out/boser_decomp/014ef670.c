// FUN_014ef670 @ 014ef670 size=244 calls_out=4 calls_in=2
// strings: 

void FUN_014ef670(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int local_b0;
  undefined4 local_ac;
  
  uVar2 = *param_2;
  uVar1 = 0x15;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      uVar1 = param_2[1];
      FUN_014f13e8(&local_b0);
      if (local_b0 == 3) {
        *param_1 = 4;
        param_1[1] = local_ac;
      }
      else {
        FUN_01bed4e2(param_1,&local_b0,0x8c);
      }
      thunk_FUN_01be4678(uVar1);
      goto LAB_014ef744;
    }
    if (uVar1 != 0x12) {
      FUN_014f13e8(&local_b0,param_2);
      if (local_b0 == 3) {
        *param_1 = 4;
        param_1[1] = local_ac;
        return;
      }
      FUN_01bed4e2(param_1,&local_b0,0x8c);
      return;
    }
  }
  *param_1 = 3;
LAB_014ef744:
  if (uVar2 == 0x80000011) {
    return;
  }
  FUN_014c81b0(param_2);
  return;
}


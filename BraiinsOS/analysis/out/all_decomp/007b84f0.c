// FUN_007b84f0 @ 007b84f0 size=224 calls_out=4 calls_in=1
// strings: 

void FUN_007b84f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  if (uVar4 == uVar5) {
    uVar6 = param_2[2];
    uVar2 = param_2[3] - uVar4 >> 5;
  }
  else {
    uVar6 = param_2[2];
    uVar3 = param_2[3] - uVar5;
    uVar2 = uVar3 >> 5;
    if (uVar2 < uVar6 >> 1) {
      local_28 = 0;
      local_2c = 4;
      local_30 = 0;
      if (param_2[3] != uVar5) {
        FUN_006bca64(&local_30,0,uVar2,4,0x20);
      }
      uVar1 = local_28;
      FUN_016dd1aa(local_2c + local_28 * 0x20,uVar5,uVar3);
      local_28 = uVar1 + uVar2;
      if (uVar6 != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      return;
    }
    FUN_016dd52c(uVar4,uVar5,uVar3);
  }
  *param_1 = uVar6;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  return;
}


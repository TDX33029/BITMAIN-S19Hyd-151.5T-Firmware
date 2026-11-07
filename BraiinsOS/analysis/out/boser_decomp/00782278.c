// FUN_00782278 @ 00782278 size=224 calls_out=4 calls_in=2
// strings: 

void FUN_00782278(uint *param_1,uint *param_2)

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
        FUN_0132b898(&local_30,0,uVar2,4,0x20);
      }
      uVar1 = local_28;
      FUN_01bed4e2(local_2c + local_28 * 0x20,uVar5,uVar3);
      local_28 = uVar1 + uVar2;
      FUN_0134c054(uVar6,uVar4,4,0x20);
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      return;
    }
    FUN_01bed864(uVar4,uVar5,uVar3);
  }
  *param_1 = uVar6;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  return;
}


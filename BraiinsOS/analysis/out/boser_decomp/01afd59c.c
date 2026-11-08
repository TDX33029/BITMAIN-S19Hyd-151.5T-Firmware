// FUN_01afd59c @ 01afd59c size=128 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01afd59c(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  
  if ((uint)param_1[1] < param_3) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  pbVar5 = pbVar3 + param_3;
  param_1[1] = param_1[1] - param_3;
  *param_1 = pbVar5;
  uVar1 = 0;
  uVar4 = 0;
  do {
    pbVar2 = pbVar3 + 1;
    uVar4 = uVar4 << 8 | uVar1 >> 0x18;
    uVar1 = (uint)*pbVar3 | uVar1 << 8;
    pbVar3 = pbVar2;
  } while (pbVar5 != pbVar2);
  *param_2 = uVar1;
  param_2[1] = uVar4;
  return 1;
}


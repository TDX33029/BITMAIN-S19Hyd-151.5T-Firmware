// FUN_014a08d0 @ 014a08d0 size=248 calls_out=1 calls_in=3
// strings: 

uint * FUN_014a08d0(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_014a08d0(param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe,param_4);
    param_2 = (uint *)FUN_014a08d0(param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4);
    param_3 = (uint *)FUN_014a08d0(param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4);
  }
  uVar1 = *param_2;
  uVar3 = *param_1;
  bVar4 = uVar1 <= uVar3;
  if (uVar3 == uVar1) {
    bVar4 = param_2[1] <= param_1[1];
  }
  uVar2 = *param_3;
  bVar5 = uVar2 <= uVar3;
  if (uVar3 == uVar2) {
    bVar5 = param_3[1] <= param_1[1];
  }
  if (!bVar4 == !bVar5) {
    bVar5 = uVar2 <= uVar1;
    if (uVar1 == uVar2) {
      bVar5 = param_3[1] <= param_2[1];
    }
    param_1 = param_2;
    if (!bVar4 != !bVar5) {
      param_1 = param_3;
    }
  }
  return param_1;
}


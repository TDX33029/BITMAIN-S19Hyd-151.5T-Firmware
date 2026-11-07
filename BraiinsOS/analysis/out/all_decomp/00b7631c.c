// FUN_00b7631c @ 00b7631c size=236 calls_out=1 calls_in=5
// strings: 

uint * FUN_00b7631c(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (uint *)FUN_00b7631c(param_1,param_1 + param_4 * 0xc,param_1 + param_4 * 0x15,param_4)
    ;
    param_2 = (uint *)FUN_00b7631c(param_2,param_2 + param_4 * 0xc,param_2 + param_4 * 0x15,param_4)
    ;
    param_3 = (uint *)FUN_00b7631c(param_3,param_3 + param_4 * 0xc,param_3 + param_4 * 0x15,param_4)
    ;
  }
  uVar2 = *param_1;
  uVar3 = *param_2;
  bVar4 = uVar3 <= uVar2;
  if (uVar2 == uVar3) {
    bVar4 = param_2[1] <= param_1[1];
  }
  uVar1 = *param_3;
  bVar5 = uVar1 <= uVar2;
  if (uVar2 == uVar1) {
    bVar5 = param_3[1] <= param_1[1];
  }
  if (!bVar4 == !bVar5) {
    bVar5 = uVar1 <= uVar3;
    if (uVar3 == uVar1) {
      bVar5 = param_3[1] <= param_2[1];
    }
    param_1 = param_2;
    if (!bVar4 != !bVar5) {
      param_1 = param_3;
    }
  }
  return param_1;
}


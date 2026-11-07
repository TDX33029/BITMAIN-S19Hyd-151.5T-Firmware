// FUN_00b95520 @ 00b95520 size=236 calls_out=1 calls_in=4
// strings: 

uint * FUN_00b95520(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  if (7 < param_4) {
    uVar3 = param_4 >> 3;
    iVar2 = uVar3 * 8 - (param_4 >> 3);
    param_1 = (uint *)FUN_00b95520(param_1,param_1 + uVar3 * 8,param_1 + iVar2 * 2,uVar3);
    param_2 = (uint *)FUN_00b95520(param_2,param_2 + uVar3 * 8,param_2 + iVar2 * 2,uVar3);
    param_3 = (uint *)FUN_00b95520(param_3,param_3 + uVar3 * 8,param_3 + iVar2 * 2,uVar3);
  }
  uVar3 = *param_1;
  uVar4 = *param_2;
  bVar5 = uVar4 <= uVar3;
  if (uVar3 == uVar4) {
    bVar5 = param_2[1] <= param_1[1];
  }
  uVar1 = *param_3;
  bVar6 = uVar1 <= uVar3;
  if (uVar3 == uVar1) {
    bVar6 = param_3[1] <= param_1[1];
  }
  if (!bVar5 == !bVar6) {
    bVar6 = uVar1 <= uVar4;
    if (uVar4 == uVar1) {
      bVar6 = param_3[1] <= param_2[1];
    }
    param_1 = param_2;
    if (!bVar5 != !bVar6) {
      param_1 = param_3;
    }
  }
  return param_1;
}


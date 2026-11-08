// FUN_0137f7bc @ 0137f7bc size=176 calls_out=1 calls_in=3
// strings: 

uint * FUN_0137f7bc(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar3 = uVar1 * 8 - (param_4 >> 3);
    param_1 = (uint *)FUN_0137f7bc(param_1,param_1 + uVar1 * 4,param_1 + iVar3,uVar1);
    param_2 = (uint *)FUN_0137f7bc(param_2,param_2 + uVar1 * 4,param_2 + iVar3,uVar1);
    param_3 = (uint *)FUN_0137f7bc(param_3,param_3 + uVar1 * 4,param_3 + iVar3,uVar1);
  }
  uVar1 = *param_2;
  uVar2 = *param_1;
  if (uVar2 < uVar1 != uVar1 < *param_3) {
    param_2 = param_3;
  }
  if (uVar2 < uVar1 != uVar2 < *param_3) {
    param_2 = param_1;
  }
  return param_2;
}


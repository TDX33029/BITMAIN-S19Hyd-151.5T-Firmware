// FUN_0199ebdc @ 0199ebdc size=180 calls_out=1 calls_in=2
// strings: 

uint * FUN_0199ebdc(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar3 = uVar1 * 8 - (param_4 >> 3);
    param_1 = (uint *)FUN_0199ebdc(param_1,param_1 + uVar1 * 8,param_1 + iVar3 * 2,uVar1);
    param_2 = (uint *)FUN_0199ebdc(param_2,param_2 + uVar1 * 8,param_2 + iVar3 * 2,uVar1);
    param_3 = (uint *)FUN_0199ebdc(param_3,param_3 + uVar1 * 8,param_3 + iVar3 * 2,uVar1);
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


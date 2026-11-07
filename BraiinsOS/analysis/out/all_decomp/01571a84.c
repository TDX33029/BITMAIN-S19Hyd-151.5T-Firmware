// FUN_01571a84 @ 01571a84 size=148 calls_out=2 calls_in=0
// strings: 

void FUN_01571a84(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *param_2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  if (uVar3 <= uVar1) {
    uVar3 = param_2[1];
    uVar6 = param_2[4];
    if (0x7ffffffe < uVar3) {
      uVar3 = 0x7fffffff;
    }
    uVar3 = FUN_016e0250(param_2[5],iVar5,uVar3);
    if (uVar3 == 0xffffffff) {
      puVar2 = (undefined4 *)FUN_016d2bc8();
      uVar4 = *puVar2;
      param_2[2] = 0;
      param_2[3] = 0;
      param_1[1] = 0;
      param_1[2] = uVar4;
      *param_1 = 1;
      return;
    }
    uVar1 = 0;
    if (uVar6 < uVar3) {
      uVar6 = uVar3;
    }
    param_2[2] = 0;
    param_2[3] = uVar3;
    param_2[4] = uVar6;
  }
  param_1[1] = iVar5 + uVar1;
  param_1[2] = uVar3 - uVar1;
  *param_1 = 0;
  return;
}


// FUN_012b24c8 @ 012b24c8 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_012b24c8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = param_1[2];
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  if ((uint)(*param_1 - iVar1) < uVar3) {
    FUN_006520b4(param_1,iVar1,uVar3,1,1);
    iVar1 = param_1[2];
  }
  FUN_01bed4e2(param_1[1] + iVar1,uVar2,uVar3);
  param_1[2] = iVar1 + uVar3;
  FUN_0134bd64(*param_2,uVar2);
  return;
}


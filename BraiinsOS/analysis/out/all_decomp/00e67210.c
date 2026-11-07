// FUN_00e67210 @ 00e67210 size=152 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00e67210(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*param_2 == 2 && param_2[1] == 0) {
    uVar3 = *param_1;
    *param_1 = uVar3 + 1;
    param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar3);
    return 0;
  }
  uVar3 = 3;
  if ((*param_2 & 1) != 0) {
    uVar3 = 0xb;
  }
  uVar1 = *param_1 + uVar3;
  uVar4 = 1;
  if ((param_2[4] & 1) != 0) {
    uVar4 = 9;
  }
  uVar5 = uVar1 + uVar4;
  iVar2 = param_1[1] + (uint)CARRY4(*param_1,uVar3) + (uint)CARRY4(uVar1,uVar4);
  if ((param_2[8] & 1) == 0) {
    *param_1 = uVar5 + 1;
    param_1[1] = iVar2 + (uint)(0xfffffffe < uVar5);
    return 0;
  }
  *param_1 = uVar5 + 9;
  param_1[1] = iVar2 + (uint)(0xfffffff6 < uVar5);
  return 0;
}


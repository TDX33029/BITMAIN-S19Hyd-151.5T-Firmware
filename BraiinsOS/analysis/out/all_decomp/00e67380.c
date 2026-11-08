// FUN_00e67380 @ 00e67380 size=176 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00e67380(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*param_2 == 2 && param_2[1] == 0) {
    uVar4 = *param_1;
    *param_1 = uVar4 + 1;
    param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar4);
    return 0;
  }
  uVar4 = 2;
  if ((*param_2 & 1) != 0) {
    uVar4 = 10;
  }
  uVar7 = 1;
  uVar1 = *param_1 + uVar4;
  uVar6 = 1;
  if ((param_2[4] & 1) != 0) {
    uVar6 = 9;
  }
  uVar2 = uVar1 + uVar6;
  if ((param_2[8] & 1) != 0) {
    uVar7 = 9;
  }
  uVar5 = uVar2 + uVar7;
  iVar3 = param_1[1] + (uint)CARRY4(*param_1,uVar4) + (uint)CARRY4(uVar1,uVar6) +
          (uint)CARRY4(uVar2,uVar7);
  if ((param_2[0xc] & 1) == 0) {
    *param_1 = uVar5 + 1;
    param_1[1] = iVar3 + (uint)(0xfffffffe < uVar5);
    return 0;
  }
  *param_1 = uVar5 + 9;
  param_1[1] = iVar3 + (uint)(0xfffffff6 < uVar5);
  return 0;
}


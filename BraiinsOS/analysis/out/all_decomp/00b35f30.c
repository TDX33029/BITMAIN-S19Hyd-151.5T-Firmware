// FUN_00b35f30 @ 00b35f30 size=68 calls_out=0 calls_in=0
// strings: 

void FUN_00b35f30(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 2;
  if ((uint)(*param_2 < 5) <= -param_2[1]) {
    iVar1 = *param_2 - 5;
  }
  if (iVar1 == 0) {
    *param_1 = 5;
    param_1[1] = 0;
    return;
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return;
}


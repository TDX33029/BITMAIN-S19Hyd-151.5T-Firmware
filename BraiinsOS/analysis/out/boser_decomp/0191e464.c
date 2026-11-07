// FUN_0191e464 @ 0191e464 size=136 calls_out=0 calls_in=3
// strings: 

void FUN_0191e464(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r6;
  int iVar4;
  int iVar5;
  
  if (*param_2 == 0) {
    uVar2 = param_2[2];
    if (uVar2 == 0) goto LAB_0191e4e0;
    iVar4 = param_2[1];
    uVar3 = param_2[4];
    if (uVar2 < (uint)param_2[4]) {
      uVar3 = uVar2;
    }
    uVar2 = uVar2 - uVar3;
    iVar5 = iVar4 + uVar3;
  }
  else {
    uVar3 = param_2[2];
    if (param_2[3] == uVar3) {
LAB_0191e4e0:
      uVar1 = 0;
      goto LAB_0191e4e4;
    }
    iVar4 = param_2[1];
    unaff_r6 = param_2[3];
    uVar2 = uVar3 + param_2[4];
    iVar5 = iVar4;
    if (unaff_r6 < uVar3 + param_2[4]) {
      uVar2 = unaff_r6;
    }
  }
  param_2[1] = iVar5;
  param_2[2] = uVar2;
  param_2[3] = unaff_r6;
  uVar1 = 1;
  param_1[1] = *param_2;
  param_1[2] = iVar4;
  param_1[3] = uVar3;
  param_1[4] = uVar2;
LAB_0191e4e4:
  *param_1 = uVar1;
  return;
}


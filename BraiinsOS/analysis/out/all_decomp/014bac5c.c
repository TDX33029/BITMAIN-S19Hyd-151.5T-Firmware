// FUN_014bac5c @ 014bac5c size=176 calls_out=3 calls_in=1
// strings: 

void FUN_014bac5c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_3;
  iVar1 = param_2[2];
  iVar2 = param_3[1];
  uVar3 = param_3[2];
  if ((uint)(*param_2 - iVar1) < uVar3) {
    FUN_0148d72c(param_2,iVar1,uVar3,4,0xc);
    iVar1 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar1 * 0xc,iVar2,uVar3 * 0xc);
  param_2[2] = iVar1 + uVar3;
  if (iVar5 != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar5;
  iVar1 = param_2[5];
  iVar2 = param_2[6];
  iVar5 = param_2[7];
  iVar4 = param_2[8];
  param_1[4] = param_2[4];
  param_1[5] = iVar1;
  param_1[6] = iVar2;
  param_1[7] = iVar5;
  param_1[8] = iVar4;
  return;
}


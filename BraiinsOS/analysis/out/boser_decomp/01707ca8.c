// FUN_01707ca8 @ 01707ca8 size=168 calls_out=3 calls_in=1
// strings: 

void FUN_01707ca8(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  local_28 = *param_3;
  iVar2 = param_3[1];
  uVar5 = param_3[2];
  iVar3 = param_2[2];
  local_24 = iVar2 + uVar5 * 0xc;
  local_30 = iVar2;
  local_2c = iVar2;
  if ((uint)(*param_2 - iVar3) < uVar5) {
    FUN_01af7b44(param_2,iVar3,uVar5,4,0xc);
    iVar3 = param_2[2];
  }
  FUN_01bed4e2(param_2[1] + iVar3 * 0xc,iVar2,uVar5 * 0xc);
  param_2[2] = iVar3 + uVar5;
  local_24 = iVar2;
  FUN_017152ec(&local_30);
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar1 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  param_1[3] = iVar1;
  iVar2 = param_2[5];
  iVar3 = param_2[6];
  iVar1 = param_2[7];
  iVar4 = param_2[8];
  param_1[4] = param_2[4];
  param_1[5] = iVar2;
  param_1[6] = iVar3;
  param_1[7] = iVar1;
  param_1[8] = iVar4;
  return;
}


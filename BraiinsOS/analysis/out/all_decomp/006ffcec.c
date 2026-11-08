// FUN_006ffcec @ 006ffcec size=620 calls_out=2 calls_in=1
// strings: 

void FUN_006ffcec(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = param_2[2];
  uVar3 = *param_3;
  uVar4 = param_3[1];
  if (*param_2 == iVar1) {
    FUN_006bca64(param_2,iVar1,1,1,1);
    iVar1 = param_2[2];
  }
  iVar2 = iVar1 + 1;
  param_2[2] = iVar2;
  *(char *)(param_2[1] + iVar1) = (char)uVar4;
  if ((uint)(*param_2 - iVar2) < uVar4) {
    FUN_006bca64(param_2,iVar2,uVar4,1,1);
    iVar2 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar2,uVar3,uVar4);
  iVar2 = iVar2 + uVar4;
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  param_2[2] = iVar2;
  if (*param_2 == iVar2) {
    FUN_006bca64(param_2,iVar2,1,1,1);
    iVar2 = param_2[2];
  }
  iVar1 = iVar2 + 1;
  param_2[2] = iVar1;
  *(char *)(param_2[1] + iVar2) = (char)uVar4;
  if ((uint)(*param_2 - iVar1) < uVar4) {
    FUN_006bca64(param_2,iVar1,uVar4,1,1);
    iVar1 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar1,uVar3,uVar4);
  iVar1 = iVar1 + uVar4;
  uVar3 = param_3[4];
  uVar4 = param_3[5];
  param_2[2] = iVar1;
  if (*param_2 == iVar1) {
    FUN_006bca64(param_2,iVar1,1,1,1);
    iVar1 = param_2[2];
  }
  iVar2 = iVar1 + 1;
  param_2[2] = iVar2;
  *(char *)(param_2[1] + iVar1) = (char)uVar4;
  if ((uint)(*param_2 - iVar2) < uVar4) {
    FUN_006bca64(param_2,iVar2,uVar4,1,1);
    iVar2 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar2,uVar3,uVar4);
  iVar2 = iVar2 + uVar4;
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  param_2[2] = iVar2;
  if (*param_2 == iVar2) {
    FUN_006bca64(param_2,iVar2,1,1,1);
    iVar2 = param_2[2];
  }
  iVar1 = iVar2 + 1;
  param_2[2] = iVar1;
  *(char *)(param_2[1] + iVar2) = (char)uVar4;
  if ((uint)(*param_2 - iVar1) < uVar4) {
    FUN_006bca64(param_2,iVar1,uVar4,1,1);
    iVar1 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar1,uVar3,uVar4);
  param_2[2] = iVar1 + uVar4;
  *param_1 = 0x8000000a;
  return;
}


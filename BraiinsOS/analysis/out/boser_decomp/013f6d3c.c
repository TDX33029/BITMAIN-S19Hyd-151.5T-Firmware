// FUN_013f6d3c @ 013f6d3c size=116 calls_out=0 calls_in=1
// strings: 

void FUN_013f6d3c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  bool bVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == 0) {
    return;
  }
  iVar2 = *param_1;
  bVar4 = iVar2 == 1;
  if (bVar4) {
    iVar2 = param_1[1];
  }
  if (bVar4 && iVar2 == iVar1) {
    unaff_r5 = *(int *)(iVar2 + 4);
    unaff_r4 = 1;
  }
  iVar3 = *(int *)(iVar1 + 4);
  param_1[3] = iVar3;
  if (bVar4 && iVar2 == iVar1) {
    *param_1 = unaff_r4;
    param_1[1] = unaff_r5;
  }
  if (iVar3 == 0) {
    param_1[4] = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  iVar2 = param_1[2];
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  param_1[2] = iVar2 + -1;
  return;
}


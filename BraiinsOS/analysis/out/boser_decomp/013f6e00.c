// FUN_013f6e00 @ 013f6e00 size=100 calls_out=0 calls_in=2
// strings: 

void FUN_013f6e00(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
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
    unaff_r5 = *(int *)(iVar2 + 0xc);
    unaff_r4 = 1;
  }
  piVar3 = *(int **)(iVar1 + 0xc);
  param_1[3] = (int)piVar3;
  if (bVar4 && iVar2 == iVar1) {
    *param_1 = unaff_r4;
    param_1[1] = unaff_r5;
  }
  if (piVar3 == (int *)0x0) {
    piVar3 = param_1;
  }
  piVar3[4] = 0;
  iVar2 = param_1[2];
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  param_1[2] = iVar2 + -1;
  return;
}


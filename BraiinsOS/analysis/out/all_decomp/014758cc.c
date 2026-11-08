// FUN_014758cc @ 014758cc size=180 calls_out=3 calls_in=0
// strings: 

void FUN_014758cc(int *param_1,int param_2)

{
  int iVar1;
  int unaff_r4;
  int iVar2;
  int unaff_r5;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(int *)(param_2 + 0x228) == -0x80000000) || (*(int *)(param_2 + 0x230) == 0)) {
    *param_1 = -0x80000000;
    param_1[1] = unaff_r5;
    param_1[2] = unaff_r4;
    return;
  }
  iVar2 = *(int *)(*(int *)(param_2 + 0x22c) + 8);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar2);
  }
  uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x22c) + 4);
  if (iVar2 == 0) {
    iVar4 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar2);
    }
    iVar4 = iVar2;
  }
  FUN_016dd1aa(iVar1,uVar3,iVar2);
  *param_1 = iVar4;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}


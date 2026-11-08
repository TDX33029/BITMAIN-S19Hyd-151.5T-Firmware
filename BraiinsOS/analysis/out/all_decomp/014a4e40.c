// FUN_014a4e40 @ 014a4e40 size=180 calls_out=4 calls_in=0
// strings: 

void FUN_014a4e40(int *param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  int iVar4;
  
  if (*param_1 == -0x80000000) {
    iVar4 = -0x80000000;
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[2];
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar2);
    }
    iVar3 = param_1[1];
    if (iVar2 == 0) {
      unaff_r5 = 1;
      iVar4 = 0;
    }
    else {
      unaff_r5 = thunk_FUN_016d4a50(iVar2);
      if (unaff_r5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar2);
      }
      iVar4 = iVar2;
    }
    FUN_016dd1aa(unaff_r5,iVar3,iVar2);
  }
  piVar1 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *piVar1 = iVar4;
  piVar1[1] = unaff_r5;
  piVar1[2] = iVar2;
  return;
}


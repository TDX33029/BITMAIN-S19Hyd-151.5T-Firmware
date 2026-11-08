// FUN_00666914 @ 00666914 size=128 calls_out=3 calls_in=7
// strings: 

void FUN_00666914(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 != -0x80000000) {
    iVar3 = param_2[1];
    iVar2 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar3;
    param_1[2] = iVar2;
    return;
  }
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  if (iVar3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_01298504(iVar3,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar3);
    }
  }
  FUN_01bed4e2(iVar1,iVar2,iVar3);
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  return;
}


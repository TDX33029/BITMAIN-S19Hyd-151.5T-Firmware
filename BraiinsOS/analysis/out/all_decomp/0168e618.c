// FUN_0168e618 @ 0168e618 size=136 calls_out=3 calls_in=2
// strings: 

void FUN_0168e618(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == -0x80000000) {
    iVar2 = param_1[2];
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar2);
    }
    iVar3 = param_1[1];
    if (iVar2 == 0) {
      iVar4 = 0;
      iVar1 = 1;
    }
    else {
      iVar1 = thunk_FUN_016d4a50(iVar2);
      iVar4 = iVar2;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar2);
      }
    }
    FUN_016dd1aa(iVar1,iVar3,iVar2);
    *param_1 = iVar4;
    param_1[1] = iVar1;
  }
  return;
}


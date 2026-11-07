// FUN_01574b00 @ 01574b00 size=164 calls_out=3 calls_in=5
// strings: 

void FUN_01574b00(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2[2];
  iVar4 = param_2[1];
  iVar3 = iVar2;
  if (*param_2 == -0x80000000) {
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar2);
    }
    if (iVar2 == 0) {
      iVar1 = 1;
      iVar3 = 0;
    }
    else {
      iVar1 = thunk_FUN_016d4a50(iVar2);
      if (iVar1 == 0) goto LAB_01574b68;
    }
  }
  else if (iVar2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar2);
    if (iVar1 == 0) {
LAB_01574b68:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar2);
    }
  }
  FUN_016dd1aa(iVar1,iVar4,iVar2);
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}


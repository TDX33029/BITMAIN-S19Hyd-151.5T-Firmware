// FUN_00a5aba8 @ 00a5aba8 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_00a5aba8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_2 + 0x4cc);
  uVar3 = *(undefined4 *)(param_2 + 0x4c8);
  if (iVar2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar2);
    }
  }
  FUN_016dd1aa(iVar1,uVar3,iVar2);
  *param_1 = iVar2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}


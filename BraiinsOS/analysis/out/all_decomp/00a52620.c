// FUN_00a52620 @ 00a52620 size=88 calls_out=3 calls_in=0
// strings: 

void FUN_00a52620(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar3);
    }
  }
  FUN_016dd1aa(iVar1,uVar2,iVar3);
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  return;
}


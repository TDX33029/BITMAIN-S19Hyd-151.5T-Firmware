// FUN_00e984e4 @ 00e984e4 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_00e984e4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x164) == -0x80000000) {
    *param_1 = -0x80000000;
    return;
  }
  iVar2 = *(int *)(param_2 + 0x16c);
  uVar3 = *(undefined4 *)(param_2 + 0x168);
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


// FUN_012bdbd4 @ 012bdbd4 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_012bdbd4(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 8) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,*(uint *)(param_1 + 8),&DAT_01890988);
  }
  iVar2 = *(int *)(param_1 + 4);
  piVar1 = (int *)thunk_FUN_016d4a50(8);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *piVar1 = iVar2;
  piVar1[1] = iVar2 + uVar3 * 0x28;
  return;
}


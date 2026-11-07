// FUN_01a61a00 @ 01a61a00 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_01a61a00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  piVar1 = (int *)thunk_FUN_01be5118(8);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *piVar1 = iVar2;
  piVar1[1] = iVar2 + iVar3 * 0xc0;
  return;
}


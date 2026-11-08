// FUN_016c600c @ 016c600c size=108 calls_out=2 calls_in=1
// strings: 

void FUN_016c600c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x2ec);
  if (uVar3 == 0) {
    return;
  }
  iVar2 = uVar3 - 1;
  *(int *)(param_1 + 0x2ec) = iVar2;
  if (6 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(iVar2,6,&DAT_018af2f8);
  }
  piVar1 = (int *)(param_1 + iVar2 * 0x7c);
  if ((-0x7fffffff < *piVar1) && (*piVar1 != 0)) {
    thunk_FUN_016d3fb4(piVar1[1]);
  }
  *piVar1 = -0x7fffffff;
  return;
}


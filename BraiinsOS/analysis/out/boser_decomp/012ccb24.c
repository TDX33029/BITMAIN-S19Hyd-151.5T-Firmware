// FUN_012ccb24 @ 012ccb24 size=92 calls_out=1 calls_in=3
// strings: 

int FUN_012ccb24(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2b728);
  }
  if (iVar1 == param_1) {
    return 0;
  }
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2b738);
  }
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return iVar1;
}


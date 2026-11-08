// FUN_009c6bc0 @ 009c6bc0 size=260 calls_out=3 calls_in=1
// strings: internal error: entered unreachable code: invalid Once state | internal error: entered unreachable code: invalid Once state | internal error: entered unreachable code: invalid Once state | internal error: entered unreachable code: invalid Once state

void FUN_009c6bc0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_008e7734(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  if ((1 < *(int *)(param_1 + 0xd0) - 2U) && (*(int *)(param_1 + 0xd0) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874);
  }
  if ((1 < *(int *)(param_1 + 0x68) - 2U) && (*(int *)(param_1 + 0x68) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874);
  }
  if ((1 < *(int *)(param_1 + 0x90) - 2U) && (*(int *)(param_1 + 0x90) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874);
  }
  if (*(int *)(param_1 + 0xa8) - 2U < 2) {
    return;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874);
  }
  return;
}


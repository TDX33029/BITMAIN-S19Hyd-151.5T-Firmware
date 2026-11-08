// FUN_011eb02c @ 011eb02c size=108 calls_out=2 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state

void FUN_011eb02c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x14) - 2U < 2) {
    return;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874);
  }
  piVar3 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}


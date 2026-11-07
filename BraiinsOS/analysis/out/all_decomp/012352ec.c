// FUN_012352ec @ 012352ec size=92 calls_out=3 calls_in=0
// strings: 

int * FUN_012352ec(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0122ab8c();
  if (iVar1 == 0) {
    return (int *)&DAT_00000001;
  }
  piVar2 = (int *)thunk_FUN_016d4a50(4);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *piVar2 = iVar1;
  return piVar2;
}


// FUN_01665068 @ 01665068 size=60 calls_out=3 calls_in=3
// strings: 

int * FUN_01665068(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0134a8f8();
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  piVar2 = (int *)thunk_FUN_01be5118(4);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *piVar2 = iVar1;
  return piVar2;
}


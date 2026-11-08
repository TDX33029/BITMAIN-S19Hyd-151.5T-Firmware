// FUN_0061d658 @ 0061d658 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_0061d658(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  DAT_018dd948 = puVar2;
  return;
}

